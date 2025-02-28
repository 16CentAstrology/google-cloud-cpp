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
// source: google/cloud/discoveryengine/v1/user_event_service.proto

#include "google/cloud/discoveryengine/v1/user_event_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

UserEventServiceConnectionIdempotencyPolicy::
    ~UserEventServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<UserEventServiceConnectionIdempotencyPolicy>
UserEventServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<UserEventServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::WriteUserEvent(
    google::cloud::discoveryengine::v1::WriteUserEventRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::CollectUserEvent(
    google::cloud::discoveryengine::v1::CollectUserEventRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::PurgeUserEvents(
    google::cloud::discoveryengine::v1::PurgeUserEventsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::ImportUserEvents(
    google::cloud::discoveryengine::v1::ImportUserEventsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency UserEventServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<UserEventServiceConnectionIdempotencyPolicy>
MakeDefaultUserEventServiceConnectionIdempotencyPolicy() {
  return std::make_unique<UserEventServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
