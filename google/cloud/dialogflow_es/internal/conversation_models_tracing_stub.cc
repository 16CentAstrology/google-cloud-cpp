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

#include "google/cloud/dialogflow_es/internal/conversation_models_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationModelsTracingStub::ConversationModelsTracingStub(
    std::shared_ptr<ConversationModelsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncCreateConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "CreateConversationModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateConversationModel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsTracingStub::GetConversationModel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.ConversationModels", "GetConversationModel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetConversationModel(context, options, request));
}

StatusOr<google::cloud::dialogflow::v2::ListConversationModelsResponse>
ConversationModelsTracingStub::ListConversationModels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::ListConversationModelsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "ListConversationModels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListConversationModels(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncDeleteConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "DeleteConversationModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteConversationModel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncDeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "DeployConversationModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeployConversationModel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncUndeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "UndeployConversationModel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUndeployConversationModel(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsTracingStub::GetConversationModelEvaluation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "GetConversationModelEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetConversationModelEvaluation(context, options, request));
}

StatusOr<
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse>
ConversationModelsTracingStub::ListConversationModelEvaluations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "ListConversationModelEvaluations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListConversationModelEvaluations(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncCreateConversationModelEvaluation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.ConversationModels",
                             "CreateConversationModelEvaluation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateConversationModelEvaluation(cq, context, options,
                                                          request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> ConversationModelsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ConversationModelsStub> MakeConversationModelsTracingStub(
    std::shared_ptr<ConversationModelsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ConversationModelsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
