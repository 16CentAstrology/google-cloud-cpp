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
// source: google/cloud/dialogflow/cx/v3/session.proto

#include "google/cloud/dialogflow_cx/internal/sessions_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/session.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionsStub::~SessionsStub() = default;

StatusOr<google::cloud::dialogflow::cx::v3::DetectIntentResponse>
DefaultSessionsStub::DetectIntent(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  google::cloud::dialogflow::cx::v3::DetectIntentResponse response;
  auto status = grpc_stub_->DetectIntent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::cloud::dialogflow::cx::v3::DetectIntentResponse>>
DefaultSessionsStub::ServerStreamingDetectIntent(
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::dialogflow::cx::v3::DetectIntentRequest const& request) {
  auto stream = grpc_stub_->ServerStreamingDetectIntent(context.get(), request);
  return std::make_unique<google::cloud::internal::StreamingReadRpcImpl<
      google::cloud::dialogflow::cx::v3::DetectIntentResponse>>(
      std::move(context), std::move(stream));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
    google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>>
DefaultSessionsStub::AsyncStreamingDetectIntent(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentRequest,
      google::cloud::dialogflow::cx::v3::StreamingDetectIntentResponse>(
      cq, std::move(context), std::move(options),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingDetectIntent(context, cq);
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::MatchIntentResponse>
DefaultSessionsStub::MatchIntent(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::MatchIntentRequest const& request) {
  google::cloud::dialogflow::cx::v3::MatchIntentResponse response;
  auto status = grpc_stub_->MatchIntent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::FulfillIntentResponse>
DefaultSessionsStub::FulfillIntent(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::FulfillIntentRequest const& request) {
  google::cloud::dialogflow::cx::v3::FulfillIntentResponse response;
  auto status = grpc_stub_->FulfillIntent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::cx::v3::AnswerFeedback>
DefaultSessionsStub::SubmitAnswerFeedback(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::cx::v3::SubmitAnswerFeedbackRequest const&
        request) {
  google::cloud::dialogflow::cx::v3::AnswerFeedback response;
  auto status = grpc_stub_->SubmitAnswerFeedback(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultSessionsStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location> DefaultSessionsStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultSessionsStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultSessionsStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSessionsStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
