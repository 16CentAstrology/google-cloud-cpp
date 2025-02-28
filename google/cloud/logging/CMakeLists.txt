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

include(GoogleapisConfig)
set(DOXYGEN_PROJECT_NAME "Google Cloud Logging C++ Client")
set(DOXYGEN_PROJECT_BRIEF "A C++ Client Library for Google Cloud Logging")
set(DOXYGEN_PROJECT_NUMBER "${PROJECT_VERSION}")
set(DOXYGEN_EXCLUDE_SYMBOLS "internal" "logging_internal" "logging_testing"
                            "examples")
set(DOXYGEN_EXAMPLE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/samples
                         ${CMAKE_CURRENT_SOURCE_DIR}/quickstart)

# Creates the proto headers needed by doxygen.
set(GOOGLE_CLOUD_CPP_DOXYGEN_DEPS google-cloud-cpp::logging_protos)

include(GoogleCloudCppCommon)

# configure_file(version_info.h.in ${CMAKE_CURRENT_SOURCE_DIR}/version_info.h)
add_library(
    google_cloud_cpp_logging # cmake-format: sort
    internal/logging_service_v2_auth_decorator.cc
    internal/logging_service_v2_auth_decorator.h
    internal/logging_service_v2_connection_impl.cc
    internal/logging_service_v2_connection_impl.h
    internal/logging_service_v2_logging_decorator.cc
    internal/logging_service_v2_logging_decorator.h
    internal/logging_service_v2_metadata_decorator.cc
    internal/logging_service_v2_metadata_decorator.h
    internal/logging_service_v2_option_defaults.cc
    internal/logging_service_v2_option_defaults.h
    internal/logging_service_v2_retry_traits.h
    internal/logging_service_v2_stub.cc
    internal/logging_service_v2_stub.h
    internal/logging_service_v2_stub_factory.cc
    internal/logging_service_v2_stub_factory.h
    internal/streaming.cc
    logging_service_v2_client.cc
    logging_service_v2_client.h
    logging_service_v2_connection.cc
    logging_service_v2_connection.h
    logging_service_v2_connection_idempotency_policy.cc
    logging_service_v2_connection_idempotency_policy.h
    logging_service_v2_options.h)
target_include_directories(
    google_cloud_cpp_logging
    PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
           $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
           $<INSTALL_INTERFACE:include>)
target_link_libraries(
    google_cloud_cpp_logging
    PUBLIC google-cloud-cpp::grpc_utils google-cloud-cpp::common
           google-cloud-cpp::logging_protos)
google_cloud_cpp_add_common_options(google_cloud_cpp_logging)
set_target_properties(
    google_cloud_cpp_logging
    PROPERTIES EXPORT_NAME google-cloud-cpp::logging
               VERSION "${PROJECT_VERSION}"
               SOVERSION "${PROJECT_VERSION_MAJOR}")
target_compile_options(google_cloud_cpp_logging
                       PUBLIC ${GOOGLE_CLOUD_CPP_EXCEPTIONS_FLAG})

add_library(google-cloud-cpp::logging ALIAS google_cloud_cpp_logging)

# To avoid maintaining the list of files for the library, export them to a .bzl
# file.
include(CreateBazelConfig)
create_bazel_config(google_cloud_cpp_logging YEAR "2021")

# Create a header-only library for the mocks. We use a CMake `INTERFACE` library
# for these, a regular library would not work on macOS (where the library needs
# at least one .o file). Unfortunately INTERFACE libraries are a bit weird in
# that they need absolute paths for their sources.
add_library(google_cloud_cpp_logging_mocks INTERFACE)
target_sources(
    google_cloud_cpp_logging_mocks
    INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/mocks/mock_logging_service_v2_connection.h)
target_link_libraries(
    google_cloud_cpp_logging_mocks
    INTERFACE google-cloud-cpp::logging GTest::gmock_main GTest::gmock
              GTest::gtest)
set_target_properties(google_cloud_cpp_logging_mocks
                      PROPERTIES EXPORT_NAME google-cloud-cpp::logging_mocks)
create_bazel_config(google_cloud_cpp_logging_mocks YEAR "2021")
target_include_directories(
    google_cloud_cpp_logging_mocks
    INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
              $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}>
              $<INSTALL_INTERFACE:include>)
target_compile_options(google_cloud_cpp_logging_mocks
                       INTERFACE ${GOOGLE_CLOUD_CPP_EXCEPTIONS_FLAG})

add_subdirectory(integration_tests)

include(CTest)
if (BUILD_TESTING AND GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS)
    add_executable(logging_quickstart "quickstart/quickstart.cc")
    target_link_libraries(logging_quickstart PRIVATE google-cloud-cpp::logging)
    google_cloud_cpp_add_common_options(logging_quickstart)
    add_test(
        NAME logging_quickstart
        COMMAND cmake -P "${PROJECT_SOURCE_DIR}/cmake/quickstart-runner.cmake"
                $<TARGET_FILE:logging_quickstart> GOOGLE_CLOUD_PROJECT)
    set_tests_properties(logging_quickstart
                         PROPERTIES LABELS "integration-test;quickstart")
endif ()

# Get the destination directories based on the GNU recommendations.
include(GNUInstallDirs)

# Export the CMake targets to make it easy to create configuration files.
install(
    EXPORT google_cloud_cpp_logging-targets
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_logging"
    COMPONENT google_cloud_cpp_development)

# Install the libraries and headers in the locations determined by
# GNUInstallDirs
install(
    TARGETS google_cloud_cpp_logging
    EXPORT google_cloud_cpp_logging-targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
            COMPONENT google_cloud_cpp_runtime
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_runtime
            NAMELINK_SKIP
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development)
# With CMake-3.12 and higher we could avoid this separate command (and the
# duplication).
install(
    TARGETS google_cloud_cpp_logging
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development
            NAMELINK_ONLY
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
            COMPONENT google_cloud_cpp_development)

google_cloud_cpp_install_headers("google_cloud_cpp_logging"
                                 "include/google/cloud/logging")
google_cloud_cpp_install_headers("google_cloud_cpp_logging_mocks"
                                 "include/google/cloud/logging")

google_cloud_cpp_add_pkgconfig(
    logging
    "The Google Cloud Logging C++ Client Library"
    "Provides C++ APIs to access Google Cloud Logging."
    "google_cloud_cpp_grpc_utils"
    " google_cloud_cpp_common"
    " google_cloud_cpp_logging_protos")

# Create and install the CMake configuration files.
include(CMakePackageConfigHelpers)
configure_file("config.cmake.in" "google_cloud_cpp_logging-config.cmake" @ONLY)
write_basic_package_version_file(
    "google_cloud_cpp_logging-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY ExactVersion)

install(
    FILES
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_logging-config.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/google_cloud_cpp_logging-config-version.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/google_cloud_cpp_logging"
    COMPONENT google_cloud_cpp_development)
