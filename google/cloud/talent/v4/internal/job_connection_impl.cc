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
// source: google/cloud/talent/v4/job_service.proto

#include "google/cloud/talent/v4/internal/job_connection_impl.h"
#include "google/cloud/talent/v4/internal/job_option_defaults.h"
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
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<talent_v4::JobServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<talent_v4::JobServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<talent_v4::JobServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<talent_v4::JobServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<talent_v4::JobServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<talent_v4::JobServicePollingPolicyOption>()->clone();
}

}  // namespace

JobServiceConnectionImpl::JobServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<talent_v4_internal::JobServiceStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      JobServiceConnection::options())) {}

StatusOr<google::cloud::talent::v4::Job> JobServiceConnectionImpl::CreateJob(
    google::cloud::talent::v4::CreateJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::CreateJobRequest const& request) {
        return stub_->CreateJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceConnectionImpl::BatchCreateJobs(
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchCreateJobs(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::talent::v4::BatchCreateJobsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
        return stub->AsyncBatchCreateJobs(cq, std::move(context), options,
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
          google::cloud::talent::v4::BatchCreateJobsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceConnectionImpl::GetJob(
    google::cloud::talent::v4::GetJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::GetJobRequest const& request) {
        return stub_->GetJob(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::talent::v4::Job> JobServiceConnectionImpl::UpdateJob(
    google::cloud::talent::v4::UpdateJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::UpdateJobRequest const& request) {
        return stub_->UpdateJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceConnectionImpl::BatchUpdateJobs(
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchUpdateJobs(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::talent::v4::BatchUpdateJobsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
        return stub->AsyncBatchUpdateJobs(cq, std::move(context), options,
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
          google::cloud::talent::v4::BatchUpdateJobsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

Status JobServiceConnectionImpl::DeleteJob(
    google::cloud::talent::v4::DeleteJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteJob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::DeleteJobRequest const& request) {
        return stub_->DeleteJob(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceConnectionImpl::BatchDeleteJobs(
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->BatchDeleteJobs(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::talent::v4::BatchDeleteJobsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
        return stub->AsyncBatchDeleteJobs(cq, std::move(context), options,
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
          google::cloud::talent::v4::BatchDeleteJobsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::talent::v4::Job> JobServiceConnectionImpl::ListJobs(
    google::cloud::talent::v4::ListJobsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::talent::v4::Job>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<talent_v4::JobServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::talent::v4::ListJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::talent::v4::ListJobsRequest const& request) {
              return stub->ListJobs(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::talent::v4::ListJobsResponse r) {
        std::vector<google::cloud::talent::v4::Job> result(r.jobs().size());
        auto& messages = *r.mutable_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceConnectionImpl::SearchJobs(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SearchJobs(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::SearchJobsRequest const& request) {
        return stub_->SearchJobs(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceConnectionImpl::SearchJobsForAlert(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SearchJobsForAlert(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::talent::v4::SearchJobsRequest const& request) {
        return stub_->SearchJobsForAlert(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
