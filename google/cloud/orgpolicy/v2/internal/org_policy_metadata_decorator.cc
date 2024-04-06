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
// source: google/cloud/orgpolicy/v2/orgpolicy.proto

#include "google/cloud/orgpolicy/v2/internal/org_policy_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyMetadata::OrgPolicyMetadata(
    std::shared_ptr<OrgPolicyStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
OrgPolicyMetadata::ListConstraints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListConstraints(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
OrgPolicyMetadata::ListPolicies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPolicies(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::GetPolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPolicy(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
OrgPolicyMetadata::GetEffectivePolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEffectivePolicy(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::CreatePolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePolicy(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::Policy> OrgPolicyMetadata::UpdatePolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("policy.name=",
                           internal::UrlEncode(request.policy().name())));
  return child_->UpdatePolicy(context, options, request);
}

Status OrgPolicyMetadata::DeletePolicy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeletePolicy(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyMetadata::CreateCustomConstraint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCustomConstraint(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyMetadata::UpdateCustomConstraint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("custom_constraint.name=",
                   internal::UrlEncode(request.custom_constraint().name())));
  return child_->UpdateCustomConstraint(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
OrgPolicyMetadata::GetCustomConstraint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::GetCustomConstraintRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCustomConstraint(context, options, request);
}

StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
OrgPolicyMetadata::ListCustomConstraints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCustomConstraints(context, options, request);
}

Status OrgPolicyMetadata::DeleteCustomConstraint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCustomConstraint(context, options, request);
}

void OrgPolicyMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options,
                                    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void OrgPolicyMetadata::SetMetadata(grpc::ClientContext& context,
                                    Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google
