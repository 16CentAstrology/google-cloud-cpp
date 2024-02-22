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

#include "google/cloud/orgpolicy/v2/internal/org_policy_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/orgpolicy/v2/orgpolicy.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace orgpolicy_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrgPolicyStub::~OrgPolicyStub() = default;

StatusOr<google::cloud::orgpolicy::v2::ListConstraintsResponse>
DefaultOrgPolicyStub::ListConstraints(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::ListConstraintsRequest const& request) {
  google::cloud::orgpolicy::v2::ListConstraintsResponse response;
  auto status = grpc_stub_->ListConstraints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::ListPoliciesResponse>
DefaultOrgPolicyStub::ListPolicies(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::ListPoliciesRequest const& request) {
  google::cloud::orgpolicy::v2::ListPoliciesResponse response;
  auto status = grpc_stub_->ListPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::Policy> DefaultOrgPolicyStub::GetPolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::GetPolicyRequest const& request) {
  google::cloud::orgpolicy::v2::Policy response;
  auto status = grpc_stub_->GetPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
DefaultOrgPolicyStub::GetEffectivePolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::GetEffectivePolicyRequest const& request) {
  google::cloud::orgpolicy::v2::Policy response;
  auto status = grpc_stub_->GetEffectivePolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
DefaultOrgPolicyStub::CreatePolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::CreatePolicyRequest const& request) {
  google::cloud::orgpolicy::v2::Policy response;
  auto status = grpc_stub_->CreatePolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::Policy>
DefaultOrgPolicyStub::UpdatePolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::UpdatePolicyRequest const& request) {
  google::cloud::orgpolicy::v2::Policy response;
  auto status = grpc_stub_->UpdatePolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultOrgPolicyStub::DeletePolicy(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::DeletePolicyRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeletePolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
DefaultOrgPolicyStub::CreateCustomConstraint(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::CreateCustomConstraintRequest const&
        request) {
  google::cloud::orgpolicy::v2::CustomConstraint response;
  auto status =
      grpc_stub_->CreateCustomConstraint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
DefaultOrgPolicyStub::UpdateCustomConstraint(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::UpdateCustomConstraintRequest const&
        request) {
  google::cloud::orgpolicy::v2::CustomConstraint response;
  auto status =
      grpc_stub_->UpdateCustomConstraint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::CustomConstraint>
DefaultOrgPolicyStub::GetCustomConstraint(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::GetCustomConstraintRequest const& request) {
  google::cloud::orgpolicy::v2::CustomConstraint response;
  auto status = grpc_stub_->GetCustomConstraint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::orgpolicy::v2::ListCustomConstraintsResponse>
DefaultOrgPolicyStub::ListCustomConstraints(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::ListCustomConstraintsRequest const& request) {
  google::cloud::orgpolicy::v2::ListCustomConstraintsResponse response;
  auto status = grpc_stub_->ListCustomConstraints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultOrgPolicyStub::DeleteCustomConstraint(
    grpc::ClientContext& context, Options const&,
    google::cloud::orgpolicy::v2::DeleteCustomConstraintRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteCustomConstraint(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace orgpolicy_v2_internal
}  // namespace cloud
}  // namespace google
