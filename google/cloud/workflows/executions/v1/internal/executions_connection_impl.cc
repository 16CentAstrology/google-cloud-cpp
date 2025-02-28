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
// source: google/cloud/workflows/executions/v1/executions.proto

#include "google/cloud/workflows/executions/v1/internal/executions_connection_impl.h"
#include "google/cloud/workflows/executions/v1/internal/executions_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace workflows_executions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<workflows_executions_v1::ExecutionsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<workflows_executions_v1::ExecutionsRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<workflows_executions_v1::ExecutionsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<workflows_executions_v1::ExecutionsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<workflows_executions_v1::
               ExecutionsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ExecutionsConnectionImpl::ExecutionsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<workflows_executions_v1_internal::ExecutionsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ExecutionsConnection::options())) {}

StreamRange<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnectionImpl::ListExecutions(
    google::cloud::workflows::executions::v1::ListExecutionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListExecutions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::workflows::executions::v1::Execution>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<workflows_executions_v1::ExecutionsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::workflows::executions::v1::ListExecutionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::workflows::executions::v1::
                       ListExecutionsRequest const& request) {
              return stub->ListExecutions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::workflows::executions::v1::ListExecutionsResponse r) {
        std::vector<google::cloud::workflows::executions::v1::Execution> result(
            r.executions().size());
        auto& messages = *r.mutable_executions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnectionImpl::CreateExecution(
    google::cloud::workflows::executions::v1::CreateExecutionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateExecution(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::workflows::executions::v1::
                 CreateExecutionRequest const& request) {
        return stub_->CreateExecution(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnectionImpl::GetExecution(
    google::cloud::workflows::executions::v1::GetExecutionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetExecution(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::workflows::executions::v1::GetExecutionRequest const&
              request) {
        return stub_->GetExecution(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::workflows::executions::v1::Execution>
ExecutionsConnectionImpl::CancelExecution(
    google::cloud::workflows::executions::v1::CancelExecutionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelExecution(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::workflows::executions::v1::
                 CancelExecutionRequest const& request) {
        return stub_->CancelExecution(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_executions_v1_internal
}  // namespace cloud
}  // namespace google
