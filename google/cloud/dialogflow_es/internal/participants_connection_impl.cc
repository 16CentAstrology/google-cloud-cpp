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

#include "google/cloud/dialogflow_es/internal/participants_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/participants_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::ParticipantsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::ParticipantsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::ParticipantsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_es::ParticipantsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::ParticipantsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ParticipantsConnectionImpl::ParticipantsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::ParticipantsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ParticipantsConnection::options())) {}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnectionImpl::CreateParticipant(
    google::cloud::dialogflow::v2::CreateParticipantRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateParticipant(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::CreateParticipantRequest const&
                 request) {
        return stub_->CreateParticipant(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnectionImpl::GetParticipant(
    google::cloud::dialogflow::v2::GetParticipantRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetParticipant(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::GetParticipantRequest const& request) {
        return stub_->GetParticipant(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::Participant>
ParticipantsConnectionImpl::ListParticipants(
    google::cloud::dialogflow::v2::ListParticipantsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListParticipants(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::Participant>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ParticipantsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::v2::ListParticipantsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::v2::ListParticipantsRequest const&
                       request) {
              return stub->ListParticipants(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListParticipantsResponse r) {
        std::vector<google::cloud::dialogflow::v2::Participant> result(
            r.participants().size());
        auto& messages = *r.mutable_participants();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::v2::Participant>
ParticipantsConnectionImpl::UpdateParticipant(
    google::cloud::dialogflow::v2::UpdateParticipantRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateParticipant(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::UpdateParticipantRequest const&
                 request) {
        return stub_->UpdateParticipant(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::AnalyzeContentResponse>
ParticipantsConnectionImpl::AnalyzeContent(
    google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AnalyzeContent(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::v2::AnalyzeContentRequest const& request) {
        return stub_->AnalyzeContent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::SuggestArticlesResponse>
ParticipantsConnectionImpl::SuggestArticles(
    google::cloud::dialogflow::v2::SuggestArticlesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SuggestArticles(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::SuggestArticlesRequest const&
                 request) {
        return stub_->SuggestArticles(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::SuggestFaqAnswersResponse>
ParticipantsConnectionImpl::SuggestFaqAnswers(
    google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SuggestFaqAnswers(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::SuggestFaqAnswersRequest const&
                 request) {
        return stub_->SuggestFaqAnswers(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::SuggestSmartRepliesResponse>
ParticipantsConnectionImpl::SuggestSmartReplies(
    google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SuggestSmartReplies(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::SuggestSmartRepliesRequest const&
                 request) {
        return stub_->SuggestSmartReplies(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
