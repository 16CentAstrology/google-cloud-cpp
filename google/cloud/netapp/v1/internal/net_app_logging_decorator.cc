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
// source: google/cloud/netapp/v1/cloud_netapp_service.proto

#include "google/cloud/netapp/v1/internal/net_app_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/netapp/v1/cloud_netapp_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace netapp_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetAppLogging::NetAppLogging(std::shared_ptr<NetAppStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::netapp::v1::ListStoragePoolsResponse>
NetAppLogging::ListStoragePools(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListStoragePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::netapp::v1::ListStoragePoolsRequest const& request) {
        return child_->ListStoragePools(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::CreateStoragePoolRequest const& request) {
        return child_->AsyncCreateStoragePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::StoragePool> NetAppLogging::GetStoragePool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetStoragePoolRequest const& request) {
        return child_->GetStoragePool(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::UpdateStoragePoolRequest const& request) {
        return child_->AsyncUpdateStoragePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteStoragePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::DeleteStoragePoolRequest const& request) {
        return child_->AsyncDeleteStoragePool(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListVolumesResponse>
NetAppLogging::ListVolumes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListVolumesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::ListVolumesRequest const& request) {
        return child_->ListVolumes(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::Volume> NetAppLogging::GetVolume(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetVolumeRequest const& request) {
        return child_->GetVolume(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::CreateVolumeRequest const& request) {
        return child_->AsyncCreateVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::UpdateVolumeRequest const& request) {
        return child_->AsyncUpdateVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::DeleteVolumeRequest const& request) {
        return child_->AsyncDeleteVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncRevertVolume(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::RevertVolumeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::RevertVolumeRequest const& request) {
        return child_->AsyncRevertVolume(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListSnapshotsResponse>
NetAppLogging::ListSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListSnapshotsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::ListSnapshotsRequest const& request) {
        return child_->ListSnapshots(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::Snapshot> NetAppLogging::GetSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetSnapshotRequest const& request) {
        return child_->GetSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::CreateSnapshotRequest const& request) {
        return child_->AsyncCreateSnapshot(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::DeleteSnapshotRequest const& request) {
        return child_->AsyncDeleteSnapshot(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateSnapshot(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::UpdateSnapshotRequest const& request) {
        return child_->AsyncUpdateSnapshot(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListActiveDirectoriesResponse>
NetAppLogging::ListActiveDirectories(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListActiveDirectoriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::ListActiveDirectoriesRequest const&
                 request) {
        return child_->ListActiveDirectories(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ActiveDirectory>
NetAppLogging::GetActiveDirectory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::netapp::v1::GetActiveDirectoryRequest const& request) {
        return child_->GetActiveDirectory(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateActiveDirectoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::CreateActiveDirectoryRequest const&
                 request) {
        return child_->AsyncCreateActiveDirectory(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateActiveDirectoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::UpdateActiveDirectoryRequest const&
                 request) {
        return child_->AsyncUpdateActiveDirectory(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteActiveDirectory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteActiveDirectoryRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::DeleteActiveDirectoryRequest const&
                 request) {
        return child_->AsyncDeleteActiveDirectory(cq, std::move(context),
                                                  options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListKmsConfigsResponse>
NetAppLogging::ListKmsConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListKmsConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::ListKmsConfigsRequest const& request) {
        return child_->ListKmsConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::CreateKmsConfigRequest const& request) {
        return child_->AsyncCreateKmsConfig(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::KmsConfig> NetAppLogging::GetKmsConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetKmsConfigRequest const& request) {
        return child_->GetKmsConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::UpdateKmsConfigRequest const& request) {
        return child_->AsyncUpdateKmsConfig(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncEncryptVolumes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::EncryptVolumesRequest const& request) {
        return child_->AsyncEncryptVolumes(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::VerifyKmsConfigResponse>
NetAppLogging::VerifyKmsConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::VerifyKmsConfigRequest const& request) {
        return child_->VerifyKmsConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteKmsConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::DeleteKmsConfigRequest const& request) {
        return child_->AsyncDeleteKmsConfig(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListReplicationsResponse>
NetAppLogging::ListReplications(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListReplicationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::netapp::v1::ListReplicationsRequest const& request) {
        return child_->ListReplications(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::Replication> NetAppLogging::GetReplication(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetReplicationRequest const& request) {
        return child_->GetReplication(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::CreateReplicationRequest const& request) {
        return child_->AsyncCreateReplication(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::DeleteReplicationRequest const& request) {
        return child_->AsyncDeleteReplication(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::UpdateReplicationRequest const& request) {
        return child_->AsyncUpdateReplication(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncStopReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::StopReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::StopReplicationRequest const& request) {
        return child_->AsyncStopReplication(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncResumeReplication(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::ResumeReplicationRequest const& request) {
        return child_->AsyncResumeReplication(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncReverseReplicationDirection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::ReverseReplicationDirectionRequest const&
              request) {
        return child_->AsyncReverseReplicationDirection(cq, std::move(context),
                                                        options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupVaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::CreateBackupVaultRequest const& request) {
        return child_->AsyncCreateBackupVault(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::BackupVault> NetAppLogging::GetBackupVault(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetBackupVaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetBackupVaultRequest const& request) {
        return child_->GetBackupVault(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListBackupVaultsResponse>
NetAppLogging::ListBackupVaults(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListBackupVaultsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::netapp::v1::ListBackupVaultsRequest const& request) {
        return child_->ListBackupVaults(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupVaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::UpdateBackupVaultRequest const& request) {
        return child_->AsyncUpdateBackupVault(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupVaultRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::DeleteBackupVaultRequest const& request) {
        return child_->AsyncDeleteBackupVault(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::CreateBackupRequest const& request) {
        return child_->AsyncCreateBackup(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::Backup> NetAppLogging::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetBackupRequest const& request) {
        return child_->GetBackup(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListBackupsResponse>
NetAppLogging::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListBackupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::ListBackupsRequest const& request) {
        return child_->ListBackups(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::DeleteBackupRequest const& request) {
        return child_->AsyncDeleteBackup(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::netapp::v1::UpdateBackupRequest const& request) {
        return child_->AsyncUpdateBackup(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncCreateBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::CreateBackupPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::CreateBackupPolicyRequest const& request) {
        return child_->AsyncCreateBackupPolicy(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::BackupPolicy>
NetAppLogging::GetBackupPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::GetBackupPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::netapp::v1::GetBackupPolicyRequest const& request) {
        return child_->GetBackupPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::netapp::v1::ListBackupPoliciesResponse>
NetAppLogging::ListBackupPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::netapp::v1::ListBackupPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::netapp::v1::ListBackupPoliciesRequest const& request) {
        return child_->ListBackupPolicies(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncUpdateBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::UpdateBackupPolicyRequest const& request) {
        return child_->AsyncUpdateBackupPolicy(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncDeleteBackupPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::netapp::v1::DeleteBackupPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::netapp::v1::DeleteBackupPolicyRequest const& request) {
        return child_->AsyncDeleteBackupPolicy(cq, std::move(context), options,
                                               request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
NetAppLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> NetAppLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace netapp_v1_internal
}  // namespace cloud
}  // namespace google
