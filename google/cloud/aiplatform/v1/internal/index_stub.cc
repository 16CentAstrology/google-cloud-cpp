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
// source: google/cloud/aiplatform/v1/index_service.proto

#include "google/cloud/aiplatform/v1/internal/index_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/index_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

IndexServiceStub::~IndexServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultIndexServiceStub::AsyncCreateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::CreateIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CreateIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CreateIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateIndex(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Index>
DefaultIndexServiceStub::GetIndex(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetIndexRequest const& request) {
  google::cloud::aiplatform::v1::Index response;
  auto status = grpc_stub_->GetIndex(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListIndexesResponse>
DefaultIndexServiceStub::ListIndexes(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListIndexesRequest const& request) {
  google::cloud::aiplatform::v1::ListIndexesResponse response;
  auto status = grpc_stub_->ListIndexes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexServiceStub::AsyncUpdateIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::UpdateIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UpdateIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateIndex(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexServiceStub::AsyncDeleteIndex(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::DeleteIndexRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteIndexRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteIndexRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteIndex(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::UpsertDatapointsResponse>
DefaultIndexServiceStub::UpsertDatapoints(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpsertDatapointsRequest const& request) {
  google::cloud::aiplatform::v1::UpsertDatapointsResponse response;
  auto status = grpc_stub_->UpsertDatapoints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::RemoveDatapointsResponse>
DefaultIndexServiceStub::RemoveDatapoints(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::RemoveDatapointsRequest const& request) {
  google::cloud::aiplatform::v1::RemoveDatapointsResponse response;
  auto status = grpc_stub_->RemoveDatapoints(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultIndexServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultIndexServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
