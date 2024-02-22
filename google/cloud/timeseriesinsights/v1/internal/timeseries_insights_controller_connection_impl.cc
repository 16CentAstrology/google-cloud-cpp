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
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#include "google/cloud/timeseriesinsights/v1/internal/timeseries_insights_controller_connection_impl.h"
#include "google/cloud/timeseriesinsights/v1/internal/timeseries_insights_controller_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<timeseriesinsights_v1::TimeseriesInsightsControllerRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<timeseriesinsights_v1::
               TimeseriesInsightsControllerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<timeseriesinsights_v1::
               TimeseriesInsightsControllerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<timeseriesinsights_v1::
                    TimeseriesInsightsControllerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<timeseriesinsights_v1::
               TimeseriesInsightsControllerConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

TimeseriesInsightsControllerConnectionImpl::
    TimeseriesInsightsControllerConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            timeseriesinsights_v1_internal::TimeseriesInsightsControllerStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          TimeseriesInsightsControllerConnection::options())) {}

StreamRange<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerConnectionImpl::ListDataSets(
    google::cloud::timeseriesinsights::v1::ListDataSetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDataSets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::timeseriesinsights::v1::DataSet>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           timeseriesinsights_v1::TimeseriesInsightsControllerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::timeseriesinsights::v1::ListDataSetsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::timeseriesinsights::v1::
                       ListDataSetsRequest const& request) {
              return stub->ListDataSets(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::timeseriesinsights::v1::ListDataSetsResponse r) {
        std::vector<google::cloud::timeseriesinsights::v1::DataSet> result(
            r.datasets().size());
        auto& messages = *r.mutable_datasets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerConnectionImpl::CreateDataSet(
    google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDataSet(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
                 request) {
        return stub_->CreateDataSet(context, options, request);
      },
      *current, request, __func__);
}

Status TimeseriesInsightsControllerConnectionImpl::DeleteDataSet(
    google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDataSet(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
                 request) {
        return stub_->DeleteDataSet(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerConnectionImpl::AppendEvents(
    google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AppendEvents(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::AppendEventsRequest const&
                 request) {
        return stub_->AppendEvents(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
TimeseriesInsightsControllerConnectionImpl::QueryDataSet(
    google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->QueryDataSet(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::QueryDataSetRequest const&
                 request) {
        return stub_->QueryDataSet(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerConnectionImpl::EvaluateSlice(
    google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->EvaluateSlice(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
                 request) {
        return stub_->EvaluateSlice(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerConnectionImpl::EvaluateTimeseries(
    google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->EvaluateTimeseries(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::timeseriesinsights::v1::
                 EvaluateTimeseriesRequest const& request) {
        return stub_->EvaluateTimeseries(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace timeseriesinsights_v1_internal
}  // namespace cloud
}  // namespace google
