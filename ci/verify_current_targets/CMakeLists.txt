# ~~~
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
# ~~~

cmake_minimum_required(VERSION 3.10...3.24)
project(verify-exported-targets CXX)

# We list the common libraries first because we want to load their packages
# early.
set(common_libraries common grpc_utils mocks)

# Add GA libraries to this list, the only difference is the name of the CMake
# targets
set(ga_libraries
    # cmake-format: sortable
    bigquery
    bigtable
    iam
    logging
    pubsub
    pubsub_mocks
    spanner
    storage)

# CMake can use pkg-config to find dependencies. We recommend using CMake
# targets, but we want to verify our pkg-config files remain usable and
# backwards compatible.
find_package(PkgConfig REQUIRED)
find_package(Threads REQUIRED)
include(CTest)

function (add_test_case name)
    add_executable("${name}" verify_current_targets.cc)
    target_link_libraries("${name}" PRIVATE ${ARGN})
    add_test(NAME "${name}" COMMAND "${name}")
endfunction ()

foreach (library ${common_libraries} ${ga_libraries})
    find_package("google_cloud_cpp_${library}" REQUIRED)
endforeach ()

foreach (library ${common_libraries} ${ga_libraries})
    add_test_case(test_cmake_${library} google-cloud-cpp::${library})
endforeach ()

foreach (library ${common_libraries} ${ga_libraries})
    message("library=${library}")
    pkg_check_modules(${library} IMPORTED_TARGET REQUIRED
                      google_cloud_cpp_${library})
    add_test_case(test_pc_${library} PkgConfig::${library})
endforeach ()
