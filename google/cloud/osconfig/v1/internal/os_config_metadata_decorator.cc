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
// source: google/cloud/osconfig/v1/osconfig_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/osconfig/v1/osconfig_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigServiceMetadata::OsConfigServiceMetadata(
    std::shared_ptr<OsConfigServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceMetadata::ExecutePatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ExecutePatchJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ExecutePatchJob(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceMetadata::GetPatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetPatchJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPatchJob(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchJob>
OsConfigServiceMetadata::CancelPatchJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::CancelPatchJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelPatchJob(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobsResponse>
OsConfigServiceMetadata::ListPatchJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPatchJobs(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchJobInstanceDetailsResponse>
OsConfigServiceMetadata::ListPatchJobInstanceDetails(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchJobInstanceDetailsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPatchJobInstanceDetails(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceMetadata::CreatePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::CreatePatchDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePatchDeployment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceMetadata::GetPatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetPatchDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPatchDeployment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListPatchDeploymentsResponse>
OsConfigServiceMetadata::ListPatchDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListPatchDeploymentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPatchDeployments(context, options, request);
}

Status OsConfigServiceMetadata::DeletePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::DeletePatchDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePatchDeployment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceMetadata::UpdatePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::UpdatePatchDeploymentRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("patch_deployment.name=",
                   internal::UrlEncode(request.patch_deployment().name())));
  return child_->UpdatePatchDeployment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceMetadata::PausePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::PausePatchDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->PausePatchDeployment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::PatchDeployment>
OsConfigServiceMetadata::ResumePatchDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ResumePatchDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResumePatchDeployment(context, options, request);
}

void OsConfigServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void OsConfigServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
