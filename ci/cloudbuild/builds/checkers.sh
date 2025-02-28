#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -euo pipefail

source "$(dirname "$0")/../../lib/init.sh"
source module ci/lib/io.sh
source module ci/cloudbuild/builds/lib/git.sh
source module ci/cloudbuild/builds/lib/features.sh

# Runs sed expressions (specified after -e) over the given files, editing them
# in place. This function is exported so it can be run in subshells, such as
# with xargs -P. Example:
#
#   sed_edit -e 's/foo/bar/g' -e 's,baz,blah,' hello.txt
#
function sed_edit() {
  local expressions=()
  local files=()
  while [[ $# -gt 0 ]]; do
    case "$1" in
      -e)
        test $# -gt 1 || return 1
        expressions+=("-e" "$2")
        shift 2
        ;;
      *)
        files+=("$1")
        shift
        ;;
    esac
  done
  for file in "${files[@]}"; do
    local tmp="${file}.tmp"
    sed "${expressions[@]}" "${file}" >"${tmp}"
    if cmp -s "${file}" "${tmp}"; then
      rm -f "${tmp}"
    else
      chmod --reference="${file}" "${tmp}"
      mv -f "${tmp}" "${file}"
    fi
  done
}
export -f sed_edit

# This controls the output format from bash's `time` command, which we use
# below to time blocks of the script. A newline is automatically included.
readonly TIMEFORMAT="... %R seconds"

# Use the printf command rather than the shell builtin, which avoids issues
# with bash sometimes buffering output from its builtins. See
# https://github.com/googleapis/google-cloud-cpp/issues/4152
enable -n printf

# Check for typos first so we don't generate more new files w/ the same typos.
printf "%-50s" "Running typos:" >&2
time {
  # See https://github.com/crate-ci/typos for more details.
  # A couple useful invocations:
  #  $ typos --write-changes  # writes spelling fixes back to disk
  #  $ typos --dump-config -  # dumps effective config to stdout
  typos
}

printf "%-50s" "Running check-include-guards:" >&2
time {
  git ls-files -z -- '*.h' |
    xargs -0 awk -f "ci/check-include-guards.gawk"
}

# TODO(#4501) - this fixup can be removed if #include <absl/...> works
# Apply transformations to fix errors on MSVC+x86. See the bug for a detailed
# explanation as to why this is needed:
#   https://github.com/googleapis/google-cloud-cpp/issues/4501
# This should run before clang-format because it might alter the order of any
# includes.
printf "%-50s" "Running Abseil header fixes:" >&2
time {
  expressions=("-e" "'s;#include \"absl/strings/str_\(cat\|replace\|join\).h\";#include \"google/cloud/internal/absl_str_\1_quiet.h\";'")
  git ls-files -z -- '*.h' '*.cc' |
    grep -zv 'google/cloud/internal/absl_.*quiet.h$' |
    xargs -P "$(nproc)" -n 50 -0 bash -c "sed_edit ${expressions[*]} \"\$0\" \"\$@\""
}

# Apply several transformations that cannot be enforced by clang-format:
#     - Replace any #include for grpc++/* with grpcpp/*. The paths with grpc++
#       are obsoleted by the gRPC team, so we should not use them in our code.
#     - Replace grpc::<BLAH> with grpc::StatusCode::<BLAH>, the aliases in the
#       `grpc::` namespace do not exist inside google.
printf "%-50s" "Running include fixes:" >&2
time {
  expressions=("-e" "'s/grpc::\([A-Z][A-Z_]\+\)/grpc::StatusCode::\1/g'")
  expressions+=("-e" "'s;#include <grpc++/grpc++.h>;#include <grpcpp/grpcpp.h>;'")
  expressions+=("-e" "'s;#include <grpc++/;#include <grpcpp/;'")
  git ls-files -z -- '*.h' '*.cc' |
    xargs -P "$(nproc)" -n 50 -0 bash -c "sed_edit ${expressions[*]} \"\$0\" \"\$@\""
}

# Applies whitespace fixes in text files, unless they request no edits. The
# `[D]` character class makes this file not contain the target text itself.
printf "%-50s" "Running whitespace fixes:" >&2
time {
  # Removes trailing whitespace on lines
  expressions=("-e" "'s/[[:blank:]]\+$//'")
  # Removes trailing blank lines (see http://sed.sourceforge.net/sed1line.txt)
  expressions+=("-e" "':x;/^\n*$/{\$d;N;bx;}'")
  git ls-files -z | grep -zv '\.gz$' | grep -zv 'googleapis.patch$' |
    (xargs -P "$(nproc)" -n 50 -0 grep -ZPL "\b[D]O NOT EDIT\b" || true) |
    xargs -P "$(nproc)" -n 50 -0 bash -c "sed_edit ${expressions[*]} \"\$0\" \"\$@\""
}

# Apply buildifier to fix the BUILD and .bzl formatting rules.
#    https://github.com/bazelbuild/buildtools/tree/master/buildifier
printf "%-50s" "Running buildifier:" >&2
time {
  git ls-files -z -- '*.BUILD' '*.bzl' '*.bazel' |
    xargs -0 buildifier -mode=fix
}

# Apply psf/black to format Python files.
#    https://pypi.org/project/black/
printf "%-50s" "Running black:" >&2
time {
  git ls-files -z -- '*.py' | xargs -0 python3 -m black --quiet
}

# Apply shfmt to format all shell scripts
printf "%-50s" "Running shfmt:" >&2
time {
  git ls-files -z -- '*.sh' | xargs -0 shfmt -w
}

# Apply shellcheck(1) to emit warnings for common scripting mistakes.
printf "%-50s" "Running shellcheck:" >&2
time {
  git ls-files -z -- '*.sh' |
    xargs -P "$(nproc)" -n 1 -0 shellcheck \
      --exclude=SC1090 \
      --exclude=SC1091 \
      --exclude=SC2034 \
      --exclude=SC2153 \
      --exclude=SC2181
}

# The version of clang-format is important, different versions have slightly
# different formatting output (sigh).
printf "%-50s" "Running clang-format:" >&2
time {
  git ls-files -z -- '*.h' '*.cc' |
    xargs -P "$(nproc)" -n 1 -0 clang-format -i
}

# Apply cmake_format to all the CMake list files.
#     https://github.com/cheshirekow/cmake_format
printf "%-50s" "Running cmake-format:" >&2
time {
  git ls-files -z -- '**/CMakeLists.txt' '*.cmake' |
    xargs -P "$(nproc)" -n 1 -0 cmake-format -i
}

# The markdown generators run last. This is useful because as part of the
# markdown generation we insert examples (such as quickstart programs) into
# markdown files. It is nice if those examples are properly formatted.
printf "%-50s" "Running markdown generators:" >&2
time {
  declare -A -r GENERATOR_MAP=(
    ["ci/generate-markdown/generate-readme.sh"]="/dev/null"
    ["ci/generate-markdown/generate-packaging.sh"]="doc/packaging.md"
  )
  for generator in "${!GENERATOR_MAP[@]}"; do
    "${generator}" >"${GENERATOR_MAP[${generator}]}"
  done

  mapfile -t libraries < <(features::libraries)
  for library in "${libraries[@]}"; do
    ci/generate-markdown/update-library-readme.sh "${library}"
  done
}

printf "%-50s" "Running markdown formatter:" >&2
time {
  # See `.mdformat.toml` for the configuration parameters.
  git ls-files -z -- '*.md' | xargs -P "$(nproc)" -n 1 -0 mdformat
}

printf "%-50s" "Running doxygen landing-page updates:" >&2
time {
  mapfile -t libraries < <(features::libraries)
  for library in "${libraries[@]}"; do
    ci/generate-markdown/update-library-landing-dox.sh "${library}"
  done
}

# Report the differences, which should break the build.
git diff --exit-code .
