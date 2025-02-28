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
// source: google/cloud/dialogflow/v2/session.proto

#include "google/cloud/dialogflow_es/internal/sessions_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/session.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionsStub::~SessionsStub() = default;

StatusOr<google::cloud::dialogflow::v2::DetectIntentResponse>
DefaultSessionsStub::DetectIntent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::DetectIntentRequest const& request) {
  google::cloud::dialogflow::v2::DetectIntentResponse response;
  auto status = grpc_stub_->DetectIntent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::dialogflow::v2::StreamingDetectIntentRequest,
    google::cloud::dialogflow::v2::StreamingDetectIntentResponse>>
DefaultSessionsStub::AsyncStreamingDetectIntent(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::dialogflow::v2::StreamingDetectIntentRequest,
      google::cloud::dialogflow::v2::StreamingDetectIntentResponse>(
      cq, std::move(context),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamingDetectIntent(context, cq);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
