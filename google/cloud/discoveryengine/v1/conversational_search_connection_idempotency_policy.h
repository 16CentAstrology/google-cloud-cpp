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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/discoveryengine/v1/conversational_search_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConversationalSearchServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ConversationalSearchServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<
      ConversationalSearchServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency ConverseConversation(
      google::cloud::discoveryengine::v1::ConverseConversationRequest const&
          request);

  virtual google::cloud::Idempotency CreateConversation(
      google::cloud::discoveryengine::v1::CreateConversationRequest const&
          request);

  virtual google::cloud::Idempotency DeleteConversation(
      google::cloud::discoveryengine::v1::DeleteConversationRequest const&
          request);

  virtual google::cloud::Idempotency UpdateConversation(
      google::cloud::discoveryengine::v1::UpdateConversationRequest const&
          request);

  virtual google::cloud::Idempotency GetConversation(
      google::cloud::discoveryengine::v1::GetConversationRequest const&
          request);

  virtual google::cloud::Idempotency ListConversations(
      google::cloud::discoveryengine::v1::ListConversationsRequest request);

  virtual google::cloud::Idempotency AnswerQuery(
      google::cloud::discoveryengine::v1::AnswerQueryRequest const& request);

  virtual google::cloud::Idempotency GetAnswer(
      google::cloud::discoveryengine::v1::GetAnswerRequest const& request);

  virtual google::cloud::Idempotency CreateSession(
      google::cloud::discoveryengine::v1::CreateSessionRequest const& request);

  virtual google::cloud::Idempotency DeleteSession(
      google::cloud::discoveryengine::v1::DeleteSessionRequest const& request);

  virtual google::cloud::Idempotency UpdateSession(
      google::cloud::discoveryengine::v1::UpdateSessionRequest const& request);

  virtual google::cloud::Idempotency GetSession(
      google::cloud::discoveryengine::v1::GetSessionRequest const& request);

  virtual google::cloud::Idempotency ListSessions(
      google::cloud::discoveryengine::v1::ListSessionsRequest request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<ConversationalSearchServiceConnectionIdempotencyPolicy>
MakeDefaultConversationalSearchServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_CONVERSATIONAL_SEARCH_CONNECTION_IDEMPOTENCY_POLICY_H
