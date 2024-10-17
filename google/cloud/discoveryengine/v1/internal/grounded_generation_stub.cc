// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/grounded_generation_service.proto

#include "google/cloud/discoveryengine/v1/internal/grounded_generation_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/internal/async_read_write_stream_impl.h"
#include "google/cloud/status_or.h"
#include <google/cloud/discoveryengine/v1/grounded_generation_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GroundedGenerationServiceStub::~GroundedGenerationServiceStub() = default;

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::discoveryengine::v1::GenerateGroundedContentRequest,
    google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>>
DefaultGroundedGenerationServiceStub::AsyncStreamGenerateGroundedContent(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  return google::cloud::internal::MakeStreamingReadWriteRpc<
      google::cloud::discoveryengine::v1::GenerateGroundedContentRequest,
      google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>(
      cq, std::move(context), std::move(options),
      [this](grpc::ClientContext* context, grpc::CompletionQueue* cq) {
        return grpc_stub_->PrepareAsyncStreamGenerateGroundedContent(context,
                                                                     cq);
      });
}

StatusOr<google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>
DefaultGroundedGenerationServiceStub::GenerateGroundedContent(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::GenerateGroundedContentRequest const&
        request) {
  google::cloud::discoveryengine::v1::GenerateGroundedContentResponse response;
  auto status =
      grpc_stub_->GenerateGroundedContent(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::CheckGroundingResponse>
DefaultGroundedGenerationServiceStub::CheckGrounding(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::CheckGroundingRequest const& request) {
  google::cloud::discoveryengine::v1::CheckGroundingResponse response;
  auto status = grpc_stub_->CheckGrounding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultGroundedGenerationServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultGroundedGenerationServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultGroundedGenerationServiceStub::CancelOperation(
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
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
