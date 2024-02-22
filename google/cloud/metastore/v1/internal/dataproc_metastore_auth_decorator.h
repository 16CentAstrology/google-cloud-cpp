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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_AUTH_DECORATOR_H

#include "google/cloud/metastore/v1/internal/dataproc_metastore_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataprocMetastoreAuth : public DataprocMetastoreStub {
 public:
  ~DataprocMetastoreAuth() override = default;
  DataprocMetastoreAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<DataprocMetastoreStub> child);

  StatusOr<google::cloud::metastore::v1::ListServicesResponse> ListServices(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::ListServicesRequest const& request)
      override;

  StatusOr<google::cloud::metastore::v1::Service> GetService(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::GetServiceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::CreateServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::UpdateServiceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::DeleteServiceRequest const& request)
      override;

  StatusOr<google::cloud::metastore::v1::ListMetadataImportsResponse>
  ListMetadataImports(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::ListMetadataImportsRequest const& request)
      override;

  StatusOr<google::cloud::metastore::v1::MetadataImport> GetMetadataImport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::GetMetadataImportRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMetadataImport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::CreateMetadataImportRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateMetadataImport(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::UpdateMetadataImportRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportMetadata(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::ExportMetadataRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRestoreService(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::RestoreServiceRequest const& request)
      override;

  StatusOr<google::cloud::metastore::v1::ListBackupsResponse> ListBackups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::ListBackupsRequest const& request) override;

  StatusOr<google::cloud::metastore::v1::Backup> GetBackup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::metastore::v1::GetBackupRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::CreateBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteBackup(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::DeleteBackupRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncQueryMetadata(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::QueryMetadataRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncMoveTableToDatabase(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncAlterMetadataResourceLocation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<DataprocMetastoreStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_AUTH_DECORATOR_H
