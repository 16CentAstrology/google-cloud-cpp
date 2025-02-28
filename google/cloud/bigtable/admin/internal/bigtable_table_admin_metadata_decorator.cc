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

#include "google/cloud/bigtable/admin/internal/bigtable_table_admin_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigtableTableAdminMetadata::BigtableTableAdminMetadata(
    std::shared_ptr<BigtableTableAdminStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminMetadata::CreateTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CreateTableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTable(context, options, request);
}

StatusOr<google::bigtable::admin::v2::ListTablesResponse>
BigtableTableAdminMetadata::ListTables(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListTablesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTables(context, options, request);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminMetadata::GetTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetTableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTable(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncUpdateTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("table.name=", internal::UrlEncode(request.table().name())));
  return child_->AsyncUpdateTable(cq, std::move(context), std::move(options),
                                  request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::UpdateTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UpdateTableRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("table.name=", internal::UrlEncode(request.table().name())));
  return child_->UpdateTable(context, options, request);
}

Status BigtableTableAdminMetadata::DeleteTable(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteTableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTable(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncUndeleteTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteTable(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::UndeleteTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UndeleteTableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UndeleteTable(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncCreateAuthorizedView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateAuthorizedView(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::CreateAuthorizedView(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateAuthorizedViewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAuthorizedView(context, options, request);
}

StatusOr<google::bigtable::admin::v2::ListAuthorizedViewsResponse>
BigtableTableAdminMetadata::ListAuthorizedViews(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListAuthorizedViewsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAuthorizedViews(context, options, request);
}

StatusOr<google::bigtable::admin::v2::AuthorizedView>
BigtableTableAdminMetadata::GetAuthorizedView(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetAuthorizedViewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAuthorizedView(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncUpdateAuthorizedView(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("authorized_view.name=",
                   internal::UrlEncode(request.authorized_view().name())));
  return child_->AsyncUpdateAuthorizedView(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::UpdateAuthorizedView(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UpdateAuthorizedViewRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("authorized_view.name=",
                   internal::UrlEncode(request.authorized_view().name())));
  return child_->UpdateAuthorizedView(context, options, request);
}

Status BigtableTableAdminMetadata::DeleteAuthorizedView(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteAuthorizedViewRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAuthorizedView(context, options, request);
}

StatusOr<google::bigtable::admin::v2::Table>
BigtableTableAdminMetadata::ModifyColumnFamilies(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ModifyColumnFamiliesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ModifyColumnFamilies(context, options, request);
}

Status BigtableTableAdminMetadata::DropRowRange(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DropRowRangeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DropRowRange(context, options, request);
}

StatusOr<google::bigtable::admin::v2::GenerateConsistencyTokenResponse>
BigtableTableAdminMetadata::GenerateConsistencyToken(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GenerateConsistencyTokenRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GenerateConsistencyToken(context, options, request);
}

StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>
BigtableTableAdminMetadata::CheckConsistency(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CheckConsistency(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateBackup(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBackup(context, options, request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminMetadata::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackup(context, options, request);
}

StatusOr<google::bigtable::admin::v2::Backup>
BigtableTableAdminMetadata::UpdateBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::UpdateBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("backup.name=",
                           internal::UrlEncode(request.backup().name())));
  return child_->UpdateBackup(context, options, request);
}

Status BigtableTableAdminMetadata::DeleteBackup(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBackup(context, options, request);
}

StatusOr<google::bigtable::admin::v2::ListBackupsResponse>
BigtableTableAdminMetadata::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListBackupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackups(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncRestoreTable(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncRestoreTable(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
BigtableTableAdminMetadata::RestoreTable(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::RestoreTableRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->RestoreTable(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncCopyBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCopyBackup(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> BigtableTableAdminMetadata::CopyBackup(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CopyBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CopyBackup(context, options, request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> BigtableTableAdminMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableTableAdminMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::bigtable::admin::v2::CheckConsistencyResponse>>
BigtableTableAdminMetadata::AsyncCheckConsistency(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CheckConsistencyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCheckConsistency(cq, std::move(context),
                                       std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
BigtableTableAdminMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> BigtableTableAdminMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void BigtableTableAdminMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void BigtableTableAdminMetadata::SetMetadata(grpc::ClientContext& context,
                                             Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
