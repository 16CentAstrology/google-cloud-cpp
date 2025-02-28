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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_groups/v1/node_groups.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_groups_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeGroupsConnectionIdempotencyPolicy {
 public:
  virtual ~NodeGroupsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NodeGroupsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency AddNodes(
      google::cloud::cpp::compute::node_groups::v1::AddNodesRequest const&
          request);

  virtual google::cloud::Idempotency AggregatedListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::
          AggregatedListNodeGroupsRequest request);

  virtual google::cloud::Idempotency DeleteNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::
          DeleteNodeGroupRequest const& request);

  virtual google::cloud::Idempotency DeleteNodes(
      google::cloud::cpp::compute::node_groups::v1::DeleteNodesRequest const&
          request);

  virtual google::cloud::Idempotency GetNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::GetNodeGroupRequest const&
          request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::GetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency InsertNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::
          InsertNodeGroupRequest const& request);

  virtual google::cloud::Idempotency ListNodeGroups(
      google::cloud::cpp::compute::node_groups::v1::ListNodeGroupsRequest
          request);

  virtual google::cloud::Idempotency ListNodes(
      google::cloud::cpp::compute::node_groups::v1::ListNodesRequest request);

  virtual google::cloud::Idempotency PatchNodeGroup(
      google::cloud::cpp::compute::node_groups::v1::PatchNodeGroupRequest const&
          request);

  virtual google::cloud::Idempotency PerformMaintenance(
      google::cloud::cpp::compute::node_groups::v1::
          PerformMaintenanceRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::cloud::cpp::compute::node_groups::v1::SetIamPolicyRequest const&
          request);

  virtual google::cloud::Idempotency SetNodeTemplate(
      google::cloud::cpp::compute::node_groups::v1::
          SetNodeTemplateRequest const& request);

  virtual google::cloud::Idempotency SimulateMaintenanceEvent(
      google::cloud::cpp::compute::node_groups::v1::
          SimulateMaintenanceEventRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::cloud::cpp::compute::node_groups::v1::
          TestIamPermissionsRequest const& request);
};

std::unique_ptr<NodeGroupsConnectionIdempotencyPolicy>
MakeDefaultNodeGroupsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_groups_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_GROUPS_V1_NODE_GROUPS_CONNECTION_IDEMPOTENCY_POLICY_H
