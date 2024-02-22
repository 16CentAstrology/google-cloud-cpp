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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/internal/conversation_models_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/conversation_model.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationModelsLogging::ConversationModelsLogging(
    std::shared_ptr<ConversationModelsStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncCreateConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::CreateConversationModelRequest const&
              request) {
        return child_->AsyncCreateConversationModel(cq, std::move(context),
                                                    options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsLogging::GetConversationModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::GetConversationModelRequest const&
                 request) {
        return child_->GetConversationModel(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationModelsResponse>
ConversationModelsLogging::ListConversationModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationModelsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::ListConversationModelsRequest const&
                 request) {
        return child_->ListConversationModels(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncDeleteConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
              request) {
        return child_->AsyncDeleteConversationModel(cq, std::move(context),
                                                    options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncDeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::DeployConversationModelRequest const&
              request) {
        return child_->AsyncDeployConversationModel(cq, std::move(context),
                                                    options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncUndeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
              request) {
        return child_->AsyncUndeployConversationModel(cq, std::move(context),
                                                      options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsLogging::GetConversationModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::
                 GetConversationModelEvaluationRequest const& request) {
        return child_->GetConversationModelEvaluation(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse>
ConversationModelsLogging::ListConversationModelEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::v2::
                 ListConversationModelEvaluationsRequest const& request) {
        return child_->ListConversationModelEvaluations(context, options,
                                                        request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncCreateConversationModelEvaluation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::v2::
                 CreateConversationModelEvaluationRequest const& request) {
        return child_->AsyncCreateConversationModelEvaluation(
            cq, std::move(context), options, request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> ConversationModelsLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
