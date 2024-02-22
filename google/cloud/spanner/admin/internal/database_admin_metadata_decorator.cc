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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/spanner/admin/database/v1/spanner_database_admin.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminMetadata::DatabaseAdminMetadata(
    std::shared_ptr<DatabaseAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::spanner::admin::database::v1::ListDatabasesResponse>
DatabaseAdminMetadata::ListDatabases(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::ListDatabasesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabases(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncCreateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDatabase(cq, std::move(context), options, request);
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminMetadata::GetDatabase(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDatabase(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncUpdateDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("database.name=",
                           internal::UrlEncode(request.database().name())));
  return child_->AsyncUpdateDatabase(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncUpdateDatabaseDdl(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  SetMetadata(
      *context, options,
      absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->AsyncUpdateDatabaseDdl(cq, std::move(context), options,
                                        request);
}

Status DatabaseAdminMetadata::DropDatabase(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->DropDatabase(context, options, request);
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminMetadata::GetDatabaseDdl(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("database=", internal::UrlEncode(request.database())));
  return child_->GetDatabaseDdl(context, options, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateBackup(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCopyBackup(cq, std::move(context), options, request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminMetadata::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackup(context, options, request);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminMetadata::UpdateBackup(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("backup.name=",
                           internal::UrlEncode(request.backup().name())));
  return child_->UpdateBackup(context, options, request);
}

Status DatabaseAdminMetadata::DeleteBackup(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBackup(context, options, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupsResponse>
DatabaseAdminMetadata::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::ListBackupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackups(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncRestoreDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRestoreDatabase(cq, std::move(context), options, request);
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseOperationsResponse>
DatabaseAdminMetadata::ListDatabaseOperations(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabaseOperations(context, options, request);
}

StatusOr<google::spanner::admin::database::v1::ListBackupOperationsResponse>
DatabaseAdminMetadata::ListBackupOperations(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::ListBackupOperationsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackupOperations(context, options, request);
}

StatusOr<google::spanner::admin::database::v1::ListDatabaseRolesResponse>
DatabaseAdminMetadata::ListDatabaseRoles(
    grpc::ClientContext& context, Options const& options,
    google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatabaseRoles(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatabaseAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> DatabaseAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void DatabaseAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DatabaseAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
