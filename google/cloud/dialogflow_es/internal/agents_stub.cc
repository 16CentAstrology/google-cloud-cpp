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
// source: google/cloud/dialogflow/v2/agent.proto

#include "google/cloud/dialogflow_es/internal/agents_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/agent.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AgentsStub::~AgentsStub() = default;

StatusOr<google::cloud::dialogflow::v2::Agent> DefaultAgentsStub::GetAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::GetAgentRequest const& request) {
  google::cloud::dialogflow::v2::Agent response;
  auto status = grpc_stub_->GetAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::Agent> DefaultAgentsStub::SetAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::SetAgentRequest const& request) {
  google::cloud::dialogflow::v2::Agent response;
  auto status = grpc_stub_->SetAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultAgentsStub::DeleteAgent(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::DeleteAgentRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteAgent(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dialogflow::v2::SearchAgentsResponse>
DefaultAgentsStub::SearchAgents(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::SearchAgentsRequest const& request) {
  google::cloud::dialogflow::v2::SearchAgentsResponse response;
  auto status = grpc_stub_->SearchAgents(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncTrainAgent(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::TrainAgentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::TrainAgentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncTrainAgent(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncExportAgent(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ExportAgentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::ExportAgentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportAgent(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncImportAgent(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::ImportAgentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::ImportAgentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportAgent(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncRestoreAgent(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::RestoreAgentRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::cloud::dialogflow::v2::RestoreAgentRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRestoreAgent(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::dialogflow::v2::ValidationResult>
DefaultAgentsStub::GetValidationResult(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::GetValidationResultRequest const& request) {
  google::cloud::dialogflow::v2::ValidationResult response;
  auto status =
      grpc_stub_->GetValidationResult(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAgentsStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return cq.MakeUnaryRpc(
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultAgentsStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return cq
      .MakeUnaryRpc(
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
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
