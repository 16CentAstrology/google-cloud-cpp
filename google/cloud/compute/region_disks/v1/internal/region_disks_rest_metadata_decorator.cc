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
// source: google/cloud/compute/region_disks/v1/region_disks.proto

#include "google/cloud/compute/region_disks/v1/internal/region_disks_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionDisksRestMetadata::RegionDisksRestMetadata(
    std::shared_ptr<RegionDisksRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncAddResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::
        AddResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncAddResourcePolicies(cq, std::move(rest_context),
                                          std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::AddResourcePolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        AddResourcePoliciesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AddResourcePolicies(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncBulkInsert(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncBulkInsert(cq, std::move(rest_context),
                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::BulkInsert(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::BulkInsertRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->BulkInsert(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncCreateSnapshot(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::CreateSnapshotRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCreateSnapshot(cq, std::move(rest_context),
                                     std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::CreateSnapshot(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::CreateSnapshotRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->CreateSnapshot(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncDeleteDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::DeleteDiskRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteDisk(cq, std::move(rest_context),
                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::DeleteDisk(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::DeleteDiskRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->DeleteDisk(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Disk>
RegionDisksRestMetadata::GetDisk(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::GetDiskRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetDisk(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncInsertDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::InsertDiskRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertDisk(cq, std::move(rest_context),
                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::InsertDisk(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::InsertDiskRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->InsertDisk(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::DiskList>
RegionDisksRestMetadata::ListRegionDisks(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::ListRegionDisksRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->ListRegionDisks(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncRemoveResourcePolicies(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::
        RemoveResourcePoliciesRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncRemoveResourcePolicies(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::RemoveResourcePolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        RemoveResourcePoliciesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->RemoveResourcePolicies(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncResize(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncResize(cq, std::move(rest_context), std::move(options),
                             request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::Resize(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::ResizeRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->Resize(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionDisksRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncSetLabels(cq, std::move(rest_context), std::move(options),
                                request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::SetLabels(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::SetLabelsRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->SetLabels(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncStartAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::
        StartAsyncReplicationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncStartAsyncReplication(cq, std::move(rest_context),
                                            std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::StartAsyncReplication(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        StartAsyncReplicationRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->StartAsyncReplication(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncStopAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::
        StopAsyncReplicationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncStopAsyncReplication(cq, std::move(rest_context),
                                           std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::StopAsyncReplication(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        StopAsyncReplicationRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->StopAsyncReplication(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncStopGroupAsyncReplication(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncStopGroupAsyncReplication(cq, std::move(rest_context),
                                                std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::StopGroupAsyncReplication(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->StopGroupAsyncReplication(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionDisksRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncUpdateDisk(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_disks::v1::UpdateDiskRequest const&
        request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateDisk(cq, std::move(rest_context),
                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionDisksRestMetadata::UpdateDisk(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_disks::v1::UpdateDiskRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->UpdateDisk(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionDisksRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> RegionDisksRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void RegionDisksRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_disks_v1_internal
}  // namespace cloud
}  // namespace google
