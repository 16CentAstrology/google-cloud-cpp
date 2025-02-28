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

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_auth_decorator.h"
#include <google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceAuth::RecaptchaEnterpriseServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RecaptchaEnterpriseServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceAuth::CreateAssessment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAssessment(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceAuth::AnnotateAssessment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnnotateAssessment(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::CreateKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateKey(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
RecaptchaEnterpriseServiceAuth::ListKeys(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListKeys(context, options, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceAuth::RetrieveLegacySecretKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetrieveLegacySecretKey(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::GetKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetKey(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::UpdateKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateKey(context, options, request);
}

Status RecaptchaEnterpriseServiceAuth::DeleteKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteKey(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::MigrateKey(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MigrateKey(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AddIpOverrideResponse>
RecaptchaEnterpriseServiceAuth::AddIpOverride(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AddIpOverride(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::RemoveIpOverrideResponse>
RecaptchaEnterpriseServiceAuth::RemoveIpOverride(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::RemoveIpOverrideRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RemoveIpOverride(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListIpOverridesResponse>
RecaptchaEnterpriseServiceAuth::ListIpOverrides(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::ListIpOverridesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListIpOverrides(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceAuth::GetMetrics(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetrics(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::CreateFirewallPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateFirewallPolicy(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
RecaptchaEnterpriseServiceAuth::ListFirewallPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFirewallPolicies(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::GetFirewallPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetFirewallPolicy(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::UpdateFirewallPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateFirewallPolicy(context, options, request);
}

Status RecaptchaEnterpriseServiceAuth::DeleteFirewallPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteFirewallPolicy(context, options, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
RecaptchaEnterpriseServiceAuth::ReorderFirewallPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::
        ReorderFirewallPoliciesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReorderFirewallPolicies(context, options, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
RecaptchaEnterpriseServiceAuth::ListRelatedAccountGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRelatedAccountGroups(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceAuth::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRelatedAccountGroupMemberships(context, options, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceAuth::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context, Options const& options,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchRelatedAccountGroupMemberships(context, options,
                                                      request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
