// Copyright 2024 Google LLC
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
// source: google/cloud/compute/instance_settings/v1/instance_settings.proto

#include "google/cloud/compute/instance_settings/v1/instance_settings_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_settings_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InstanceSettingsConnectionIdempotencyPolicy::
    ~InstanceSettingsConnectionIdempotencyPolicy() = default;

std::unique_ptr<InstanceSettingsConnectionIdempotencyPolicy>
InstanceSettingsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InstanceSettingsConnectionIdempotencyPolicy>(*this);
}

Idempotency InstanceSettingsConnectionIdempotencyPolicy::GetInstanceSettings(
    google::cloud::cpp::compute::instance_settings::v1::
        GetInstanceSettingsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InstanceSettingsConnectionIdempotencyPolicy::PatchInstanceSettings(
    google::cloud::cpp::compute::instance_settings::v1::
        PatchInstanceSettingsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<InstanceSettingsConnectionIdempotencyPolicy>
MakeDefaultInstanceSettingsConnectionIdempotencyPolicy() {
  return std::make_unique<InstanceSettingsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_settings_v1
}  // namespace cloud
}  // namespace google
