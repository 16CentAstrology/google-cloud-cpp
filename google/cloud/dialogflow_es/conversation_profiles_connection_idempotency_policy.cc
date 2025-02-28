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
// source: google/cloud/dialogflow/v2/conversation_profile.proto

#include "google/cloud/dialogflow_es/conversation_profiles_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConversationProfilesConnectionIdempotencyPolicy::
    ~ConversationProfilesConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConversationProfilesConnectionIdempotencyPolicy>
ConversationProfilesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ConversationProfilesConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::ListConversationProfiles(
    google::cloud::dialogflow::v2::ListConversationProfilesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::GetConversationProfile(
    google::cloud::dialogflow::v2::GetConversationProfileRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::CreateConversationProfile(
    google::cloud::dialogflow::v2::CreateConversationProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::UpdateConversationProfile(
    google::cloud::dialogflow::v2::UpdateConversationProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::DeleteConversationProfile(
    google::cloud::dialogflow::v2::DeleteConversationProfileRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::SetSuggestionFeatureConfig(
    google::cloud::dialogflow::v2::SetSuggestionFeatureConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationProfilesConnectionIdempotencyPolicy::ClearSuggestionFeatureConfig(
    google::cloud::dialogflow::v2::ClearSuggestionFeatureConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationProfilesConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationProfilesConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConversationProfilesConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationProfilesConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConversationProfilesConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ConversationProfilesConnectionIdempotencyPolicy>
MakeDefaultConversationProfilesConnectionIdempotencyPolicy() {
  return std::make_unique<ConversationProfilesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
