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
// source: google/cloud/resourcemanager/v3/projects.proto

#include "google/cloud/resourcemanager/v3/internal/projects_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcemanager/v3/projects.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProjectsMetadata::ProjectsMetadata(
    std::shared_ptr<ProjectsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::resourcemanager::v3::Project>
ProjectsMetadata::GetProject(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::GetProjectRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProject(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::ListProjectsResponse>
ProjectsMetadata::ListProjects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::ListProjectsRequest const& request) {
  SetMetadata(context, options);
  return child_->ListProjects(context, options, request);
}

StatusOr<google::cloud::resourcemanager::v3::SearchProjectsResponse>
ProjectsMetadata::SearchProjects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcemanager::v3::SearchProjectsRequest const& request) {
  SetMetadata(context, options);
  return child_->SearchProjects(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncCreateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::CreateProjectRequest const& request) {
  SetMetadata(*context, options);
  return child_->AsyncCreateProject(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncUpdateProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::UpdateProjectRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("project.name=",
                           internal::UrlEncode(request.project().name())));
  return child_->AsyncUpdateProject(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncMoveProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::MoveProjectRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncMoveProject(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncDeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::DeleteProjectRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteProject(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncUndeleteProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::UndeleteProjectRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUndeleteProject(cq, std::move(context), options, request);
}

StatusOr<google::iam::v1::Policy> ProjectsMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> ProjectsMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ProjectsMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProjectsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> ProjectsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void ProjectsMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ProjectsMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
