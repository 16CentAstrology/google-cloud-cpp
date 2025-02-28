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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_zonal_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_zonal_service.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigZonalServiceMetadata::OsConfigZonalServiceMetadata(
    std::shared_ptr<OsConfigZonalServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceMetadata::AsyncCreateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateOSPolicyAssignment(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceMetadata::CreateOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateOSPolicyAssignment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceMetadata::AsyncUpdateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("os_policy_assignment.name=",
                   internal::UrlEncode(request.os_policy_assignment().name())));
  return child_->AsyncUpdateOSPolicyAssignment(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceMetadata::UpdateOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("os_policy_assignment.name=",
                   internal::UrlEncode(request.os_policy_assignment().name())));
  return child_->UpdateOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceMetadata::GetOSPolicyAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse>
OsConfigZonalServiceMetadata::ListOSPolicyAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOSPolicyAssignments(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse>
OsConfigZonalServiceMetadata::ListOSPolicyAssignmentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOSPolicyAssignmentRevisions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceMetadata::AsyncDeleteOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteOSPolicyAssignment(cq, std::move(context),
                                               std::move(options), request);
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceMetadata::DeleteOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceMetadata::GetOSPolicyAssignmentReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOSPolicyAssignmentReport(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse>
OsConfigZonalServiceMetadata::ListOSPolicyAssignmentReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOSPolicyAssignmentReports(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceMetadata::GetInventory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetInventory(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListInventoriesResponse>
OsConfigZonalServiceMetadata::ListInventories(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListInventories(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceMetadata::GetVulnerabilityReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVulnerabilityReport(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListVulnerabilityReportsResponse>
OsConfigZonalServiceMetadata::ListVulnerabilityReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVulnerabilityReports(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> OsConfigZonalServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void OsConfigZonalServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void OsConfigZonalServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                               Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
