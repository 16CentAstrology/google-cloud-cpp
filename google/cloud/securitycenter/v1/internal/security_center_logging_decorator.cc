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

#include "google/cloud/securitycenter/v1/internal/security_center_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycenter/v1/securitycenter_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterLogging::SecurityCenterLogging(
    std::shared_ptr<SecurityCenterStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::securitycenter::v1::BulkMuteFindingsRequest const&
                 request) {
        return child_->AsyncBulkMuteFindings(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterLogging::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::
              CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->CreateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::CreateSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::CreateSourceRequest const&
                 request) {
        return child_->CreateSource(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::CreateFinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::CreateFindingRequest const&
                 request) {
        return child_->CreateFinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::CreateMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::CreateMuteConfigRequest const&
                 request) {
        return child_->CreateMuteConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::CreateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 CreateNotificationConfigRequest const& request) {
        return child_->CreateNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::DeleteMuteConfigRequest const&
                 request) {
        return child_->DeleteMuteConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 DeleteNotificationConfigRequest const& request) {
        return child_->DeleteNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::
              DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->DeleteSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::GetBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
                 request) {
        return child_->GetBigQueryExport(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SecurityCenterLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::GetMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::GetMuteConfigRequest const&
                 request) {
        return child_->GetMuteConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::GetNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
              request) {
        return child_->GetNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterLogging::GetOrganizationSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 GetOrganizationSettingsRequest const& request) {
        return child_->GetOrganizationSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterLogging::GetEffectiveSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                     request) {
        return child_->GetEffectiveSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterLogging::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->GetSecurityHealthAnalyticsCustomModule(context, options,
                                                              request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::GetSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::GetSourceRequest const& request) {
        return child_->GetSource(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterLogging::GroupAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::GroupAssetsRequest const&
                 request) {
        return child_->GroupAssets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterLogging::GroupFindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::GroupFindingsRequest const&
                 request) {
        return child_->GroupFindings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterLogging::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
        return child_->ListAssets(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterLogging::ListDescendantSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::
              ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
                  request) {
        return child_->ListDescendantSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterLogging::ListFindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::ListFindingsRequest const&
                 request) {
        return child_->ListFindings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterLogging::ListMuteConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::ListMuteConfigsRequest const&
                 request) {
        return child_->ListMuteConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterLogging::ListNotificationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 ListNotificationConfigsRequest const& request) {
        return child_->ListNotificationConfigs(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterLogging::ListEffectiveSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
            request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
                     request) {
        return child_->ListEffectiveSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
SecurityCenterLogging::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::
              ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
        return child_->ListSecurityHealthAnalyticsCustomModules(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterLogging::ListSources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::ListSourcesRequest const&
                 request) {
        return child_->ListSources(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
                 request) {
        return child_->AsyncRunAssetDiscovery(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::SetFindingState(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::SetFindingStateRequest const&
                 request) {
        return child_->SetFindingState(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::SetMute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::SetMuteRequest const& request) {
        return child_->SetMute(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SecurityCenterLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterLogging::SimulateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 SimulateSecurityHealthAnalyticsCustomModuleRequest const&
                     request) {
        return child_->SimulateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterLogging::UpdateExternalSystem(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
              request) {
        return child_->UpdateExternalSystem(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterLogging::UpdateFinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::UpdateFindingRequest const&
                 request) {
        return child_->UpdateFinding(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterLogging::UpdateMuteConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::UpdateMuteConfigRequest const&
                 request) {
        return child_->UpdateMuteConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterLogging::UpdateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 UpdateNotificationConfigRequest const& request) {
        return child_->UpdateNotificationConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterLogging::UpdateOrganizationSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::
                 UpdateOrganizationSettingsRequest const& request) {
        return child_->UpdateOrganizationSettings(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterLogging::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::
              UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
        return child_->UpdateSecurityHealthAnalyticsCustomModule(
            context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterLogging::UpdateSource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::securitycenter::v1::UpdateSourceRequest const&
                 request) {
        return child_->UpdateSource(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterLogging::UpdateSecurityMarks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
              request) {
        return child_->UpdateSecurityMarks(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::CreateBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
              request) {
        return child_->CreateBigQueryExport(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SecurityCenterLogging::DeleteBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
              request) {
        return child_->DeleteBigQueryExport(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterLogging::UpdateBigQueryExport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
              request) {
        return child_->UpdateBigQueryExport(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterLogging::ListBigQueryExports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
              request) {
        return child_->ListBigQueryExports(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> SecurityCenterLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
