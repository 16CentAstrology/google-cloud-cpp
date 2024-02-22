// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_table_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminStub::~BigtableTableAdminStub() = default;

StatusOr<google::bigtable::admin::v2::Table>
DefaultBigtableTableAdminStub::CreateTable(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  google::bigtable::admin::v2::Table response;
  auto status = grpc_stub_->CreateTable(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::admin::v2::ListTablesResponse>
DefaultBigtableTableAdminStub::ListTables(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::ListTablesRequest const& request) {
  google::bigtable::admin::v2::ListTablesResponse response;
  auto status = grpc_stub_->ListTables(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::admin::v2::Table>
DefaultBigtableTableAdminStub::GetTable(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::GetTableRequest const& request) {
  google::bigtable::admin::v2::Table response;
  auto status = grpc_stub_->GetTable(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncUpdateTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::UpdateTableRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::admin::v2::UpdateTableRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTable(context, request, cq);
      },
      request, std::move(context));
}

Status DefaultBigtableTableAdminStub::DeleteTable(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTable(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncUndeleteTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::UndeleteTableRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::admin::v2::UndeleteTableRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUndeleteTable(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::bigtable::admin::v2::Table>
DefaultBigtableTableAdminStub::ModifyColumnFamilies(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  google::bigtable::admin::v2::Table response;
  auto status = grpc_stub_->ModifyColumnFamilies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBigtableTableAdminStub::DropRowRange(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DropRowRange(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
DefaultBigtableTableAdminStub::GenerateConsistencyToken(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  google::bigtable::admin::v2::GenerateConsistencyTokenResponse response;
  auto status =
      grpc_stub_->GenerateConsistencyToken(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
DefaultBigtableTableAdminStub::CheckConsistency(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  google::bigtable::admin::v2::CheckConsistencyResponse response;
  auto status = grpc_stub_->CheckConsistency(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::CreateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::admin::v2::CreateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::bigtable::admin::v2::Backup>
DefaultBigtableTableAdminStub::GetBackup(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  google::bigtable::admin::v2::Backup response;
  auto status = grpc_stub_->GetBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::bigtable::admin::v2::Backup>
DefaultBigtableTableAdminStub::UpdateBackup(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  google::bigtable::admin::v2::Backup response;
  auto status = grpc_stub_->UpdateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBigtableTableAdminStub::DeleteBackup(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
DefaultBigtableTableAdminStub::ListBackups(
    grpc::ClientContext& context, Options const&,
    google::bigtable::admin::v2::ListBackupsRequest const& request) {
  google::bigtable::admin::v2::ListBackupsResponse response;
  auto status = grpc_stub_->ListBackups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncRestoreTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::RestoreTableRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::admin::v2::RestoreTableRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreTable(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::CopyBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::bigtable::admin::v2::CopyBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCopyBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::iam::v1::Policy> DefaultBigtableTableAdminStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultBigtableTableAdminStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultBigtableTableAdminStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
DefaultBigtableTableAdminStub::AsyncCheckConsistency(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::bigtable::admin::v2::CheckConsistencyRequest,
      google::bigtable::admin::v2::CheckConsistencyResponse>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::bigtable::admin::v2::CheckConsistencyRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCheckConsistency(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultBigtableTableAdminStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
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

future<Status> DefaultBigtableTableAdminStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
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
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
