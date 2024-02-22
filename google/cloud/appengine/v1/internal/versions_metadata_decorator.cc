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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/versions_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsMetadata::VersionsMetadata(
    std::shared_ptr<VersionsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::appengine::v1::ListVersionsResponse>
VersionsMetadata::ListVersions(
    grpc::ClientContext& context, Options const& options,
    google::appengine::v1::ListVersionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListVersions(context, options, request);
}

StatusOr<google::appengine::v1::Version> VersionsMetadata::GetVersion(
    grpc::ClientContext& context, Options const& options,
    google::appengine::v1::GetVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetVersion(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncCreateVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::appengine::v1::CreateVersionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateVersion(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncUpdateVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::appengine::v1::UpdateVersionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncUpdateVersion(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::appengine::v1::DeleteVersionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteVersion(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> VersionsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void VersionsMetadata::SetMetadata(grpc::ClientContext& context,
                                   Options const& options,
                                   std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void VersionsMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
