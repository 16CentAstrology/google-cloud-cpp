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

#include "google/cloud/workflows/v1/internal/workflows_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/workflows/v1/workflows.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WorkflowsLogging::WorkflowsLogging(std::shared_ptr<WorkflowsStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::workflows::v1::ListWorkflowsResponse>
WorkflowsLogging::ListWorkflows(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::v1::ListWorkflowsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::workflows::v1::ListWorkflowsRequest const& request) {
        return child_->ListWorkflows(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::workflows::v1::Workflow> WorkflowsLogging::GetWorkflow(
    grpc::ClientContext& context, Options const& options,
    google::cloud::workflows::v1::GetWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::workflows::v1::GetWorkflowRequest const& request) {
        return child_->GetWorkflow(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsLogging::AsyncCreateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::workflows::v1::CreateWorkflowRequest const& request) {
        return child_->AsyncCreateWorkflow(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsLogging::AsyncDeleteWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::workflows::v1::DeleteWorkflowRequest const& request) {
        return child_->AsyncDeleteWorkflow(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsLogging::AsyncUpdateWorkflow(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::workflows::v1::UpdateWorkflowRequest const& request) {
        return child_->AsyncUpdateWorkflow(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
WorkflowsLogging::AsyncGetOperation(
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

future<Status> WorkflowsLogging::AsyncCancelOperation(
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
}  // namespace workflows_v1_internal
}  // namespace cloud
}  // namespace google
