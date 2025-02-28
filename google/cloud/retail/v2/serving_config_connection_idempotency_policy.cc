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
// source: google/cloud/retail/v2/serving_config_service.proto

#include "google/cloud/retail/v2/serving_config_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ServingConfigServiceConnectionIdempotencyPolicy::
    ~ServingConfigServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ServingConfigServiceConnectionIdempotencyPolicy>
ServingConfigServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ServingConfigServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
ServingConfigServiceConnectionIdempotencyPolicy::CreateServingConfig(
    google::cloud::retail::v2::CreateServingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ServingConfigServiceConnectionIdempotencyPolicy::DeleteServingConfig(
    google::cloud::retail::v2::DeleteServingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ServingConfigServiceConnectionIdempotencyPolicy::UpdateServingConfig(
    google::cloud::retail::v2::UpdateServingConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::GetServingConfig(
    google::cloud::retail::v2::GetServingConfigRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::ListServingConfigs(
    google::cloud::retail::v2::ListServingConfigsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::AddControl(
    google::cloud::retail::v2::AddControlRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::RemoveControl(
    google::cloud::retail::v2::RemoveControlRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ServingConfigServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ServingConfigServiceConnectionIdempotencyPolicy>
MakeDefaultServingConfigServiceConnectionIdempotencyPolicy() {
  return std::make_unique<ServingConfigServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google
