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
// source:
// google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies.proto

#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_connection.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_option_defaults.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/internal/region_network_firewall_policies_tracing_connection.h"
#include "google/cloud/compute/region_network_firewall_policies/v1/region_network_firewall_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_network_firewall_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionNetworkFirewallPoliciesConnection::
    ~RegionNetworkFirewallPoliciesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::AddAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddAssociationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::AddAssociation(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::AddAssociationRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::AddAssociation(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::AddRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        AddRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::AddRule(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::AddRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::AddRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::CloneRules(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        CloneRulesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::CloneRules(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::CloneRulesRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::CloneRules(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        DeleteFirewallPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::DeleteFirewallPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::DeleteFirewallPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesConnection::GetFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetFirewallPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyAssociation>
RegionNetworkFirewallPoliciesConnection::GetAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetAssociationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::
             RegionNetworkFirewallPoliciesGetEffectiveFirewallsResponse>
RegionNetworkFirewallPoliciesConnection::GetEffectiveFirewalls(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetEffectiveFirewallsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesConnection::GetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::FirewallPolicyRule>
RegionNetworkFirewallPoliciesConnection::GetRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        GetRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        InsertFirewallPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::InsertFirewallPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::InsertFirewallPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>
RegionNetworkFirewallPoliciesConnection::ListRegionNetworkFirewallPolicies(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        ListRegionNetworkFirewallPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::FirewallPolicy>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchFirewallPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::PatchFirewallPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::PatchFirewallPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        PatchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::PatchRule(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::PatchRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::RemoveAssociation(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveAssociationRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::RemoveAssociation(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::RemoveAssociationRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::RemoveAssociation(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        RemoveRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionNetworkFirewallPoliciesConnection::RemoveRule(
    NoAwaitTag, google::cloud::cpp::compute::region_network_firewall_policies::
                    v1::RemoveRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionNetworkFirewallPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionNetworkFirewallPoliciesConnection::SetIamPolicy(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionNetworkFirewallPoliciesConnection::TestIamPermissions(
    google::cloud::cpp::compute::region_network_firewall_policies::v1::
        TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_firewall_policies_v1
}  // namespace cloud
}  // namespace google
