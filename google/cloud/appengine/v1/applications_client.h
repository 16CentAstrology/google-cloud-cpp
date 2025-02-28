// Copyright 2022 Google LLC
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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CLIENT_H

#include "google/cloud/appengine/v1/applications_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Manages App Engine applications.
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
class ApplicationsClient {
 public:
  explicit ApplicationsClient(
      std::shared_ptr<ApplicationsConnection> connection, Options opts = {});
  ~ApplicationsClient();

  ///@{
  /// @name Copy and move support
  ApplicationsClient(ApplicationsClient const&) = default;
  ApplicationsClient& operator=(ApplicationsClient const&) = default;
  ApplicationsClient(ApplicationsClient&&) = default;
  ApplicationsClient& operator=(ApplicationsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ApplicationsClient const& a,
                         ApplicationsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ApplicationsClient const& a,
                         ApplicationsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets information about an application.
  ///
  /// @param name  Name of the Application resource to get. Example: `apps/myapp`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.Application])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.Application]: @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.GetApplicationRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L115}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::Application> GetApplication(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets information about an application.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.GetApplicationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.appengine.v1.Application])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.Application]: @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.GetApplicationRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L115}
  ///
  // clang-format on
  StatusOr<google::appengine::v1::Application> GetApplication(
      google::appengine::v1::GetApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an App Engine application for a Google Cloud Platform project.
  /// Required fields:
  ///
  /// * `id` - The ID of the target Cloud Platform project.
  /// * *location* - The [region](https://cloud.google.com/appengine/docs/locations) where you want the App Engine application located.
  ///
  /// For more information about App Engine applications, see [Managing Projects, Applications, and Billing](https://cloud.google.com/appengine/docs/standard/python/console/).
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.CreateApplicationRequest].
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
  ///     [google.appengine.v1.Application] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.Application]: @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.CreateApplicationRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L121}
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> CreateApplication(
      google::appengine::v1::CreateApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateApplication
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> CreateApplication(
      NoAwaitTag,
      google::appengine::v1::CreateApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief CreateApplication
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> CreateApplication(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified Application resource.
  /// You can update the following fields:
  ///
  /// * `auth_domain` - Google authentication domain for controlling user access to the application.
  /// * `default_cookie_expiration` - Cookie expiration policy for the application.
  /// * `iap` - Identity-Aware Proxy properties for the application.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.UpdateApplicationRequest].
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
  ///     [google.appengine.v1.Application] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.Application]: @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.UpdateApplicationRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L127}
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> UpdateApplication(
      google::appengine::v1::UpdateApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateApplication
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> UpdateApplication(
      NoAwaitTag,
      google::appengine::v1::UpdateApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief UpdateApplication
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> UpdateApplication(
      google::longrunning::Operation const& operation, Options opts = {});

  // clang-format off
  ///
  /// Recreates the required App Engine features for the specified App Engine
  /// application, for example a Cloud Storage bucket or App Engine service
  /// account.
  /// Use this method if you receive an error message about a missing feature,
  /// for example, *Error retrieving the App Engine service account*.
  /// If you have deleted your App Engine service account, this will
  /// not be able to recreate it. Instead, you should attempt to use the
  /// IAM undelete API if possible at https://cloud.google.com/iam/reference/rest/v1/projects.serviceAccounts/undelete?apix_params=%7B"name"%3A"projects%2F-%2FserviceAccounts%2Funique_id"%2C"resource"%3A%7B%7D%7D .
  /// If the deletion was recent, the numeric ID can be found in the Cloud
  /// Console Activity Log.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.appengine.v1.RepairApplicationRequest].
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
  ///     [google.appengine.v1.Application] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.appengine.v1.Application]: @googleapis_reference_link{google/appengine/v1/application.proto#L31}
  /// [google.appengine.v1.RepairApplicationRequest]: @googleapis_reference_link{google/appengine/v1/appengine.proto#L139}
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> RepairApplication(
      google::appengine::v1::RepairApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief RepairApplication
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> RepairApplication(
      NoAwaitTag,
      google::appengine::v1::RepairApplicationRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief RepairApplication
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::appengine::v1::Application>> RepairApplication(
      google::longrunning::Operation const& operation, Options opts = {});

 private:
  std::shared_ptr<ApplicationsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_APPLICATIONS_CLIENT_H
