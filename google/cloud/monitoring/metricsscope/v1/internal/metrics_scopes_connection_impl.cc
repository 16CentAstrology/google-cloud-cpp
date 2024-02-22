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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_connection_impl.h"
#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<monitoring_metricsscope_v1::MetricsScopesRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<monitoring_metricsscope_v1::MetricsScopesRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<monitoring_metricsscope_v1::MetricsScopesBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    monitoring_metricsscope_v1::MetricsScopesConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<monitoring_metricsscope_v1::
               MetricsScopesConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<monitoring_metricsscope_v1::MetricsScopesPollingPolicyOption>()
      ->clone();
}

}  // namespace

MetricsScopesConnectionImpl::MetricsScopesConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<monitoring_metricsscope_v1_internal::MetricsScopesStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      MetricsScopesConnection::options())) {}

StatusOr<google::monitoring::metricsscope::v1::MetricsScope>
MetricsScopesConnectionImpl::GetMetricsScope(
    google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetMetricsScope(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
                 request) {
        return stub_->GetMetricsScope(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::metricsscope::v1::
             ListMetricsScopesByMonitoredProjectResponse>
MetricsScopesConnectionImpl::ListMetricsScopesByMonitoredProject(
    google::monitoring::metricsscope::v1::
        ListMetricsScopesByMonitoredProjectRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListMetricsScopesByMonitoredProject(
          request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::metricsscope::v1::
                 ListMetricsScopesByMonitoredProjectRequest const& request) {
        return stub_->ListMetricsScopesByMonitoredProject(context, options,
                                                          request);
      },
      *current, request, __func__);
}

future<StatusOr<google::monitoring::metricsscope::v1::MonitoredProject>>
MetricsScopesConnectionImpl::CreateMonitoredProject(
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateMonitoredProject(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::monitoring::metricsscope::v1::MonitoredProject>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::monitoring::metricsscope::v1::
                         CreateMonitoredProjectRequest const& request) {
        return stub->AsyncCreateMonitoredProject(cq, std::move(context),
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
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::monitoring::metricsscope::v1::MonitoredProject>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::monitoring::metricsscope::v1::OperationMetadata>>
MetricsScopesConnectionImpl::DeleteMonitoredProject(
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteMonitoredProject(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::monitoring::metricsscope::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::monitoring::metricsscope::v1::
                         DeleteMonitoredProjectRequest const& request) {
        return stub->AsyncDeleteMonitoredProject(cq, std::move(context),
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
          google::monitoring::metricsscope::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_internal
}  // namespace cloud
}  // namespace google
