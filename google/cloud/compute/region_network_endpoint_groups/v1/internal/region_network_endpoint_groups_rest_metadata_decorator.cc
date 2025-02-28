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
// source:
// google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#include "google/cloud/compute/region_network_endpoint_groups/v1/internal/region_network_endpoint_groups_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkEndpointGroupsRestMetadata::
    RegionNetworkEndpointGroupsRestMetadata(
        std::shared_ptr<RegionNetworkEndpointGroupsRestStub> child,
        std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsRestMetadata::AsyncAttachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncAttachNetworkEndpoints(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkEndpointGroupsRestMetadata::AttachNetworkEndpoints(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        AttachNetworkEndpointsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AttachNetworkEndpoints(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsRestMetadata::AsyncDeleteNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteNetworkEndpointGroup(cq, std::move(rest_context),
                                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkEndpointGroupsRestMetadata::DeleteNetworkEndpointGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DeleteNetworkEndpointGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteNetworkEndpointGroup(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsRestMetadata::AsyncDetachNetworkEndpoints(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDetachNetworkEndpoints(cq, std::move(rest_context),
                                             std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkEndpointGroupsRestMetadata::DetachNetworkEndpoints(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        DetachNetworkEndpointsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DetachNetworkEndpoints(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
RegionNetworkEndpointGroupsRestMetadata::GetNetworkEndpointGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        GetNetworkEndpointGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetNetworkEndpointGroup(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsRestMetadata::AsyncInsertNetworkEndpointGroup(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertNetworkEndpointGroup(cq, std::move(rest_context),
                                                 std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkEndpointGroupsRestMetadata::InsertNetworkEndpointGroup(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        InsertNetworkEndpointGroupRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertNetworkEndpointGroup(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
RegionNetworkEndpointGroupsRestMetadata::ListRegionNetworkEndpointGroups(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListRegionNetworkEndpointGroupsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListRegionNetworkEndpointGroups(rest_context, options,
                                                 request);
}

StatusOr<
    google::cloud::cpp::compute::v1::NetworkEndpointGroupsListNetworkEndpoints>
RegionNetworkEndpointGroupsRestMetadata::ListNetworkEndpoints(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_network_endpoint_groups::v1::
        ListNetworkEndpointsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListNetworkEndpoints(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkEndpointGroupsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> RegionNetworkEndpointGroupsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void RegionNetworkEndpointGroupsRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google
