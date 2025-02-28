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
// source: google/cloud/edgecontainer/v1/service.proto

#include "google/cloud/edgecontainer/v1/internal/edge_container_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/edgecontainer/v1/service.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace edgecontainer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EdgeContainerMetadata::EdgeContainerMetadata(
    std::shared_ptr<EdgeContainerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::edgecontainer::v1::ListClustersResponse>
EdgeContainerMetadata::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListClustersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListClusters(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::Cluster>
EdgeContainerMetadata::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("cluster.name=",
                           internal::UrlEncode(request.cluster().name())));
  return child_->AsyncUpdateCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpdateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("cluster.name=",
                           internal::UrlEncode(request.cluster().name())));
  return child_->UpdateCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncUpgradeCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpgradeCluster(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::UpgradeCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpgradeClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpgradeCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCluster(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateAccessTokenResponse>
EdgeContainerMetadata::GenerateAccessToken(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GenerateAccessTokenRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("cluster=", internal::UrlEncode(request.cluster())));
  return child_->GenerateAccessToken(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::GenerateOfflineCredentialResponse>
EdgeContainerMetadata::GenerateOfflineCredential(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GenerateOfflineCredentialRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("cluster=", internal::UrlEncode(request.cluster())));
  return child_->GenerateOfflineCredential(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::ListNodePoolsResponse>
EdgeContainerMetadata::ListNodePools(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListNodePoolsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNodePools(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::NodePool>
EdgeContainerMetadata::GetNodePool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNodePool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncCreateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateNodePool(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::CreateNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNodePool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncUpdateNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("node_pool.name=",
                           internal::UrlEncode(request.node_pool().name())));
  return child_->AsyncUpdateNodePool(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::UpdateNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::UpdateNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("node_pool.name=",
                           internal::UrlEncode(request.node_pool().name())));
  return child_->UpdateNodePool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncDeleteNodePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteNodePool(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::DeleteNodePool(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteNodePoolRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNodePool(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::ListMachinesResponse>
EdgeContainerMetadata::ListMachines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListMachinesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMachines(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::Machine>
EdgeContainerMetadata::GetMachine(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetMachineRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMachine(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::ListVpnConnectionsResponse>
EdgeContainerMetadata::ListVpnConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::ListVpnConnectionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVpnConnections(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::VpnConnection>
EdgeContainerMetadata::GetVpnConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetVpnConnectionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVpnConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncCreateVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateVpnConnection(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EdgeContainerMetadata::CreateVpnConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::CreateVpnConnectionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateVpnConnection(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncDeleteVpnConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteVpnConnection(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EdgeContainerMetadata::DeleteVpnConnection(
    grpc::ClientContext& context, Options options,
    google::cloud::edgecontainer::v1::DeleteVpnConnectionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteVpnConnection(context, options, request);
}

StatusOr<google::cloud::edgecontainer::v1::ServerConfig>
EdgeContainerMetadata::GetServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgecontainer::v1::GetServerConfigRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetServerConfig(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EdgeContainerMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> EdgeContainerMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
EdgeContainerMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> EdgeContainerMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status EdgeContainerMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status EdgeContainerMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EdgeContainerMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> EdgeContainerMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void EdgeContainerMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EdgeContainerMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgecontainer_v1_internal
}  // namespace cloud
}  // namespace google
