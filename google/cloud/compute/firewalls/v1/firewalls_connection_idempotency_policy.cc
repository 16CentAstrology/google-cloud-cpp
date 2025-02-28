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
// source: google/cloud/compute/firewalls/v1/firewalls.proto

#include "google/cloud/compute/firewalls/v1/firewalls_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_firewalls_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

FirewallsConnectionIdempotencyPolicy::~FirewallsConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<FirewallsConnectionIdempotencyPolicy>
FirewallsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<FirewallsConnectionIdempotencyPolicy>(*this);
}

Idempotency FirewallsConnectionIdempotencyPolicy::DeleteFirewall(
    google::cloud::cpp::compute::firewalls::v1::DeleteFirewallRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallsConnectionIdempotencyPolicy::GetFirewall(
    google::cloud::cpp::compute::firewalls::v1::GetFirewallRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FirewallsConnectionIdempotencyPolicy::InsertFirewall(
    google::cloud::cpp::compute::firewalls::v1::InsertFirewallRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallsConnectionIdempotencyPolicy::ListFirewalls(
    google::cloud::cpp::compute::firewalls::v1::
        ListFirewallsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency FirewallsConnectionIdempotencyPolicy::PatchFirewall(
    google::cloud::cpp::compute::firewalls::v1::PatchFirewallRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallsConnectionIdempotencyPolicy::UpdateFirewall(
    google::cloud::cpp::compute::firewalls::v1::UpdateFirewallRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<FirewallsConnectionIdempotencyPolicy>
MakeDefaultFirewallsConnectionIdempotencyPolicy() {
  return std::make_unique<FirewallsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_firewalls_v1
}  // namespace cloud
}  // namespace google
