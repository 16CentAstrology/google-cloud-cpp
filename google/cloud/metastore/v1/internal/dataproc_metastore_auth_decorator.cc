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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_auth_decorator.h"
#include <google/cloud/metastore/v1/metastore.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataprocMetastoreAuth::DataprocMetastoreAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DataprocMetastoreStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::metastore::v1::ListServicesResponse>
DataprocMetastoreAuth::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListServicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServices(context, options, request);
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreAuth::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::CreateService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::UpdateService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteService(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::DeleteService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteService(context, options, request);
}

StatusOr<google::cloud::metastore::v1::ListMetadataImportsResponse>
DataprocMetastoreAuth::ListMetadataImports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListMetadataImportsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMetadataImports(context, options, request);
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreAuth::GetMetadataImport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetMetadataImportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncCreateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateMetadataImport(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreAuth::CreateMetadataImport(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncUpdateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateMetadataImport(cq, *std::move(context),
                                                std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreAuth::UpdateMetadataImport(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncExportMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncExportMetadata(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::ExportMetadata(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ExportMetadata(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncRestoreService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncRestoreService(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::RestoreService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestoreService(context, options, request);
}

StatusOr<google::cloud::metastore::v1::ListBackupsResponse>
DataprocMetastoreAuth::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListBackupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListBackups(context, options, request);
}

StatusOr<google::cloud::metastore::v1::Backup> DataprocMetastoreAuth::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateBackup(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteBackup(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::DeleteBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncQueryMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncQueryMetadata(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::QueryMetadata(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->QueryMetadata(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncMoveTableToDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncMoveTableToDatabase(cq, *std::move(context),
                                               std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreAuth::MoveTableToDatabase(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MoveTableToDatabase(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncAlterMetadataResourceLocation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncAlterMetadataResourceLocation(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreAuth::AlterMetadataResourceLocation(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AlterMetadataResourceLocation(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataprocMetastoreAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> DataprocMetastoreAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataprocMetastoreAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataprocMetastoreAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataprocMetastoreAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
DataprocMetastoreAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> DataprocMetastoreAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status DataprocMetastoreAuth::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOperation(context, options, request);
}

Status DataprocMetastoreAuth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> DataprocMetastoreAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
