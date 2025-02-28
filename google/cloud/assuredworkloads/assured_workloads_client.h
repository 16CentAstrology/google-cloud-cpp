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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H

#include "google/cloud/assuredworkloads/assured_workloads_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage AssuredWorkloads.
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
class AssuredWorkloadsServiceClient {
 public:
  explicit AssuredWorkloadsServiceClient(
      std::shared_ptr<AssuredWorkloadsServiceConnection> connection,
      Options opts = {});
  ~AssuredWorkloadsServiceClient();

  ///@{
  // @name Copy and move support
  AssuredWorkloadsServiceClient(AssuredWorkloadsServiceClient const&) = default;
  AssuredWorkloadsServiceClient& operator=(
      AssuredWorkloadsServiceClient const&) = default;
  AssuredWorkloadsServiceClient(AssuredWorkloadsServiceClient&&) = default;
  AssuredWorkloadsServiceClient& operator=(AssuredWorkloadsServiceClient&&) =
      default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(AssuredWorkloadsServiceClient const& a,
                         AssuredWorkloadsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AssuredWorkloadsServiceClient const& a,
                         AssuredWorkloadsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates Assured Workload.
  ///
  /// @param parent  Required. The resource name of the new Workload's parent.
  ///  Must be of the form `organizations/{org_id}/locations/{location_id}`.
  /// @param workload  Required. Assured Workload to create
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.CreateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L133}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(std::string const& parent,
                 google::cloud::assuredworkloads::v1::Workload const& workload,
                 Options opts = {});

  ///
  /// Creates Assured Workload.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::CreateWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L133}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.CreateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L133}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  future<StatusOr<google::cloud::assuredworkloads::v1::Workload>>
  CreateWorkload(
      google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request,
      Options opts = {});

  ///
  /// Updates an existing workload.
  /// Currently allows updating of workload display_name and labels.
  /// For force updates don't set etag field in the Workload.
  /// Only one update operation per workload can be in progress.
  ///
  /// @param workload  Required. The workload to update.
  ///  The workload's `name` field is used to identify the workload to be
  ///  updated. Format:
  ///  organizations/{org_id}/locations/{location_id}/workloads/{workload_id}
  /// @param update_mask  Required. The list of fields to be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.UpdateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L154}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::Workload const& workload,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an existing workload.
  /// Currently allows updating of workload display_name and labels.
  /// For force updates don't set etag field in the Workload.
  /// Only one update operation per workload can be in progress.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::UpdateWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L154}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.UpdateWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L154}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> UpdateWorkload(
      google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request,
      Options opts = {});

  ///
  /// Restrict the list of resources allowed in the Workload environment.
  /// The current list of allowed products can be found at
  /// https://cloud.google.com/assured-workloads/docs/supported-products
  /// In addition to assuredworkloads.workload.update permission, the user
  /// should also have orgpolicy.policy.set permission on the folder resource to
  /// use this functionality.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L534}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L563}
  ///
  /// [google.cloud.assuredworkloads.v1.RestrictAllowedResourcesRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L534}
  /// [google.cloud.assuredworkloads.v1.RestrictAllowedResourcesResponse]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L563}
  ///
  StatusOr<
      google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
  RestrictAllowedResources(google::cloud::assuredworkloads::v1::
                               RestrictAllowedResourcesRequest const& request,
                           Options opts = {});

  ///
  /// Deletes the workload. Make sure that workload's direct children are
  /// already in a deleted state, otherwise the request will fail with a
  /// FAILED_PRECONDITION error.
  ///
  /// @param name  Required. The `name` field is used to identify the workload.
  ///  Format:
  ///  organizations/{org_id}/locations/{location_id}/workloads/{workload_id}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.assuredworkloads.v1.DeleteWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L166}
  ///
  Status DeleteWorkload(std::string const& name, Options opts = {});

  ///
  /// Deletes the workload. Make sure that workload's direct children are
  /// already in a deleted state, otherwise the request will fail with a
  /// FAILED_PRECONDITION error.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::DeleteWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L166}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.assuredworkloads.v1.DeleteWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L166}
  ///
  Status DeleteWorkload(
      google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request,
      Options opts = {});

  ///
  /// Gets Assured Workload associated with a CRM Node
  ///
  /// @param name  Required. The resource name of the Workload to fetch. This is
  /// the workload's
  ///  relative path in the API, formatted as
  ///  "organizations/{organization_id}/locations/{location_id}/workloads/{workload_id}".
  ///  For example,
  ///  "organizations/123/locations/us-east1/workloads/assured-workload-1".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.GetWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L183}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      std::string const& name, Options opts = {});

  ///
  /// Gets Assured Workload associated with a CRM Node
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::GetWorkloadRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L183}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.GetWorkloadRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L183}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Workload> GetWorkload(
      google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request,
      Options opts = {});

  ///
  /// Lists Assured Workloads under a CRM Node.
  ///
  /// @param parent  Required. Parent Resource to list workloads from.
  ///  Must be of the form `organizations/{org_id}/locations/{location}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.ListWorkloadsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Assured Workloads under a CRM Node.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::ListWorkloadsRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Workload,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  /// [google.cloud.assuredworkloads.v1.ListWorkloadsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L198}
  /// [google.cloud.assuredworkloads.v1.Workload]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L232}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Workload> ListWorkloads(
      google::cloud::assuredworkloads::v1::ListWorkloadsRequest request,
      Options opts = {});

  ///
  /// Lists the Violations in the AssuredWorkload Environment.
  /// Callers may also choose to read across multiple Workloads as per
  /// [AIP-159](https://google.aip.dev/159) by using '-' (the hyphen or dash
  /// character) as a wildcard character instead of workload-id in the parent.
  /// Format `organizations/{org_id}/locations/{location}/workloads/-`
  ///
  /// @param parent  Required. The Workload name.
  ///  Format
  ///  `organizations/{org_id}/locations/{location}/workloads/{workload}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Violation,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  /// [google.cloud.assuredworkloads.v1.ListViolationsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L606}
  /// [google.cloud.assuredworkloads.v1.Violation]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Violation> ListViolations(
      std::string const& parent, Options opts = {});

  ///
  /// Lists the Violations in the AssuredWorkload Environment.
  /// Callers may also choose to read across multiple Workloads as per
  /// [AIP-159](https://google.aip.dev/159) by using '-' (the hyphen or dash
  /// character) as a wildcard character instead of workload-id in the parent.
  /// Format `organizations/{org_id}/locations/{location}/workloads/-`
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::ListViolationsRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L606}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Violation,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  /// [google.cloud.assuredworkloads.v1.ListViolationsRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L606}
  /// [google.cloud.assuredworkloads.v1.Violation]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  StreamRange<google::cloud::assuredworkloads::v1::Violation> ListViolations(
      google::cloud::assuredworkloads::v1::ListViolationsRequest request,
      Options opts = {});

  ///
  /// Retrieves Assured Workload Violation based on ID.
  ///
  /// @param name  Required. The resource name of the Violation to fetch (ie.
  /// Violation.name).
  ///  Format:
  ///  organizations/{organization}/locations/{location}/workloads/{workload}/violations/{violation}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Violation,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  /// [google.cloud.assuredworkloads.v1.GetViolationRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L641}
  /// [google.cloud.assuredworkloads.v1.Violation]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves Assured Workload Violation based on ID.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::GetViolationRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L641}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::Violation,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  /// [google.cloud.assuredworkloads.v1.GetViolationRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L641}
  /// [google.cloud.assuredworkloads.v1.Violation]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L654}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::Violation> GetViolation(
      google::cloud::assuredworkloads::v1::GetViolationRequest const& request,
      Options opts = {});

  ///
  /// Acknowledges an existing violation. By acknowledging a violation, users
  /// acknowledge the existence of a compliance violation in their workload and
  /// decide to ignore it due to a valid business justification. Acknowledgement
  /// is a permanent operation and it cannot be reverted.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L569}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse,google/cloud/assuredworkloads/v1/assuredworkloads.proto#L592}
  ///
  /// [google.cloud.assuredworkloads.v1.AcknowledgeViolationRequest]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L569}
  /// [google.cloud.assuredworkloads.v1.AcknowledgeViolationResponse]:
  /// @googleapis_reference_link{google/cloud/assuredworkloads/v1/assuredworkloads.proto#L592}
  ///
  StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
  AcknowledgeViolation(
      google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<AssuredWorkloadsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ASSUREDWORKLOADS_ASSURED_WORKLOADS_CLIENT_H
