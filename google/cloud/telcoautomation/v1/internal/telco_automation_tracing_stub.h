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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_STUB_H

#include "google/cloud/telcoautomation/v1/internal/telco_automation_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace telcoautomation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TelcoAutomationTracingStub : public TelcoAutomationStub {
 public:
  ~TelcoAutomationTracingStub() override = default;

  explicit TelcoAutomationTracingStub(
      std::shared_ptr<TelcoAutomationStub> child);

  StatusOr<
      google::cloud::telcoautomation::v1::ListOrchestrationClustersResponse>
  ListOrchestrationClusters(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::
          ListOrchestrationClustersRequest const& request) override;

  StatusOr<google::cloud::telcoautomation::v1::OrchestrationCluster>
  GetOrchestrationCluster(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetOrchestrationClusterRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateOrchestrationCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::telcoautomation::v1::
          CreateOrchestrationClusterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteOrchestrationCluster(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::telcoautomation::v1::
          DeleteOrchestrationClusterRequest const& request) override;

  StatusOr<google::cloud::telcoautomation::v1::ListEdgeSlmsResponse>
  ListEdgeSlms(grpc::ClientContext& context, Options const& options,
               google::cloud::telcoautomation::v1::ListEdgeSlmsRequest const&
                   request) override;

  StatusOr<google::cloud::telcoautomation::v1::EdgeSlm> GetEdgeSlm(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetEdgeSlmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEdgeSlm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::telcoautomation::v1::CreateEdgeSlmRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEdgeSlm(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::telcoautomation::v1::DeleteEdgeSlmRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> CreateBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::CreateBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> UpdateBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::UpdateBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> GetBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetBlueprintRequest const& request)
      override;

  Status DeleteBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::DeleteBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::ListBlueprintsResponse>
  ListBlueprints(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListBlueprintsRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> ApproveBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ApproveBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> ProposeBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ProposeBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Blueprint> RejectBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::RejectBlueprintRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::ListBlueprintRevisionsResponse>
  ListBlueprintRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListBlueprintRevisionsRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::SearchBlueprintRevisionsResponse>
  SearchBlueprintRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::SearchBlueprintRevisionsRequest const&
          request) override;

  StatusOr<
      google::cloud::telcoautomation::v1::SearchDeploymentRevisionsResponse>
  SearchDeploymentRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::
          SearchDeploymentRevisionsRequest const& request) override;

  StatusOr<google::cloud::telcoautomation::v1::DiscardBlueprintChangesResponse>
  DiscardBlueprintChanges(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::DiscardBlueprintChangesRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::ListPublicBlueprintsResponse>
  ListPublicBlueprints(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListPublicBlueprintsRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::PublicBlueprint>
  GetPublicBlueprint(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetPublicBlueprintRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> CreateDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::CreateDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> UpdateDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::UpdateDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> GetDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetDeploymentRequest const& request)
      override;

  Status RemoveDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::RemoveDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::ListDeploymentsResponse>
  ListDeployments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListDeploymentsRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::ListDeploymentRevisionsResponse>
  ListDeploymentRevisions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListDeploymentRevisionsRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::DiscardDeploymentChangesResponse>
  DiscardDeploymentChanges(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::DiscardDeploymentChangesRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> ApplyDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ApplyDeploymentRequest const& request)
      override;

  StatusOr<google::cloud::telcoautomation::v1::ComputeDeploymentStatusResponse>
  ComputeDeploymentStatus(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ComputeDeploymentStatusRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::Deployment> RollbackDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::RollbackDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  GetHydratedDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::GetHydratedDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::ListHydratedDeploymentsResponse>
  ListHydratedDeployments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ListHydratedDeploymentsRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  UpdateHydratedDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::UpdateHydratedDeploymentRequest const&
          request) override;

  StatusOr<google::cloud::telcoautomation::v1::HydratedDeployment>
  ApplyHydratedDeployment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::telcoautomation::v1::ApplyHydratedDeploymentRequest const&
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
  std::shared_ptr<TelcoAutomationStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TelcoAutomationStub> MakeTelcoAutomationTracingStub(
    std::shared_ptr<TelcoAutomationStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace telcoautomation_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TELCOAUTOMATION_V1_INTERNAL_TELCO_AUTOMATION_TRACING_STUB_H
