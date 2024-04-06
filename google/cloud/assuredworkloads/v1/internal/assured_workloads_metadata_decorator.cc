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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceMetadata::AssuredWorkloadsServiceMetadata(
    std::shared_ptr<AssuredWorkloadsServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceMetadata::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateWorkload(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceMetadata::UpdateWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("workload.name=",
                           internal::UrlEncode(request.workload().name())));
  return child_->UpdateWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceMetadata::RestrictAllowedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RestrictAllowedResources(context, options, request);
}

Status AssuredWorkloadsServiceMetadata::DeleteWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceMetadata::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
AssuredWorkloadsServiceMetadata::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListWorkloads(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
AssuredWorkloadsServiceMetadata::ListViolations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListViolationsRequest const& request) {
  SetMetadata(context, options);
  return child_->ListViolations(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceMetadata::GetViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  SetMetadata(context, options);
  return child_->GetViolation(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceMetadata::AcknowledgeViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  SetMetadata(context, options);
  return child_->AcknowledgeViolation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> AssuredWorkloadsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void AssuredWorkloadsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void AssuredWorkloadsServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                                  Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
