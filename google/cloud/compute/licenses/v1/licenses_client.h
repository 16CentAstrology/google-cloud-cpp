// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/licenses/v1/licenses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CLIENT_H

#include "google/cloud/compute/licenses/v1/licenses_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_licenses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the licenses resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/licenses
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class LicensesClient {
 public:
  explicit LicensesClient(std::shared_ptr<LicensesConnection> connection,
                          Options opts = {});
  ~LicensesClient();

  ///@{
  /// @name Copy and move support
  LicensesClient(LicensesClient const&) = default;
  LicensesClient& operator=(LicensesClient const&) = default;
  LicensesClient(LicensesClient&&) = default;
  LicensesClient& operator=(LicensesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(LicensesClient const& a, LicensesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LicensesClient const& a, LicensesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified license. *Caution* This resource is intended for use
  /// only by third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/delete
  ///
  /// @param project  Project ID for this request.
  /// @param license  Name of the license resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.DeleteLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L142}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicense(
      std::string const& project, std::string const& license,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteLicense
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteLicense(
      NoAwaitTag, std::string const& project, std::string const& license,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified license. *Caution* This resource is intended for use
  /// only by third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.DeleteLicenseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.DeleteLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L142}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicense(
      google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteLicense
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteLicense(
      NoAwaitTag,
      google::cloud::cpp::compute::licenses::v1::DeleteLicenseRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteLicense
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteLicense(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified License resource. *Caution* This resource is intended
  /// for use only by third-party partners who are creating Cloud Marketplace
  /// images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/get
  ///
  /// @param project  Project ID for this request.
  /// @param license  Name of the License resource to return.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.License])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.GetLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L183}
  /// [google.cloud.cpp.compute.v1.License]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_072.proto#L28}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::License> GetLicense(
      std::string const& project, std::string const& license,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the specified License resource. *Caution* This resource is intended
  /// for use only by third-party partners who are creating Cloud Marketplace
  /// images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.GetLicenseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.License])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.GetLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L183}
  /// [google.cloud.cpp.compute.v1.License]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_072.proto#L28}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::License> GetLicense(
      google::cloud::cpp::compute::licenses::v1::GetLicenseRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. May be empty if no such
  /// policy or resource exists. *Caution* This resource is intended for use only
  /// by third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/getIamPolicy
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.GetIamPolicyRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L168}
  /// [google.cloud.cpp.compute.v1.Policy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_007.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      std::string const& project, std::string const& resource,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. May be empty if no such
  /// policy or resource exists. *Caution* This resource is intended for use only
  /// by third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/getIamPolicy
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.GetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.GetIamPolicyRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L168}
  /// [google.cloud.cpp.compute.v1.Policy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_007.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::GetIamPolicyRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Create a License resource in the specified project. *Caution* This resource
  /// is intended for use only by third-party partners who are creating Cloud
  /// Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/insert
  ///
  /// @param project  Project ID for this request.
  /// @param license_resource  The License for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.InsertLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L194}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicense(
      std::string const& project,
      google::cloud::cpp::compute::v1::License const& license_resource,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertLicense
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertLicense(
      NoAwaitTag, std::string const& project,
      google::cloud::cpp::compute::v1::License const& license_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Create a License resource in the specified project. *Caution* This resource
  /// is intended for use only by third-party partners who are creating Cloud
  /// Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.InsertLicenseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.InsertLicenseRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L194}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicense(
      google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertLicense
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::cloud::cpp::compute::v1::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertLicense(
      NoAwaitTag,
      google::cloud::cpp::compute::licenses::v1::InsertLicenseRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief InsertLicense
  ///
  /// This method accepts a `google::cloud::cpp::compute::v1::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertLicense(
      google::cloud::cpp::compute::v1::Operation const& operation,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of licenses available in the specified project. This
  /// method does not get any licenses that belong to other projects, including
  /// licenses attached to publicly-available images, like Debian 9. If you want
  /// to get a list of publicly-available licenses, use this method to make a
  /// request to the respective image project, such as debian-cloud or
  /// windows-cloud. *Caution* This resource is intended for use only by
  /// third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/list
  ///
  /// @param project  Project ID for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.License], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.ListLicensesRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L220}
  /// [google.cloud.cpp.compute.v1.License]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_072.proto#L28}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::License> ListLicenses(
      std::string const& project, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the list of licenses available in the specified project. This
  /// method does not get any licenses that belong to other projects, including
  /// licenses attached to publicly-available images, like Debian 9. If you want
  /// to get a list of publicly-available licenses, use this method to make a
  /// request to the respective image project, such as debian-cloud or
  /// windows-cloud. *Caution* This resource is intended for use only by
  /// third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.ListLicensesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.cpp.compute.v1.License], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.ListLicensesRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L220}
  /// [google.cloud.cpp.compute.v1.License]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_072.proto#L28}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::License> ListLicenses(
      google::cloud::cpp::compute::licenses::v1::ListLicensesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy. *Caution* This resource is intended for use only by
  /// third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/setIamPolicy
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param global_set_policy_request_resource  The GlobalSetPolicyRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.SetIamPolicyRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L288}
  /// [google.cloud.cpp.compute.v1.Policy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_007.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::GlobalSetPolicyRequest const&
          global_set_policy_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy on the specified resource. Replaces any
  /// existing policy. *Caution* This resource is intended for use only by
  /// third-party partners who are creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/setIamPolicy
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.SetIamPolicyRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.Policy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.SetIamPolicyRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L288}
  /// [google.cloud.cpp.compute.v1.Policy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_007.proto#L178}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::licenses::v1::SetIamPolicyRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource. *Caution*
  /// This resource is intended for use only by third-party partners who are
  /// creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/testIamPermissions
  ///
  /// @param project  Project ID for this request.
  /// @param resource  Name or id of the resource for this request.
  /// @param test_permissions_request_resource  The TestPermissionsRequest for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L304}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_139.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(
      std::string const& project, std::string const& resource,
      google::cloud::cpp::compute::v1::TestPermissionsRequest const&
          test_permissions_request_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Returns permissions that a caller has on the specified resource. *Caution*
  /// This resource is intended for use only by third-party partners who are
  /// creating Cloud Marketplace images.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/licenses/testIamPermissions
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.licenses.v1.TestIamPermissionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.TestPermissionsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.licenses.v1.TestIamPermissionsRequest]: @cloud_cpp_reference_link{google/cloud/compute/licenses/v1/licenses.proto#L304}
  /// [google.cloud.cpp.compute.v1.TestPermissionsResponse]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_139.proto#L30}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::licenses::v1::
                         TestIamPermissionsRequest const& request,
                     Options opts = {});

 private:
  std::shared_ptr<LicensesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_licenses_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_LICENSES_V1_LICENSES_CLIENT_H
