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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#include "google/cloud/cloudbuild/v1/internal/cloud_build_connection_impl.h"
#include "google/cloud/cloudbuild/v1/internal/cloud_build_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<cloudbuild_v1::CloudBuildRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<cloudbuild_v1::CloudBuildRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<cloudbuild_v1::CloudBuildBackoffPolicyOption>()->clone();
}

std::unique_ptr<cloudbuild_v1::CloudBuildConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<cloudbuild_v1::CloudBuildConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<cloudbuild_v1::CloudBuildPollingPolicyOption>()->clone();
}

}  // namespace

CloudBuildConnectionImpl::CloudBuildConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<cloudbuild_v1_internal::CloudBuildStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      CloudBuildConnection::options())) {}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnectionImpl::CreateBuild(
    google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateBuild(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::Build>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::CreateBuildRequest const& request) {
        return stub->AsyncCreateBuild(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::Build>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildConnectionImpl::GetBuild(
    google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBuild(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
        return stub_->GetBuild(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::devtools::cloudbuild::v1::Build>
CloudBuildConnectionImpl::ListBuilds(
    google::devtools::cloudbuild::v1::ListBuildsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBuilds(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::Build>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v1::CloudBuildRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::devtools::cloudbuild::v1::ListBuildsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::devtools::cloudbuild::v1::ListBuildsRequest const&
                       request) {
              return stub->ListBuilds(context, options, request);
            },
            options, r, function_name);
      },
      [](google::devtools::cloudbuild::v1::ListBuildsResponse r) {
        std::vector<google::devtools::cloudbuild::v1::Build> result(
            r.builds().size());
        auto& messages = *r.mutable_builds();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildConnectionImpl::CancelBuild(
    google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelBuild(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::devtools::cloudbuild::v1::CancelBuildRequest const& request) {
        return stub_->CancelBuild(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnectionImpl::RetryBuild(
    google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RetryBuild(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::Build>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::RetryBuildRequest const& request) {
        return stub->AsyncRetryBuild(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::Build>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnectionImpl::ApproveBuild(
    google::devtools::cloudbuild::v1::ApproveBuildRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ApproveBuild(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::Build>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::ApproveBuildRequest const&
              request) {
        return stub->AsyncApproveBuild(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::Build>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnectionImpl::CreateBuildTrigger(
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateBuildTrigger(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
                 request) {
        return stub_->CreateBuildTrigger(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnectionImpl::GetBuildTrigger(
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBuildTrigger(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&
                 request) {
        return stub_->GetBuildTrigger(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnectionImpl::ListBuildTriggers(
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBuildTriggers(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v1::CloudBuildRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::devtools::cloudbuild::v1::
                       ListBuildTriggersRequest const& request) {
              return stub->ListBuildTriggers(context, options, request);
            },
            options, r, function_name);
      },
      [](google::devtools::cloudbuild::v1::ListBuildTriggersResponse r) {
        std::vector<google::devtools::cloudbuild::v1::BuildTrigger> result(
            r.triggers().size());
        auto& messages = *r.mutable_triggers();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status CloudBuildConnectionImpl::DeleteBuildTrigger(
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteBuildTrigger(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
                 request) {
        return stub_->DeleteBuildTrigger(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnectionImpl::UpdateBuildTrigger(
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateBuildTrigger(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
                 request) {
        return stub_->UpdateBuildTrigger(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnectionImpl::RunBuildTrigger(
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RunBuildTrigger(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::Build>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&
              request) {
        return stub->AsyncRunBuildTrigger(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::Build>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildConnectionImpl::ReceiveTriggerWebhook(
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReceiveTriggerWebhook(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
              request) {
        return stub_->ReceiveTriggerWebhook(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildConnectionImpl::CreateWorkerPool(
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateWorkerPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::WorkerPool>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
              request) {
        return stub->AsyncCreateWorkerPool(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::WorkerPool>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildConnectionImpl::GetWorkerPool(
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetWorkerPool(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&
                 request) {
        return stub_->GetWorkerPool(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<
    google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
CloudBuildConnectionImpl::DeleteWorkerPool(
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteWorkerPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
              request) {
        return stub->AsyncDeleteWorkerPool(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildConnectionImpl::UpdateWorkerPool(
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateWorkerPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::devtools::cloudbuild::v1::WorkerPool>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
              request) {
        return stub->AsyncUpdateWorkerPool(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::devtools::cloudbuild::v1::WorkerPool>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildConnectionImpl::ListWorkerPools(
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListWorkerPools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::WorkerPool>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<cloudbuild_v1::CloudBuildRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const&
                    request) {
              return stub->ListWorkerPools(context, options, request);
            },
            options, r, function_name);
      },
      [](google::devtools::cloudbuild::v1::ListWorkerPoolsResponse r) {
        std::vector<google::devtools::cloudbuild::v1::WorkerPool> result(
            r.worker_pools().size());
        auto& messages = *r.mutable_worker_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v1_internal
}  // namespace cloud
}  // namespace google
