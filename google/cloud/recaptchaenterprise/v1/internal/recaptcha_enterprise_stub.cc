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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceStub::~RecaptchaEnterpriseServiceStub() = default;

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
DefaultRecaptchaEnterpriseServiceStub::CreateAssessment(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::Assessment response;
  auto status = grpc_stub_->CreateAssessment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
DefaultRecaptchaEnterpriseServiceStub::AnnotateAssessment(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse response;
  auto status = grpc_stub_->AnnotateAssessment(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
DefaultRecaptchaEnterpriseServiceStub::CreateKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  google::cloud::recaptchaenterprise::v1::Key response;
  auto status = grpc_stub_->CreateKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
DefaultRecaptchaEnterpriseServiceStub::ListKeys(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  google::cloud::recaptchaenterprise::v1::ListKeysResponse response;
  auto status = grpc_stub_->ListKeys(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
DefaultRecaptchaEnterpriseServiceStub::RetrieveLegacySecretKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse
      response;
  auto status =
      grpc_stub_->RetrieveLegacySecretKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
DefaultRecaptchaEnterpriseServiceStub::GetKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  google::cloud::recaptchaenterprise::v1::Key response;
  auto status = grpc_stub_->GetKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
DefaultRecaptchaEnterpriseServiceStub::UpdateKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  google::cloud::recaptchaenterprise::v1::Key response;
  auto status = grpc_stub_->UpdateKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultRecaptchaEnterpriseServiceStub::DeleteKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
DefaultRecaptchaEnterpriseServiceStub::MigrateKey(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  google::cloud::recaptchaenterprise::v1::Key response;
  auto status = grpc_stub_->MigrateKey(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
DefaultRecaptchaEnterpriseServiceStub::GetMetrics(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  google::cloud::recaptchaenterprise::v1::Metrics response;
  auto status = grpc_stub_->GetMetrics(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
DefaultRecaptchaEnterpriseServiceStub::CreateFirewallPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::FirewallPolicy response;
  auto status = grpc_stub_->CreateFirewallPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
DefaultRecaptchaEnterpriseServiceStub::ListFirewallPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse response;
  auto status = grpc_stub_->ListFirewallPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
DefaultRecaptchaEnterpriseServiceStub::GetFirewallPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::FirewallPolicy response;
  auto status = grpc_stub_->GetFirewallPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
DefaultRecaptchaEnterpriseServiceStub::UpdateFirewallPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  google::cloud::recaptchaenterprise::v1::FirewallPolicy response;
  auto status = grpc_stub_->UpdateFirewallPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultRecaptchaEnterpriseServiceStub::DeleteFirewallPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteFirewallPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
DefaultRecaptchaEnterpriseServiceStub::ReorderFirewallPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::
        ReorderFirewallPoliciesRequest const& request) {
  google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse
      response;
  auto status =
      grpc_stub_->ReorderFirewallPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
DefaultRecaptchaEnterpriseServiceStub::ListRelatedAccountGroups(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse
      response;
  auto status =
      grpc_stub_->ListRelatedAccountGroups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
DefaultRecaptchaEnterpriseServiceStub::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  google::cloud::recaptchaenterprise::v1::
      ListRelatedAccountGroupMembershipsResponse response;
  auto status = grpc_stub_->ListRelatedAccountGroupMemberships(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
DefaultRecaptchaEnterpriseServiceStub::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context, Options const&,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  google::cloud::recaptchaenterprise::v1::
      SearchRelatedAccountGroupMembershipsResponse response;
  auto status = grpc_stub_->SearchRelatedAccountGroupMemberships(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
