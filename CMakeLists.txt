# ~~~
# Copyright 2017 Google Inc.
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

# Define the project name and where to report bugs.
set(PACKAGE_BUGREPORT "https://github.com/googleapis/google-cloud-cpp/issues")

project(
    google-cloud-cpp
    VERSION 2.6.0
    LANGUAGES CXX)
set(PROJECT_VERSION_PRE_RELEASE "rc")

if (NOT "${PROJECT_VERSION_PRE_RELEASE}" STREQUAL "")
    set(PROJECT_VERSION "${PROJECT_VERSION}-${PROJECT_VERSION_PRE_RELEASE}")
endif ()

if (APPLE AND NOT DEFINED CMAKE_CXX_STANDARD)
    # AppleClang defaults to C++98, so we bump it to C++14.
    message(
        WARNING
            "CMAKE_CXX_STANDARD was undefined, defaulting to C++14."
            "To select the desired standard use something like the following:"
            "\n"
            "    cmake -DCMAKE_CXX_STANDARD=17 ..."
            "\n"
            "For more details, see "
            "https://cmake.org/cmake/help/latest/variable/CMAKE_CXX_STANDARD.html"
    )
    set(CMAKE_CXX_STANDARD 14)
endif ()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.3)
        message(
            WARNING "The `google-cloud-cpp` library is tested with GCC >= 7.3."
                    " We will consider patches for older versions.")
    endif ()
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 6.0)
        message(
            WARNING
                "The `google-cloud-cpp` library is tested with Clang >= 6.0."
                " We will consider patches for older versions.")
    endif ()
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    if (CMAKE_VERSION VERSION_LESS 3.15)
        message(
            FATAL_ERROR
                "MSVC builds require CMake >= 3.15."
                " Previous versions of CMake lack a standard mechanism to"
                " select the runtime C++ library.")
    endif ()
endif ()

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(SelectMSVCRuntime)

option(GOOGLE_CLOUD_CPP_ENABLE_MACOS_OPENSSL_CHECK
       "If enabled, check that the user has defined OPENSSL_ROOT_DIR on macOS"
       ON)
# This is an easy mistake to make, and the error messages are very confusing.
# Help our users by giving them some guidance.
if (APPLE
    AND GOOGLE_CLOUD_CPP_ENABLE_MACOS_OPENSSL_CHECK
    AND NOT DEFINED OPENSSL_ROOT_DIR)
    message(
        WARNING
            "The Google Cloud C++ client libraries use the native OpenSSL "
            "library. In most macOS systems, you need to set the "
            "OPENSSL_ROOT_DIR environment variable to find this dependency, "
            "for example:"
            "\n"
            "    cmake -DOPENSSL_ROOT_DIR=/usr/local/opt/openssl ..."
            "\n"
            "You have not set this variable. Most likely, this will result in "
            "a broken build with fairly obscure error messages. If your "
            "environment does not require setting OPENSSL_ROOT_DIR, you can "
            "disable this check using:"
            "\n"
            "    cmake -DGOOGLE_CLOUD_CPP_ENABLE_MACOS_OPENSSL_CHECK=OFF ...")
endif ()

# If ccache is installed use it for the build.
option(GOOGLE_CLOUD_CPP_ENABLE_CCACHE "Automatically use ccache if available"
       ON)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_CCACHE)

if ("${GOOGLE_CLOUD_CPP_ENABLE_CCACHE}")
    find_program(GOOGLE_CLOUD_CPP_CCACHE_PROGRAM ccache NAMES /usr/bin/ccache)
    mark_as_advanced(GOOGLE_CLOUD_CPP_CCACHE_PROGRAM)
    if (GOOGLE_CLOUD_CPP_CCACHE_PROGRAM)
        message(STATUS "ccache found: ${GOOGLE_CLOUD_CPP_CCACHE_PROGRAM}")
        set(CMAKE_CXX_COMPILER_LAUNCHER "${GOOGLE_CLOUD_CPP_CCACHE_PROGRAM}")
        set(CMAKE_CC_COMPILER_LAUNCHER "${GOOGLE_CLOUD_CPP_CCACHE_PROGRAM}")
    endif ()
endif ()

# Search for Doxygen and create the targets for it if found.
option(GOOGLE_CLOUD_CPP_GENERATE_DOXYGEN "Generate Doxygen documentation" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_GENERATE_DOXYGEN)

# Generate docs with relative URLs matching with the directory structure on
# googleapis.dev hosting.
option(GOOGLE_CLOUD_CPP_GEN_DOCS_FOR_GOOGLEAPIS_DEV
       "Use relative URLs in docs for googleapis.dev" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_GEN_DOCS_FOR_GOOGLEAPIS_DEV)

# Use main as the version part of the relative URLs.
option(GOOGLE_CLOUD_CPP_USE_MAIN_FOR_REFDOC_LINKS
       "Use main as the version part for refdoc relative links" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_USE_MAIN_FOR_REFDOC_LINKS)

set(GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL
    ""
    CACHE
        STRING
        [==[
Override the default URL for the googleapis protos. google-cloud-cpp needs the
proto and gRPC definitions for most Google Cloud services. By default these
definitions are downloaded from GitHub. In some environments, this may not be
possible. This variable can be used to use a local directory, or a local
tarball, with the proto definitions.

If you override this variable, you must ensure the proto definitions match the
expectations in google-cloud-cpp. Using the same SHA is the recommended
practice. Using older SHAs is **NOT** supported, and will almost certainly
result in build problems. You may be able to use a more recent SHA of the
protos, but do not expect that new features will become exposed via the C++
client libraries.
]==])
mark_as_advanced(GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL)
set(GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL_HASH
    ""
    CACHE
        STRING
        [==[
Override the hash for the googleapis protos tarball. See
GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL for details.
]==])
mark_as_advanced(GOOGLE_CLOUD_CPP_OVERRIDE_GOOGLEAPIS_URL_HASH)

include(CMakeDependentOption)

option(GOOGLE_CLOUD_CPP_ENABLE_BIGTABLE "Enable building the Bigtable library."
       ON)
option(GOOGLE_CLOUD_CPP_ENABLE_BIGQUERY "Enable building the Bigquery library."
       ON)
option(GOOGLE_CLOUD_CPP_ENABLE_SPANNER "Enable building the Spanner library."
       ON)
option(GOOGLE_CLOUD_CPP_ENABLE_STORAGE "Enable building the Storage library."
       ON)
option(GOOGLE_CLOUD_CPP_ENABLE_PUBSUB "Enable building the Pub/Sub library." ON)
option(GOOGLE_CLOUD_CPP_ENABLE_IAM "Enable building the IAM library." ON)
option(GOOGLE_CLOUD_CPP_ENABLE_LOGGING "Enable building the Logging library."
       ON)
option(GOOGLE_CLOUD_CPP_ENABLE_GENERATOR "Enable building the generator." OFF)

# The default list of libraries to build. These can be overridden by the user by
# passing a comma-separated list, i.e
# `-DGOOGLE_CLOUD_CPP_ENABLE=spanner,storage`.
set(GOOGLE_CLOUD_CPP_LEGACY_FEATURES
    "bigtable;bigquery;iam;logging;pubsub;spanner;storage")
set(GOOGLE_CLOUD_CPP_ENABLE
    ${GOOGLE_CLOUD_CPP_LEGACY_FEATURES}
    CACHE STRING "The list of libraries to build.")
string(REPLACE "," ";" GOOGLE_CLOUD_CPP_ENABLE "${GOOGLE_CLOUD_CPP_ENABLE}")

# Since these are not the recommended practice, mark them as advanced.
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_BIGTABLE)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_BIGQUERY)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_SPANNER)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_STORAGE)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_PUBSUB)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_IAM)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_LOGGING)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_GENERATOR)

set(GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC_DEFAULT OFF)
if (experimental-storage-grpc IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
    set(GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC_DEFAULT ON)
endif ()
option(GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC
       "Enable compilation for the GCS gRPC plugin (EXPERIMENTAL)"
       "${GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC_DEFAULT}")
mark_as_advanced(GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC)

# We no longer build the generator by default, but if it was explicitly
# requested, we add it to the list of enabled libraries.
if (GOOGLE_CLOUD_CPP_ENABLE_GENERATOR)
    list(APPEND GOOGLE_CLOUD_CPP_ENABLE "generator")
endif ()

function (google_cloud_cpp_enable_deps)
    if (asset IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
        list(APPEND GOOGLE_CLOUD_CPP_ENABLE accesscontextmanager osconfig)
    endif ()
    if (binaryauthorization IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
        list(APPEND GOOGLE_CLOUD_CPP_ENABLE grafeas)
    endif ()
    if (containeranalysis IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
        list(APPEND GOOGLE_CLOUD_CPP_ENABLE grafeas)
    endif ()
    if (pubsublite IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
        list(APPEND GOOGLE_CLOUD_CPP_ENABLE pubsub)
    endif ()
    set(GOOGLE_CLOUD_CPP_ENABLE
        "${GOOGLE_CLOUD_CPP_ENABLE}"
        PARENT_SCOPE)
endfunction ()

function (google_cloud_cpp_enable_cleanup)
    # Remove any library that's been disabled from the list.
    foreach (library ${GOOGLE_CLOUD_CPP_ENABLE})
        if ("${library}" STREQUAL "experimental-storage-grpc")
            set(feature_flag "GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC")
        else ()
            string(TOUPPER "GOOGLE_CLOUD_CPP_ENABLE_${library}" feature_flag)
        endif ()
        if (NOT ${feature_flag} AND ${feature_flag} IN_LIST
                                    GOOGLE_CLOUD_CPP_LEGACY_FEATURES)
            message(
                WARNING "Using ${feature_flag} is discouraged. Please use the"
                        " unified GOOGLE_CLOUD_CPP_ENABLE list instead.")
            list(REMOVE_ITEM GOOGLE_CLOUD_CPP_ENABLE ${library})
        endif ()
    endforeach ()
    list(REMOVE_DUPLICATES GOOGLE_CLOUD_CPP_ENABLE)
    set(GOOGLE_CLOUD_CPP_ENABLE
        "${GOOGLE_CLOUD_CPP_ENABLE}"
        PARENT_SCOPE)
endfunction ()

google_cloud_cpp_enable_deps()
google_cloud_cpp_enable_cleanup()

if (GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC AND NOT
                                             GOOGLE_CLOUD_CPP_ENABLE_STORAGE)
    message(
        FATAL_ERROR
            "The experimental GCS+gRPC plugin is enabled, but the base storage"
            " library is disabled. This is not a valid configuration, please"
            " review the options provided to CMake. Pay particular attention to"
            " GOOGLE_CLOUD_CPP_ENABLE, GOOGLE_CLOUD_CPP_ENABLE_STORAGE, and"
            " GOOGLE_CLOUD_CPP_STORAGE_ENABLE_GRPC.")
endif ()

# The only case where gRPC support is not needed is when compiling *only* the
# storage library.
set(GOOGLE_CLOUD_CPP_ENABLE_GRPC_EXPRESSION ON)
if ("${GOOGLE_CLOUD_CPP_ENABLE}" STREQUAL "storage")
    set(GOOGLE_CLOUD_CPP_ENABLE_GRPC_EXPRESSION OFF)
endif ()

cmake_dependent_option(
    GOOGLE_CLOUD_CPP_ENABLE_GRPC "Enable building the gRPC utilities library."
    ON "GOOGLE_CLOUD_CPP_ENABLE_GRPC_EXPRESSION" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_GRPC)

# Building this target results in all protobufs being compiled.
add_custom_target(google-cloud-cpp-protos)

# Each subproject adds dependencies to this target to have their docs generated.
add_custom_target(doxygen-docs)

find_package(absl CONFIG REQUIRED)
if (${GOOGLE_CLOUD_CPP_ENABLE_GRPC})
    find_package(gRPC REQUIRED QUIET)
    find_package(Protobuf REQUIRED QUIET)
    add_subdirectory(external/googleapis)
endif ()

# The only case where REST support is not needed is when not compiling services
# with REST interfaces.
set(GOOGLE_CLOUD_CPP_ENABLE_REST_EXPRESSION ON)
if (NOT storage IN_LIST GOOGLE_CLOUD_CPP_ENABLE
    AND NOT experimental-storage-grpc IN_LIST GOOGLE_CLOUD_CPP_ENABLE
    AND NOT generator IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
    set(GOOGLE_CLOUD_CPP_ENABLE_REST_EXPRESSION OFF)
endif ()
cmake_dependent_option(
    GOOGLE_CLOUD_CPP_ENABLE_REST "Enable building the REST transport library."
    ON "GOOGLE_CLOUD_CPP_ENABLE_REST_EXPRESSION" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_REST)

# Detect incompatible flags and let the customer know what to do.
if (storage IN_LIST GOOGLE_CLOUD_CPP_ENABLE AND NOT
                                                GOOGLE_CLOUD_CPP_ENABLE_REST)
    message(
        FATAL_ERROR
            "If storage is enabled (e.g. -DGOOGLE_CLOUD_CPP_ENABLE=storage),"
            " the REST library cannot be disabled,"
            " i.e., you cannot set -DGOOGLE_CLOUD_CPP_ENABLE_REST=OFF."
            " If you do want to use the storage library,"
            " then do not use -DGOOGLE_CLOUD_CPP_ENABLE_REST=OFF."
            " If you do not want to use the storage library,"
            " then provide a -DGOOGLE_CLOUD_CPP_ENABLE=... list and do not"
            " include storage in that list.")
endif ()

# Enable testing in this directory so we can do a top-level `make test`. This
# also includes the BUILD_TESTING option, which is on by default.
include(CTest)

# Ensure that GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS is initialized since it's
# used in the depends condition of the next option.
include(EnableCxxExceptions)

if (BUILD_TESTING)
    # Discover and add targets for the GTest::gtest and GTest::gmock libraries.
    include(FindGMockWithTargets)
endif ()

# The examples use exception handling to simplify the code. Therefore they
# cannot be compiled when exceptions are disabled, and applications cannot force
# the flag.
cmake_dependent_option(
    GOOGLE_CLOUD_CPP_ENABLE_EXAMPLES "Compile the google-cloud-cpp examples."
    ON "GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS;BUILD_TESTING" OFF)
mark_as_advanced(GOOGLE_CLOUD_CPP_ENABLE_EXAMPLES)

add_subdirectory(google/cloud)
function (google_cloud_cpp_enable_features)
    foreach (feature ${GOOGLE_CLOUD_CPP_ENABLE})
        if ("${feature}" STREQUAL "generator")
            add_subdirectory(generator)
        elseif ("${feature}" STREQUAL "experimental-storage-grpc")
            if (NOT ("storage" IN_LIST GOOGLE_CLOUD_CPP_ENABLE))
                add_subdirectory(google/cloud/storage)
            endif ()
        elseif ("${feature}" STREQUAL "experimental-opentelemetry")
        else ()
            if (NOT IS_DIRECTORY
                "${CMAKE_CURRENT_SOURCE_DIR}/google/cloud/${feature}"
                OR NOT
                   EXISTS
                   "${CMAKE_CURRENT_SOURCE_DIR}/google/cloud/${feature}/CMakeLists.txt"
            )
                message(
                    WARNING
                        "${feature} is not a valid feature in google-cloud-cpp, ignored"
                )
                continue()
            endif ()
            add_subdirectory(google/cloud/${feature})
            if (GOOGLE_CLOUD_CPP_ENABLE_EXAMPLES
                AND IS_DIRECTORY
                    "${CMAKE_CURRENT_SOURCE_DIR}/google/cloud/${feature}/samples"
                AND EXISTS
                    "${CMAKE_CURRENT_SOURCE_DIR}/google/cloud/${feature}/samples/CMakeLists.txt"
            )
                add_subdirectory(google/cloud/${feature}/samples)
            endif ()
            # Older libraries used examples/ to host their examples. The
            # directory name cannot be easily changed as cloud.google.com
            # references these files explicitly.
            if (GOOGLE_CLOUD_CPP_ENABLE_EXAMPLES
                AND IS_DIRECTORY
                    "${CMAKE_CURRENT_SOURCE_DIR}/google/cloud/${feature}/examples"
            )
                add_subdirectory(google/cloud/${feature}/examples)
            endif ()
        endif ()
    endforeach ()
endfunction ()
google_cloud_cpp_enable_features()

# The examples are more readable if we use exceptions for error handling. We had
# to tradeoff readability vs. "making them compile everywhere".
if (GOOGLE_CLOUD_CPP_ENABLE_EXAMPLES
    AND bigtable IN_LIST GOOGLE_CLOUD_CPP_ENABLE
    AND iam IN_LIST GOOGLE_CLOUD_CPP_ENABLE
    AND spanner IN_LIST GOOGLE_CLOUD_CPP_ENABLE
    AND storage IN_LIST GOOGLE_CLOUD_CPP_ENABLE)
    add_subdirectory(examples)
endif ()

# Obsolete / retired flags and options. Removing them just cleans up a bit of
# our code at the cost of breaking customers, while putting them here makes them
# basically invisible to us.
set(GOOGLE_CLOUD_CPP_CXX_STANDARD
    ""
    CACHE STRING "Unused. Prefer CMAKE_CXX_STANDARD")
mark_as_advanced(GOOGLE_CLOUD_CPP_CXX_STANDARD)

# The default source for dependencies.
set(GOOGLE_CLOUD_CPP_DEPENDENCY_PROVIDER
    "unused"
    CACHE STRING "This option is no longer used.")
set_property(CACHE GOOGLE_CLOUD_CPP_DEPENDENCY_PROVIDER
             PROPERTY STRINGS "external" "package" "unused")
mark_as_advanced(GOOGLE_CLOUD_CPP_DEPENDENCY_PROVIDER)
