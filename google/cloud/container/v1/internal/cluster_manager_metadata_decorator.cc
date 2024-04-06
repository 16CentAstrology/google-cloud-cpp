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
// source: google/container/v1/cluster_service.proto

#include "google/cloud/container/v1/internal/cluster_manager_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/container/v1/cluster_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace container_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterManagerMetadata::ClusterManagerMetadata(
    std::shared_ptr<ClusterManagerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::container::v1::ListClustersResponse>
ClusterManagerMetadata::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListClustersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListClusters(context, options, request);
}

StatusOr<google::container::v1::Cluster> ClusterManagerMetadata::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCluster(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::CreateCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CreateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCluster(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::UpdateCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateCluster(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::UpdateNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateNodePool(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetNodePoolAutoscaling(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolAutoscalingRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetNodePoolAutoscaling(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetLoggingService(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLoggingServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetLoggingService(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetMonitoringService(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMonitoringServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetMonitoringService(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetAddonsConfig(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetAddonsConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetAddonsConfig(context, options, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerMetadata::SetLocations(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetLocations(context, options, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerMetadata::UpdateMaster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateMasterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateMaster(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetMasterAuth(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMasterAuthRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetMasterAuth(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::DeleteCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::DeleteClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCluster(context, options, request);
}

StatusOr<google::container::v1::ListOperationsResponse>
ClusterManagerMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status ClusterManagerMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

StatusOr<google::container::v1::ServerConfig>
ClusterManagerMetadata::GetServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetServerConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetServerConfig(context, options, request);
}

StatusOr<google::container::v1::GetJSONWebKeysResponse>
ClusterManagerMetadata::GetJSONWebKeys(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetJSONWebKeysRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GetJSONWebKeys(context, options, request);
}

StatusOr<google::container::v1::ListNodePoolsResponse>
ClusterManagerMetadata::ListNodePools(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListNodePoolsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNodePools(context, options, request);
}

StatusOr<google::container::v1::NodePool> ClusterManagerMetadata::GetNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNodePool(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::CreateNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CreateNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNodePool(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::DeleteNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::DeleteNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNodePool(context, options, request);
}

Status ClusterManagerMetadata::CompleteNodePoolUpgrade(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CompleteNodePoolUpgradeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CompleteNodePoolUpgrade(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::RollbackNodePoolUpgrade(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::RollbackNodePoolUpgradeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RollbackNodePoolUpgrade(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetNodePoolManagement(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolManagementRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetNodePoolManagement(context, options, request);
}

StatusOr<google::container::v1::Operation> ClusterManagerMetadata::SetLabels(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLabelsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetLabels(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetLegacyAbac(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLegacyAbacRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetLegacyAbac(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::StartIPRotation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::StartIPRotationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartIPRotation(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::CompleteIPRotation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CompleteIPRotationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CompleteIPRotation(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetNodePoolSize(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolSizeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetNodePoolSize(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetNetworkPolicy(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNetworkPolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetNetworkPolicy(context, options, request);
}

StatusOr<google::container::v1::Operation>
ClusterManagerMetadata::SetMaintenancePolicy(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMaintenancePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SetMaintenancePolicy(context, options, request);
}

StatusOr<google::container::v1::ListUsableSubnetworksResponse>
ClusterManagerMetadata::ListUsableSubnetworks(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListUsableSubnetworksRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListUsableSubnetworks(context, options, request);
}

StatusOr<google::container::v1::CheckAutopilotCompatibilityResponse>
ClusterManagerMetadata::CheckAutopilotCompatibility(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CheckAutopilotCompatibilityRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CheckAutopilotCompatibility(context, options, request);
}

void ClusterManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ClusterManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container_v1_internal
}  // namespace cloud
}  // namespace google
