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
// source: google/cloud/telcoautomation/v1/telcoautomation.proto

#include "google/cloud/telcoautomation/v1/internal/telco_automation_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/telcoautomation/v1/telcoautomation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TelcoAutomationMetadata::TelcoAutomationMetadata(
    std::shared_ptr<TelcoAutomationStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse>
TelcoAutomationMetadata::ListOrchestrationClusters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListOrchestrationClustersRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListOrchestrationClusters(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
TelcoAutomationMetadata::GetOrchestrationCluster(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOrchestrationCluster(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationMetadata::AsyncCreateOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::CreateOrchestrationClusterRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateOrchestrationCluster(cq, std::move(context),
                                                 std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationMetadata::AsyncDeleteOrchestrationCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::DeleteOrchestrationClusterRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteOrchestrationCluster(cq, std::move(context),
                                                 std::move(options), request);
}

StatusOr<google::cloud::telcoautomation::v1::ListEdgeSlmsResponse>
TelcoAutomationMetadata::ListEdgeSlms(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEdgeSlms(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::EdgeSlm>
TelcoAutomationMetadata::GetEdgeSlm(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEdgeSlm(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationMetadata::AsyncCreateEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateEdgeSlm(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationMetadata::AsyncDeleteEdgeSlm(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteEdgeSlm(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::CreateBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::UpdateBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("blueprint.name=",
                           internal::UrlEncode(request.blueprint().name())));
  return child_->UpdateBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::GetBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetBlueprintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBlueprint(context, options, request);
}

Status TelcoAutomationMetadata::DeleteBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintsResponse>
TelcoAutomationMetadata::ListBlueprints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListBlueprintsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBlueprints(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::ApproveBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ApproveBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::ProposeBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ProposeBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Blueprint>
TelcoAutomationMetadata::RejectBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RejectBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse>
TelcoAutomationMetadata::ListBlueprintRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListBlueprintRevisions(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse>
TelcoAutomationMetadata::SearchBlueprintRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchBlueprintRevisions(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse>
TelcoAutomationMetadata::SearchDeploymentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::SearchDeploymentRevisionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchDeploymentRevisions(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
TelcoAutomationMetadata::DiscardBlueprintChanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiscardBlueprintChanges(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse>
TelcoAutomationMetadata::ListPublicBlueprints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPublicBlueprints(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
TelcoAutomationMetadata::GetPublicBlueprint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPublicBlueprint(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationMetadata::CreateDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationMetadata::UpdateDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("deployment.name=",
                           internal::UrlEncode(request.deployment().name())));
  return child_->UpdateDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationMetadata::GetDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDeployment(context, options, request);
}

Status TelcoAutomationMetadata::RemoveDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RemoveDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentsResponse>
TelcoAutomationMetadata::ListDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListDeploymentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDeployments(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse>
TelcoAutomationMetadata::ListDeploymentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListDeploymentRevisions(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
TelcoAutomationMetadata::DiscardDeploymentChanges(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DiscardDeploymentChanges(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationMetadata::ApplyDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ApplyDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
TelcoAutomationMetadata::ComputeDeploymentStatus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ComputeDeploymentStatus(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::Deployment>
TelcoAutomationMetadata::RollbackDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RollbackDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationMetadata::GetHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetHydratedDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse>
TelcoAutomationMetadata::ListHydratedDeployments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListHydratedDeployments(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationMetadata::UpdateHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("hydrated_deployment.name=",
                   internal::UrlEncode(request.hydrated_deployment().name())));
  return child_->UpdateHydratedDeployment(context, options, request);
}

StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
TelcoAutomationMetadata::ApplyHydratedDeployment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ApplyHydratedDeployment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TelcoAutomationMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> TelcoAutomationMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void TelcoAutomationMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TelcoAutomationMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google
