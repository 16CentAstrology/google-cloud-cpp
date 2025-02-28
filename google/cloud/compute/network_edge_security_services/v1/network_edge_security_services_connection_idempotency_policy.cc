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
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_edge_security_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    ~NetworkEdgeSecurityServicesConnectionIdempotencyPolicy() = default;

std::unique_ptr<NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>
NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>(*this);
}

Idempotency NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    AggregatedListNetworkEdgeSecurityServices(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            AggregatedListNetworkEdgeSecurityServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    DeleteNetworkEdgeSecurityService(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            DeleteNetworkEdgeSecurityServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    GetNetworkEdgeSecurityService(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            GetNetworkEdgeSecurityServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    InsertNetworkEdgeSecurityService(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            InsertNetworkEdgeSecurityServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NetworkEdgeSecurityServicesConnectionIdempotencyPolicy::
    PatchNetworkEdgeSecurityService(
        google::cloud::cpp::compute::network_edge_security_services::v1::
            PatchNetworkEdgeSecurityServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>
MakeDefaultNetworkEdgeSecurityServicesConnectionIdempotencyPolicy() {
  return std::make_unique<
      NetworkEdgeSecurityServicesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1
}  // namespace cloud
}  // namespace google
