// Copyright 2024 Google LLC
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
// source: google/cloud/backupdr/v1/backupdr.proto

#include "google/cloud/backupdr/v1/internal/backup_dr_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/backupdr/v1/backupdr.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace backupdr_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackupDRStub::~BackupDRStub() = default;

StatusOr<google::cloud::backupdr::v1::ListManagementServersResponse>
DefaultBackupDRStub::ListManagementServers(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListManagementServersRequest const& request) {
  google::cloud::backupdr::v1::ListManagementServersResponse response;
  auto status = grpc_stub_->ListManagementServers(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ManagementServer>
DefaultBackupDRStub::GetManagementServer(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetManagementServerRequest const& request) {
  google::cloud::backupdr::v1::ManagementServer response;
  auto status = grpc_stub_->GetManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncCreateManagementServer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::CreateManagementServerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::CreateManagementServerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::CreateManagementServerRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateManagementServer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::CreateManagementServer(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::CreateManagementServerRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteManagementServer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteManagementServerRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteManagementServerRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::DeleteManagementServerRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteManagementServer(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::DeleteManagementServer(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteManagementServerRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteManagementServer(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncCreateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::CreateBackupVaultRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::CreateBackupVaultRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::CreateBackupVaultRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackupVault(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::CreateBackupVault(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::CreateBackupVaultRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackupVault(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ListBackupVaultsResponse>
DefaultBackupDRStub::ListBackupVaults(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListBackupVaultsRequest const& request) {
  google::cloud::backupdr::v1::ListBackupVaultsResponse response;
  auto status = grpc_stub_->ListBackupVaults(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::FetchUsableBackupVaultsResponse>
DefaultBackupDRStub::FetchUsableBackupVaults(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::FetchUsableBackupVaultsRequest const&
        request) {
  google::cloud::backupdr::v1::FetchUsableBackupVaultsResponse response;
  auto status =
      grpc_stub_->FetchUsableBackupVaults(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::BackupVault>
DefaultBackupDRStub::GetBackupVault(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetBackupVaultRequest const& request) {
  google::cloud::backupdr::v1::BackupVault response;
  auto status = grpc_stub_->GetBackupVault(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncUpdateBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::UpdateBackupVaultRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::UpdateBackupVaultRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::UpdateBackupVaultRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackupVault(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::UpdateBackupVault(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::UpdateBackupVaultRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackupVault(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteBackupVault(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteBackupVaultRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteBackupVaultRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::DeleteBackupVaultRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackupVault(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::DeleteBackupVault(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteBackupVaultRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackupVault(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ListDataSourcesResponse>
DefaultBackupDRStub::ListDataSources(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListDataSourcesRequest const& request) {
  google::cloud::backupdr::v1::ListDataSourcesResponse response;
  auto status = grpc_stub_->ListDataSources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::DataSource>
DefaultBackupDRStub::GetDataSource(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetDataSourceRequest const& request) {
  google::cloud::backupdr::v1::DataSource response;
  auto status = grpc_stub_->GetDataSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncUpdateDataSource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::UpdateDataSourceRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::UpdateDataSourceRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::UpdateDataSourceRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDataSource(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::UpdateDataSource(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::UpdateDataSourceRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateDataSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ListBackupsResponse>
DefaultBackupDRStub::ListBackups(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListBackupsRequest const& request) {
  google::cloud::backupdr::v1::ListBackupsResponse response;
  auto status = grpc_stub_->ListBackups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::Backup> DefaultBackupDRStub::GetBackup(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetBackupRequest const& request) {
  google::cloud::backupdr::v1::Backup response;
  auto status = grpc_stub_->GetBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::UpdateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::UpdateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::UpdateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::UpdateBackup(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::UpdateBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::DeleteBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::DeleteBackup(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncRestoreBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::RestoreBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::RestoreBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::RestoreBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::RestoreBackup(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::RestoreBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RestoreBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncCreateBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::CreateBackupPlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::CreateBackupPlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::CreateBackupPlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackupPlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::CreateBackupPlan(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::CreateBackupPlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::BackupPlan>
DefaultBackupDRStub::GetBackupPlan(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetBackupPlanRequest const& request) {
  google::cloud::backupdr::v1::BackupPlan response;
  auto status = grpc_stub_->GetBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ListBackupPlansResponse>
DefaultBackupDRStub::ListBackupPlans(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListBackupPlansRequest const& request) {
  google::cloud::backupdr::v1::ListBackupPlansResponse response;
  auto status = grpc_stub_->ListBackupPlans(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteBackupPlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteBackupPlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::DeleteBackupPlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackupPlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::DeleteBackupPlan(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteBackupPlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncCreateBackupPlanAssociation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::CreateBackupPlanAssociationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::CreateBackupPlanAssociationRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::CreateBackupPlanAssociationRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackupPlanAssociation(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::CreateBackupPlanAssociation(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::CreateBackupPlanAssociationRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateBackupPlanAssociation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::BackupPlanAssociation>
DefaultBackupDRStub::GetBackupPlanAssociation(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::GetBackupPlanAssociationRequest const&
        request) {
  google::cloud::backupdr::v1::BackupPlanAssociation response;
  auto status =
      grpc_stub_->GetBackupPlanAssociation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::backupdr::v1::ListBackupPlanAssociationsResponse>
DefaultBackupDRStub::ListBackupPlanAssociations(
    grpc::ClientContext& context, Options const&,
    google::cloud::backupdr::v1::ListBackupPlanAssociationsRequest const&
        request) {
  google::cloud::backupdr::v1::ListBackupPlanAssociationsResponse response;
  auto status =
      grpc_stub_->ListBackupPlanAssociations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncDeleteBackupPlanAssociation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::DeleteBackupPlanAssociationRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::DeleteBackupPlanAssociationRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::backupdr::v1::DeleteBackupPlanAssociationRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackupPlanAssociation(context, request,
                                                            cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupDRStub::DeleteBackupPlanAssociation(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::DeleteBackupPlanAssociationRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteBackupPlanAssociation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncTriggerBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::backupdr::v1::TriggerBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::backupdr::v1::TriggerBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::backupdr::v1::TriggerBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTriggerBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::TriggerBackup(
    grpc::ClientContext& context, Options,
    google::cloud::backupdr::v1::TriggerBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->TriggerBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultBackupDRStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultBackupDRStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultBackupDRStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultBackupDRStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultBackupDRStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultBackupDRStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultBackupDRStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBackupDRStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultBackupDRStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupDRStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultBackupDRStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace backupdr_v1_internal
}  // namespace cloud
}  // namespace google
