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
// source: google/cloud/compute/node_groups/v1/node_groups.proto

#include "google/cloud/compute/node_groups/v1/node_groups_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NodeGroupsConnectionIdempotencyPolicy::
    ~NodeGroupsConnectionIdempotencyPolicy() = default;

std::unique_ptr<NodeGroupsConnectionIdempotencyPolicy>
NodeGroupsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NodeGroupsConnectionIdempotencyPolicy>(*this);
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::AddNodes(
    google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::AggregatedListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        AggregatedListNodeGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::DeleteNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::
        DeleteNodeGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::DeleteNodes(
    google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::GetNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::GetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::InsertNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::
        InsertNodeGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::ListNodeGroups(
    google::cloud::cpp::compute::node_groups::v1::
        ListNodeGroupsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::ListNodes(
    google::cloud::cpp::compute::node_groups::v1::ListNodesRequest) {  // NOLINT
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::PatchNodeGroup(
    google::cloud::cpp::compute::node_groups::v1::
        PatchNodeGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::PerformMaintenance(
    google::cloud::cpp::compute::node_groups::v1::
        PerformMaintenanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::SetIamPolicy(
    google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::SetNodeTemplate(
    google::cloud::cpp::compute::node_groups::v1::
        SetNodeTemplateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::SimulateMaintenanceEvent(
    google::cloud::cpp::compute::node_groups::v1::
        SimulateMaintenanceEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupsConnectionIdempotencyPolicy::TestIamPermissions(
    google::cloud::cpp::compute::node_groups::v1::
        TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NodeGroupsConnectionIdempotencyPolicy>
MakeDefaultNodeGroupsConnectionIdempotencyPolicy() {
  return std::make_unique<NodeGroupsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google
