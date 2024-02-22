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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/v1/internal/security_center_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterStub::~SecurityCenterStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securitycenter::v1::BulkMuteFindingsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBulkMuteFindings(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterStub::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule
      response;
  auto status = grpc_stub_->CreateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::CreateSource(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->CreateSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::CreateFinding(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->CreateFinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::CreateMuteConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status = grpc_stub_->CreateMuteConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::CreateNotificationConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status =
      grpc_stub_->CreateNotificationConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSecurityCenterStub::DeleteMuteConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteMuteConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSecurityCenterStub::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteNotificationConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultSecurityCenterStub::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
DefaultSecurityCenterStub::GetBigQueryExport(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  google::cloud::securitycenter::v1::BigQueryExport response;
  auto status = grpc_stub_->GetBigQueryExport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultSecurityCenterStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::GetMuteConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status = grpc_stub_->GetMuteConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::GetNotificationConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status = grpc_stub_->GetNotificationConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
DefaultSecurityCenterStub::GetOrganizationSettings(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  google::cloud::securitycenter::v1::OrganizationSettings response;
  auto status =
      grpc_stub_->GetOrganizationSettings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterStub::GetEffectiveSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycenter::v1::
      EffectiveSecurityHealthAnalyticsCustomModule response;
  auto status = grpc_stub_->GetEffectiveSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterStub::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule
      response;
  auto status = grpc_stub_->GetSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::GetSource(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->GetSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
DefaultSecurityCenterStub::GroupAssets(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  google::cloud::securitycenter::v1::GroupAssetsResponse response;
  auto status = grpc_stub_->GroupAssets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
DefaultSecurityCenterStub::GroupFindings(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  google::cloud::securitycenter::v1::GroupFindingsResponse response;
  auto status = grpc_stub_->GroupFindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
DefaultSecurityCenterStub::ListAssets(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  google::cloud::securitycenter::v1::ListAssetsResponse response;
  auto status = grpc_stub_->ListAssets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterStub::ListDescendantSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  google::cloud::securitycenter::v1::
      ListDescendantSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListDescendantSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
DefaultSecurityCenterStub::ListFindings(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  google::cloud::securitycenter::v1::ListFindingsResponse response;
  auto status = grpc_stub_->ListFindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
DefaultSecurityCenterStub::ListMuteConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  google::cloud::securitycenter::v1::ListMuteConfigsResponse response;
  auto status = grpc_stub_->ListMuteConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
DefaultSecurityCenterStub::ListNotificationConfigs(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  google::cloud::securitycenter::v1::ListNotificationConfigsResponse response;
  auto status =
      grpc_stub_->ListNotificationConfigs(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterStub::ListEffectiveSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  google::cloud::securitycenter::v1::
      ListEffectiveSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListEffectiveSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterStub::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  google::cloud::securitycenter::v1::
      ListSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
DefaultSecurityCenterStub::ListSources(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  google::cloud::securitycenter::v1::ListSourcesResponse response;
  auto status = grpc_stub_->ListSources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::securitycenter::v1::RunAssetDiscoveryRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRunAssetDiscovery(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::SetFindingState(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->SetFindingState(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::SetMute(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->SetMute(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultSecurityCenterStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultSecurityCenterStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
DefaultSecurityCenterStub::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycenter::v1::
      SimulateSecurityHealthAnalyticsCustomModuleResponse response;
  auto status = grpc_stub_->SimulateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
DefaultSecurityCenterStub::UpdateExternalSystem(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  google::cloud::securitycenter::v1::ExternalSystem response;
  auto status = grpc_stub_->UpdateExternalSystem(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Finding>
DefaultSecurityCenterStub::UpdateFinding(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  google::cloud::securitycenter::v1::Finding response;
  auto status = grpc_stub_->UpdateFinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
DefaultSecurityCenterStub::UpdateMuteConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  google::cloud::securitycenter::v1::MuteConfig response;
  auto status = grpc_stub_->UpdateMuteConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
DefaultSecurityCenterStub::UpdateNotificationConfig(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  google::cloud::securitycenter::v1::NotificationConfig response;
  auto status =
      grpc_stub_->UpdateNotificationConfig(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
DefaultSecurityCenterStub::UpdateOrganizationSettings(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  google::cloud::securitycenter::v1::OrganizationSettings response;
  auto status =
      grpc_stub_->UpdateOrganizationSettings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterStub::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule
      response;
  auto status = grpc_stub_->UpdateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::Source>
DefaultSecurityCenterStub::UpdateSource(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  google::cloud::securitycenter::v1::Source response;
  auto status = grpc_stub_->UpdateSource(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
DefaultSecurityCenterStub::UpdateSecurityMarks(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  google::cloud::securitycenter::v1::SecurityMarks response;
  auto status = grpc_stub_->UpdateSecurityMarks(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
DefaultSecurityCenterStub::CreateBigQueryExport(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  google::cloud::securitycenter::v1::BigQueryExport response;
  auto status = grpc_stub_->CreateBigQueryExport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSecurityCenterStub::DeleteBigQueryExport(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteBigQueryExport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
DefaultSecurityCenterStub::UpdateBigQueryExport(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  google::cloud::securitycenter::v1::BigQueryExport response;
  auto status = grpc_stub_->UpdateBigQueryExport(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
DefaultSecurityCenterStub::ListBigQueryExports(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  google::cloud::securitycenter::v1::ListBigQueryExportsResponse response;
  auto status = grpc_stub_->ListBigQueryExports(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSecurityCenterStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSecurityCenterStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
