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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/firewall_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

FirewallConnectionIdempotencyPolicy::~FirewallConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<FirewallConnectionIdempotencyPolicy>
FirewallConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<FirewallConnectionIdempotencyPolicy>(*this);
}

Idempotency FirewallConnectionIdempotencyPolicy::ListIngressRules(
    google::appengine::v1::ListIngressRulesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency FirewallConnectionIdempotencyPolicy::BatchUpdateIngressRules(
    google::appengine::v1::BatchUpdateIngressRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallConnectionIdempotencyPolicy::CreateIngressRule(
    google::appengine::v1::CreateIngressRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallConnectionIdempotencyPolicy::GetIngressRule(
    google::appengine::v1::GetIngressRuleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency FirewallConnectionIdempotencyPolicy::UpdateIngressRule(
    google::appengine::v1::UpdateIngressRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency FirewallConnectionIdempotencyPolicy::DeleteIngressRule(
    google::appengine::v1::DeleteIngressRuleRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<FirewallConnectionIdempotencyPolicy>
MakeDefaultFirewallConnectionIdempotencyPolicy() {
  return absl::make_unique<FirewallConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine
}  // namespace cloud
}  // namespace google
