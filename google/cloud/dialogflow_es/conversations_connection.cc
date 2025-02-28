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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/conversations_connection.h"
#include "google/cloud/dialogflow_es/conversations_options.h"
#include "google/cloud/dialogflow_es/internal/conversations_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/conversations_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/conversations_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsConnection::~ConversationsConnection() = default;

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnection::CreateConversation(
    google::cloud::dialogflow::v2::CreateConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::Conversation>
ConversationsConnection::ListConversations(
    google::cloud::dialogflow::v2::
        ListConversationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Conversation>>();
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnection::GetConversation(
    google::cloud::dialogflow::v2::GetConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsConnection::CompleteConversation(
    google::cloud::dialogflow::v2::CompleteConversationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::dialogflow::v2::Message>
ConversationsConnection::ListMessages(
    google::cloud::dialogflow::v2::
        ListMessagesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Message>>();
}

std::shared_ptr<ConversationsConnection> MakeConversationsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ConversationsPolicyOptionList>(options,
                                                                __func__);
  options = dialogflow_es_internal::ConversationsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = dialogflow_es_internal::CreateDefaultConversationsStub(
      background->cq(), options);
  return std::make_shared<dialogflow_es_internal::ConversationsConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

std::shared_ptr<ConversationsConnection> MakeConversationsConnection(
    Options options) {
  return MakeConversationsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
