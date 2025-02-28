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
// source: google/cloud/dialogflow/cx/v3/environment.proto

#include "google/cloud/dialogflow_cx/internal/environments_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/environment.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EnvironmentsMetadata::EnvironmentsMetadata(
    std::shared_ptr<EnvironmentsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListEnvironmentsResponse>
EnvironmentsMetadata::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListEnvironmentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEnvironments(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Environment>
EnvironmentsMetadata::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetEnvironmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EnvironmentsMetadata::CreateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::CreateEnvironmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEnvironment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("environment.name=",
                           internal::UrlEncode(request.environment().name())));
  return child_->AsyncUpdateEnvironment(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EnvironmentsMetadata::UpdateEnvironment(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::UpdateEnvironmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("environment.name=",
                           internal::UrlEncode(request.environment().name())));
  return child_->UpdateEnvironment(context, options, request);
}

Status EnvironmentsMetadata::DeleteEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteEnvironmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEnvironment(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryResponse>
EnvironmentsMetadata::LookupEnvironmentHistory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::LookupEnvironmentHistoryRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->LookupEnvironmentHistory(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncRunContinuousTest(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
        request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncRunContinuousTest(cq, std::move(context),
                                        std::move(options), request);
}

StatusOr<google::longrunning::Operation>
EnvironmentsMetadata::RunContinuousTest(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::RunContinuousTestRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->RunContinuousTest(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListContinuousTestResultsResponse>
EnvironmentsMetadata::ListContinuousTestResults(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListContinuousTestResultsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListContinuousTestResults(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncDeployFlow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->AsyncDeployFlow(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> EnvironmentsMetadata::DeployFlow(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::cx::v3::DeployFlowRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("environment=", internal::UrlEncode(request.environment())));
  return child_->DeployFlow(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
EnvironmentsMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> EnvironmentsMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
EnvironmentsMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> EnvironmentsMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status EnvironmentsMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> EnvironmentsMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void EnvironmentsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
