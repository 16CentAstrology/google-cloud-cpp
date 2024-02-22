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
// source:
// google/cloud/securitycentermanagement/v1/security_center_management.proto

#include "google/cloud/securitycentermanagement/v1/internal/security_center_management_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/securitycentermanagement/v1/security_center_management.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycentermanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterManagementStub::~SecurityCenterManagementStub() = default;

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterManagementStub::
    ListEffectiveSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            ListEffectiveSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      ListEffectiveSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListEffectiveSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterManagementStub::
    GetEffectiveSecurityHealthAnalyticsCustomModule(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      EffectiveSecurityHealthAnalyticsCustomModule response;
  auto status = grpc_stub_->GetEffectiveSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterManagementStub::ListSecurityHealthAnalyticsCustomModules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      ListSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantSecurityHealthAnalyticsCustomModulesResponse>
DefaultSecurityCenterManagementStub::
    ListDescendantSecurityHealthAnalyticsCustomModules(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            ListDescendantSecurityHealthAnalyticsCustomModulesRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      ListDescendantSecurityHealthAnalyticsCustomModulesResponse response;
  auto status = grpc_stub_->ListDescendantSecurityHealthAnalyticsCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterManagementStub::GetSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      SecurityHealthAnalyticsCustomModule response;
  auto status = grpc_stub_->GetSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterManagementStub::CreateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      SecurityHealthAnalyticsCustomModule response;
  auto status = grpc_stub_->CreateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SecurityHealthAnalyticsCustomModule>
DefaultSecurityCenterManagementStub::UpdateSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      SecurityHealthAnalyticsCustomModule response;
  auto status = grpc_stub_->UpdateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status
DefaultSecurityCenterManagementStub::DeleteSecurityHealthAnalyticsCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::securitycentermanagement::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
DefaultSecurityCenterManagementStub::
    SimulateSecurityHealthAnalyticsCustomModule(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      SimulateSecurityHealthAnalyticsCustomModuleResponse response;
  auto status = grpc_stub_->SimulateSecurityHealthAnalyticsCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEffectiveEventThreatDetectionCustomModulesResponse>
DefaultSecurityCenterManagementStub::
    ListEffectiveEventThreatDetectionCustomModules(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            ListEffectiveEventThreatDetectionCustomModulesRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      ListEffectiveEventThreatDetectionCustomModulesResponse response;
  auto status = grpc_stub_->ListEffectiveEventThreatDetectionCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EffectiveEventThreatDetectionCustomModule>
DefaultSecurityCenterManagementStub::
    GetEffectiveEventThreatDetectionCustomModule(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            GetEffectiveEventThreatDetectionCustomModuleRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      EffectiveEventThreatDetectionCustomModule response;
  auto status = grpc_stub_->GetEffectiveEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListEventThreatDetectionCustomModulesResponse>
DefaultSecurityCenterManagementStub::ListEventThreatDetectionCustomModules(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        ListEventThreatDetectionCustomModulesRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      ListEventThreatDetectionCustomModulesResponse response;
  auto status = grpc_stub_->ListEventThreatDetectionCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ListDescendantEventThreatDetectionCustomModulesResponse>
DefaultSecurityCenterManagementStub::
    ListDescendantEventThreatDetectionCustomModules(
        grpc::ClientContext& context, Options const&,
        google::cloud::securitycentermanagement::v1::
            ListDescendantEventThreatDetectionCustomModulesRequest const&
                request) {
  google::cloud::securitycentermanagement::v1::
      ListDescendantEventThreatDetectionCustomModulesResponse response;
  auto status = grpc_stub_->ListDescendantEventThreatDetectionCustomModules(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
DefaultSecurityCenterManagementStub::GetEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        GetEventThreatDetectionCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::EventThreatDetectionCustomModule
      response;
  auto status = grpc_stub_->GetEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
DefaultSecurityCenterManagementStub::CreateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        CreateEventThreatDetectionCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::EventThreatDetectionCustomModule
      response;
  auto status = grpc_stub_->CreateEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::securitycentermanagement::v1::
             EventThreatDetectionCustomModule>
DefaultSecurityCenterManagementStub::UpdateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        UpdateEventThreatDetectionCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::EventThreatDetectionCustomModule
      response;
  auto status = grpc_stub_->UpdateEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status
DefaultSecurityCenterManagementStub::DeleteEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        DeleteEventThreatDetectionCustomModuleRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::securitycentermanagement::v1::
             ValidateEventThreatDetectionCustomModuleResponse>
DefaultSecurityCenterManagementStub::ValidateEventThreatDetectionCustomModule(
    grpc::ClientContext& context, Options const&,
    google::cloud::securitycentermanagement::v1::
        ValidateEventThreatDetectionCustomModuleRequest const& request) {
  google::cloud::securitycentermanagement::v1::
      ValidateEventThreatDetectionCustomModuleResponse response;
  auto status = grpc_stub_->ValidateEventThreatDetectionCustomModule(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycentermanagement_v1_internal
}  // namespace cloud
}  // namespace google
