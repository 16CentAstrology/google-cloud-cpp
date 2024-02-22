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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#include "google/cloud/dialogflow_es/internal/conversation_datasets_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/conversation_datasets_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_es::ConversationDatasetsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_es::ConversationDatasetsRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_es::ConversationDatasetsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<dialogflow_es::ConversationDatasetsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<dialogflow_es::
               ConversationDatasetsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dialogflow_es::ConversationDatasetsPollingPolicyOption>()
      ->clone();
}

}  // namespace

ConversationDatasetsConnectionImpl::ConversationDatasetsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::ConversationDatasetsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ConversationDatasetsConnection::options())) {}

future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
ConversationDatasetsConnectionImpl::CreateConversationDataset(
    google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateConversationDataset(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::ConversationDataset>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
              request) {
        return stub->AsyncCreateConversationDataset(cq, std::move(context),
                                                    options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::v2::ConversationDataset>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
ConversationDatasetsConnectionImpl::GetConversationDataset(
    google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConversationDataset(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
                 request) {
        return stub_->GetConversationDataset(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
ConversationDatasetsConnectionImpl::ListConversationDatasets(
    google::cloud::dialogflow::v2::ListConversationDatasetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListConversationDatasets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::v2::ConversationDataset>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_es::ConversationDatasetsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::v2::ListConversationDatasetsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::v2::
                       ListConversationDatasetsRequest const& request) {
              return stub->ListConversationDatasets(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::v2::ListConversationDatasetsResponse r) {
        std::vector<google::cloud::dialogflow::v2::ConversationDataset> result(
            r.conversation_datasets().size());
        auto& messages = *r.mutable_conversation_datasets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationDatasetOperationMetadata>>
ConversationDatasetsConnectionImpl::DeleteConversationDataset(
    google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteConversationDataset(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::
          DeleteConversationDatasetOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
              request) {
        return stub->AsyncDeleteConversationDataset(cq, std::move(context),
                                                    options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::dialogflow::v2::
              DeleteConversationDatasetOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<
    google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
ConversationDatasetsConnectionImpl::ImportConversationData(
    google::cloud::dialogflow::v2::ImportConversationDataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportConversationData(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::ImportConversationDataRequest const&
              request) {
        return stub->AsyncImportConversationData(cq, std::move(context),
                                                 options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::v2::
              ImportConversationDataOperationResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
