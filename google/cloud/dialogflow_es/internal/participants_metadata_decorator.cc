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
// source: google/cloud/dialogflow/v2/participant.proto

#include "google/cloud/dialogflow_es/internal/participants_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/participant.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ParticipantsMetadata::ParticipantsMetadata(
    std::shared_ptr<ParticipantsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsMetadata::CreateParticipant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::CreateParticipantRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateParticipant(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsMetadata::GetParticipant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetParticipantRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetParticipant(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::ListParticipantsResponse>
ParticipantsMetadata::ListParticipants(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListParticipantsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListParticipants(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsMetadata::UpdateParticipant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::UpdateParticipantRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("participant.name=",
                           internal::UrlEncode(request.participant().name())));
  return child_->UpdateParticipant(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
ParticipantsMetadata::AnalyzeContent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("participant=", internal::UrlEncode(request.participant())));
  return child_->AnalyzeContent(context, options, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingAnalyzeContentRequest,
    google::cloud::dialogflow::v2::StreamingAnalyzeContentResponse>>
ParticipantsMetadata::AsyncStreamingAnalyzeContent(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context, internal::CurrentOptions());
  return child_->AsyncStreamingAnalyzeContent(cq, std::move(context));
}

StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
ParticipantsMetadata::SuggestArticles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestArticlesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SuggestArticles(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
ParticipantsMetadata::SuggestFaqAnswers(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SuggestFaqAnswers(context, options, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
ParticipantsMetadata::SuggestSmartReplies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SuggestSmartReplies(context, options, request);
}

void ParticipantsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ParticipantsMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
