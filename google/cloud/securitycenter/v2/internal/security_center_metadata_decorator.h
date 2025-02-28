// Copyright 2024 Google LLC
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
// source: google/cloud/securitycenter/v2/securitycenter_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_INTERNAL_SECURITY_CENTER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_INTERNAL_SECURITY_CENTER_METADATA_DECORATOR_H

#include "google/cloud/securitycenter/v2/internal/security_center_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace securitycenter_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecurityCenterMetadata : public SecurityCenterStub {
 public:
  ~SecurityCenterMetadata() override = default;
  SecurityCenterMetadata(std::shared_ptr<SecurityCenterStub> child,
                         std::multimap<std::string, std::string> fixed_metadata,
                         std::string api_client_header = "");

  StatusOr<google::cloud::securitycenter::v2::
               BatchCreateResourceValueConfigsResponse>
  BatchCreateResourceValueConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::
          BatchCreateResourceValueConfigsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBulkMuteFindings(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::securitycenter::v2::BulkMuteFindingsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BulkMuteFindings(
      grpc::ClientContext& context, Options options,
      google::cloud::securitycenter::v2::BulkMuteFindingsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
  CreateBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::CreateBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Finding> CreateFinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::CreateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::MuteConfig> CreateMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::CreateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  CreateNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::CreateNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Source> CreateSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::CreateSourceRequest const& request)
      override;

  Status DeleteBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::DeleteBigQueryExportRequest const&
          request) override;

  Status DeleteMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::DeleteMuteConfigRequest const& request)
      override;

  Status DeleteNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::DeleteNotificationConfigRequest const&
          request) override;

  Status DeleteResourceValueConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::DeleteResourceValueConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::BigQueryExport> GetBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Simulation> GetSimulation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetSimulationRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::ValuedResource> GetValuedResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetValuedResourceRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v2::MuteConfig> GetMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  GetNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
  GetResourceValueConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetResourceValueConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Source> GetSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::GetSourceRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::GroupFindingsResponse>
  GroupFindings(grpc::ClientContext& context, Options const& options,
                google::cloud::securitycenter::v2::GroupFindingsRequest const&
                    request) override;

  StatusOr<google::cloud::securitycenter::v2::ListAttackPathsResponse>
  ListAttackPaths(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListAttackPathsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::ListBigQueryExportsResponse>
  ListBigQueryExports(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListBigQueryExportsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ListFindingsResponse>
  ListFindings(grpc::ClientContext& context, Options const& options,
               google::cloud::securitycenter::v2::ListFindingsRequest const&
                   request) override;

  StatusOr<google::cloud::securitycenter::v2::ListMuteConfigsResponse>
  ListMuteConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListMuteConfigsRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::ListNotificationConfigsResponse>
  ListNotificationConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListNotificationConfigsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ListResourceValueConfigsResponse>
  ListResourceValueConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListResourceValueConfigsRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ListSourcesResponse> ListSources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListSourcesRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::ListValuedResourcesResponse>
  ListValuedResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::ListValuedResourcesRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Finding> SetFindingState(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::SetFindingStateRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v2::Finding> SetMute(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::SetMuteRequest const& request)
      override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::securitycenter::v2::BigQueryExport>
  UpdateBigQueryExport(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateBigQueryExportRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ExternalSystem>
  UpdateExternalSystem(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateExternalSystemRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Finding> UpdateFinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateFindingRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::MuteConfig> UpdateMuteConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateMuteConfigRequest const& request)
      override;

  StatusOr<google::cloud::securitycenter::v2::NotificationConfig>
  UpdateNotificationConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateNotificationConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::ResourceValueConfig>
  UpdateResourceValueConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateResourceValueConfigRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::SecurityMarks>
  UpdateSecurityMarks(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateSecurityMarksRequest const&
          request) override;

  StatusOr<google::cloud::securitycenter::v2::Source> UpdateSource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securitycenter::v2::UpdateSourceRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<SecurityCenterStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURITYCENTER_V2_INTERNAL_SECURITY_CENTER_METADATA_DECORATOR_H
