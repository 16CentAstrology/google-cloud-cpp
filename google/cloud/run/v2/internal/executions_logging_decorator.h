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
// source: google/cloud/run/v2/execution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_LOGGING_DECORATOR_H

#include "google/cloud/run/v2/internal/executions_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ExecutionsLogging : public ExecutionsStub {
 public:
  ~ExecutionsLogging() override = default;
  ExecutionsLogging(std::shared_ptr<ExecutionsStub> child,
                    TracingOptions tracing_options,
                    std::set<std::string> const& components);

  StatusOr<google::cloud::run::v2::Execution> GetExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::run::v2::GetExecutionRequest const& request) override;

  StatusOr<google::cloud::run::v2::ListExecutionsResponse> ListExecutions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::run::v2::ListExecutionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::run::v2::DeleteExecutionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCancelExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::run::v2::CancelExecutionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ExecutionsStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // ExecutionsLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_LOGGING_DECORATOR_H
