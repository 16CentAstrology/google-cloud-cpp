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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#include "google/cloud/aiplatform/v1/internal/tensorboard_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/tensorboard_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/resumable_streaming_read_rpc.h"
#include "google/cloud/internal/retry_loop.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::TensorboardServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::TensorboardServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::TensorboardServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::TensorboardServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::TensorboardServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::TensorboardServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

TensorboardServiceConnectionImpl::TensorboardServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::TensorboardServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), TensorboardServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>
TensorboardServiceConnectionImpl::CreateTensorboard(
    google::cloud::aiplatform::v1::CreateTensorboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateTensorboard(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Tensorboard>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::CreateTensorboardRequest const&
              request) {
        return stub->AsyncCreateTensorboard(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::Tensorboard>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceConnectionImpl::GetTensorboard(
    google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTensorboard(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardRequest const& request) {
        return stub_->GetTensorboard(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::Tensorboard>>
TensorboardServiceConnectionImpl::UpdateTensorboard(
    google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateTensorboard(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::Tensorboard>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
              request) {
        return stub->AsyncUpdateTensorboard(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::Tensorboard>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::aiplatform::v1::Tensorboard>
TensorboardServiceConnectionImpl::ListTensorboards(
    google::cloud::aiplatform::v1::ListTensorboardsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTensorboards(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::Tensorboard>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::TensorboardServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::ListTensorboardsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::ListTensorboardsRequest const&
                       request) {
              return stub->ListTensorboards(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListTensorboardsResponse r) {
        std::vector<google::cloud::aiplatform::v1::Tensorboard> result(
            r.tensorboards().size());
        auto& messages = *r.mutable_tensorboards();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnectionImpl::DeleteTensorboard(
    google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteTensorboard(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
              request) {
        return stub->AsyncDeleteTensorboard(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
TensorboardServiceConnectionImpl::ReadTensorboardUsage(
    google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReadTensorboardUsage(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&
                 request) {
        return stub_->ReadTensorboardUsage(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
TensorboardServiceConnectionImpl::ReadTensorboardSize(
    google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReadTensorboardSize(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const&
                 request) {
        return stub_->ReadTensorboardSize(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnectionImpl::CreateTensorboardExperiment(
    google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTensorboardExperiment(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateTensorboardExperimentRequest const& request) {
        return stub_->CreateTensorboardExperiment(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnectionImpl::GetTensorboardExperiment(
    google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTensorboardExperiment(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
              request) {
        return stub_->GetTensorboardExperiment(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnectionImpl::UpdateTensorboardExperiment(
    google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTensorboardExperiment(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 UpdateTensorboardExperimentRequest const& request) {
        return stub_->UpdateTensorboardExperiment(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::TensorboardExperiment>
TensorboardServiceConnectionImpl::ListTensorboardExperiments(
    google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTensorboardExperiments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardExperiment>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::TensorboardServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::
              ListTensorboardExperimentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::
                       ListTensorboardExperimentsRequest const& request) {
              return stub->ListTensorboardExperiments(context, options,
                                                      request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse r) {
        std::vector<google::cloud::aiplatform::v1::TensorboardExperiment>
            result(r.tensorboard_experiments().size());
        auto& messages = *r.mutable_tensorboard_experiments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnectionImpl::DeleteTensorboardExperiment(
    google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteTensorboardExperiment(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::aiplatform::v1::
                         DeleteTensorboardExperimentRequest const& request) {
        return stub->AsyncDeleteTensorboardExperiment(cq, std::move(context),
                                                      options, request);
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnectionImpl::CreateTensorboardRun(
    google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTensorboardRun(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&
                 request) {
        return stub_->CreateTensorboardRun(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
TensorboardServiceConnectionImpl::BatchCreateTensorboardRuns(
    google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchCreateTensorboardRuns(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchCreateTensorboardRunsRequest const& request) {
        return stub_->BatchCreateTensorboardRuns(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnectionImpl::GetTensorboardRun(
    google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTensorboardRun(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetTensorboardRunRequest const&
                 request) {
        return stub_->GetTensorboardRun(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnectionImpl::UpdateTensorboardRun(
    google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTensorboardRun(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&
                 request) {
        return stub_->UpdateTensorboardRun(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::TensorboardRun>
TensorboardServiceConnectionImpl::ListTensorboardRuns(
    google::cloud::aiplatform::v1::ListTensorboardRunsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListTensorboardRuns(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardRun>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::TensorboardServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::aiplatform::v1::ListTensorboardRunsRequest const&
                    request) {
              return stub->ListTensorboardRuns(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListTensorboardRunsResponse r) {
        std::vector<google::cloud::aiplatform::v1::TensorboardRun> result(
            r.tensorboard_runs().size());
        auto& messages = *r.mutable_tensorboard_runs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnectionImpl::DeleteTensorboardRun(
    google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteTensorboardRun(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
              request) {
        return stub->AsyncDeleteTensorboardRun(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
TensorboardServiceConnectionImpl::BatchCreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::
        BatchCreateTensorboardTimeSeriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchCreateTensorboardTimeSeries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchCreateTensorboardTimeSeriesRequest const& request) {
        return stub_->BatchCreateTensorboardTimeSeries(context, options,
                                                       request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnectionImpl::CreateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateTensorboardTimeSeries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 CreateTensorboardTimeSeriesRequest const& request) {
        return stub_->CreateTensorboardTimeSeries(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnectionImpl::GetTensorboardTimeSeries(
    google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetTensorboardTimeSeries(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
              request) {
        return stub_->GetTensorboardTimeSeries(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnectionImpl::UpdateTensorboardTimeSeries(
    google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateTensorboardTimeSeries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 UpdateTensorboardTimeSeriesRequest const& request) {
        return stub_->UpdateTensorboardTimeSeries(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::TensorboardTimeSeries>
TensorboardServiceConnectionImpl::ListTensorboardTimeSeries(
    google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListTensorboardTimeSeries(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TensorboardTimeSeries>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::TensorboardServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::
                       ListTensorboardTimeSeriesRequest const& request) {
              return stub->ListTensorboardTimeSeries(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse r) {
        std::vector<google::cloud::aiplatform::v1::TensorboardTimeSeries>
            result(r.tensorboard_time_series().size());
        auto& messages = *r.mutable_tensorboard_time_series();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
TensorboardServiceConnectionImpl::DeleteTensorboardTimeSeries(
    google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteTensorboardTimeSeries(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::cloud::aiplatform::v1::
                         DeleteTensorboardTimeSeriesRequest const& request) {
        return stub->AsyncDeleteTensorboardTimeSeries(cq, std::move(context),
                                                      options, request);
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<
    google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
TensorboardServiceConnectionImpl::BatchReadTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::
        BatchReadTensorboardTimeSeriesDataRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchReadTensorboardTimeSeriesData(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 BatchReadTensorboardTimeSeriesDataRequest const& request) {
        return stub_->BatchReadTensorboardTimeSeriesData(context, options,
                                                         request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
TensorboardServiceConnectionImpl::ReadTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ReadTensorboardTimeSeriesData(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 ReadTensorboardTimeSeriesDataRequest const& request) {
        return stub_->ReadTensorboardTimeSeriesData(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>
TensorboardServiceConnectionImpl::ReadTensorboardBlobData(
    google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto factory =
      [stub = stub_, current](
          google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
              request) {
        return stub->ReadTensorboardBlobData(
            std::make_shared<grpc::ClientContext>(), *current, request);
      };
  auto resumable = internal::MakeResumableStreamingReadRpc<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse,
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest>(
      retry_policy(*current), backoff_policy(*current), factory,
      TensorboardServiceReadTensorboardBlobDataStreamingUpdater, request);
  return internal::MakeStreamRange(
      internal::StreamReader<
          google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>(
          [resumable] { return resumable->Read(); }));
}
StatusOr<google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
TensorboardServiceConnectionImpl::WriteTensorboardExperimentData(
    google::cloud::aiplatform::v1::WriteTensorboardExperimentDataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->WriteTensorboardExperimentData(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 WriteTensorboardExperimentDataRequest const& request) {
        return stub_->WriteTensorboardExperimentData(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
TensorboardServiceConnectionImpl::WriteTensorboardRunData(
    google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->WriteTensorboardRunData(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
              request) {
        return stub_->WriteTensorboardRunData(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::TimeSeriesDataPoint>
TensorboardServiceConnectionImpl::ExportTensorboardTimeSeriesData(
    google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ExportTensorboardTimeSeriesData(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::TimeSeriesDataPoint>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::TensorboardServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::
              ExportTensorboardTimeSeriesDataRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::
                       ExportTensorboardTimeSeriesDataRequest const& request) {
              return stub->ExportTensorboardTimeSeriesData(context, options,
                                                           request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse
             r) {
        std::vector<google::cloud::aiplatform::v1::TimeSeriesDataPoint> result(
            r.time_series_data_points().size());
        auto& messages = *r.mutable_time_series_data_points();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
