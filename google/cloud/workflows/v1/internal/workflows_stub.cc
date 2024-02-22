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
// source: google/cloud/workflows/v1/workflows.proto

#include "google/cloud/workflows/v1/internal/workflows_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/workflows/v1/workflows.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowsStub::~WorkflowsStub() = default;

StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse>
DefaultWorkflowsStub::ListWorkflows(
    grpc::ClientContext& context, Options const&,
    google::cloud::workflows::v1::ListWorkflowsRequest const& request) {
  google::cloud::workflows::v1::ListWorkflowsResponse response;
  auto status = grpc_stub_->ListWorkflows(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::workflows::v1::Workflow>
DefaultWorkflowsStub::GetWorkflow(
    grpc::ClientContext& context, Options const&,
    google::cloud::workflows::v1::GetWorkflowRequest const& request) {
  google::cloud::workflows::v1::Workflow response;
  auto status = grpc_stub_->GetWorkflow(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowsStub::AsyncCreateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::workflows::v1::CreateWorkflowRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::workflows::v1::CreateWorkflowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateWorkflow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowsStub::AsyncDeleteWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::workflows::v1::DeleteWorkflowRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::workflows::v1::DeleteWorkflowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteWorkflow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowsStub::AsyncUpdateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::workflows::v1::UpdateWorkflowRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::workflows::v1::UpdateWorkflowRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateWorkflow(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultWorkflowsStub::AsyncGetOperation(
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

future<Status> DefaultWorkflowsStub::AsyncCancelOperation(
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
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google
