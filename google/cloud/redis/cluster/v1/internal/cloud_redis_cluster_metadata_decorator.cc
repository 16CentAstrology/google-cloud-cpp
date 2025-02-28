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
// source: google/cloud/redis/cluster/v1/cloud_redis_cluster.proto

#include "google/cloud/redis/cluster/v1/internal/cloud_redis_cluster_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/redis/cluster/v1/cloud_redis_cluster.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace redis_cluster_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudRedisClusterMetadata::CloudRedisClusterMetadata(
    std::shared_ptr<CloudRedisClusterStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::redis::cluster::v1::ListClustersResponse>
CloudRedisClusterMetadata::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::ListClustersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListClusters(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::Cluster>
CloudRedisClusterMetadata::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::GetClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("cluster.name=",
                           internal::UrlEncode(request.cluster().name())));
  return child_->AsyncUpdateCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::UpdateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("cluster.name=",
                           internal::UrlEncode(request.cluster().name())));
  return child_->UpdateCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncDeleteCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::DeleteCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::DeleteClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::CreateClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCluster(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::CertificateAuthority>
CloudRedisClusterMetadata::GetClusterCertificateAuthority(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::
        GetClusterCertificateAuthorityRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetClusterCertificateAuthority(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncRescheduleClusterMaintenance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::
        RescheduleClusterMaintenanceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRescheduleClusterMaintenance(cq, std::move(context),
                                                   std::move(options), request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::RescheduleClusterMaintenance(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::
        RescheduleClusterMaintenanceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RescheduleClusterMaintenance(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::ListBackupCollectionsResponse>
CloudRedisClusterMetadata::ListBackupCollections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::ListBackupCollectionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackupCollections(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::BackupCollection>
CloudRedisClusterMetadata::GetBackupCollection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::GetBackupCollectionRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackupCollection(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::ListBackupsResponse>
CloudRedisClusterMetadata::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::ListBackupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackups(context, options, request);
}

StatusOr<google::cloud::redis::cluster::v1::Backup>
CloudRedisClusterMetadata::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::redis::cluster::v1::GetBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::DeleteBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteBackup(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::DeleteBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::DeleteBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncExportBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::ExportBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportBackup(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::ExportBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::ExportBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ExportBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncBackupCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::redis::cluster::v1::BackupClusterRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncBackupCluster(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::BackupCluster(
    grpc::ClientContext& context, Options options,
    google::cloud::redis::cluster::v1::BackupClusterRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->BackupCluster(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CloudRedisClusterMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
CloudRedisClusterMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CloudRedisClusterMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
CloudRedisClusterMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status CloudRedisClusterMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status CloudRedisClusterMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudRedisClusterMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> CloudRedisClusterMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void CloudRedisClusterMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudRedisClusterMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_cluster_v1_internal
}  // namespace cloud
}  // namespace google
