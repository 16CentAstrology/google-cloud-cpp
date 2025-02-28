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
// source: google/logging/v2/logging_metrics.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_CONNECTION_IMPL_H

#include "google/cloud/logging/v2/internal/metrics_service_v2_retry_traits.h"
#include "google/cloud/logging/v2/internal/metrics_service_v2_stub.h"
#include "google/cloud/logging/v2/metrics_service_v2_connection.h"
#include "google/cloud/logging/v2/metrics_service_v2_connection_idempotency_policy.h"
#include "google/cloud/logging/v2/metrics_service_v2_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MetricsServiceV2ConnectionImpl
    : public logging_v2::MetricsServiceV2Connection {
 public:
  ~MetricsServiceV2ConnectionImpl() override = default;

  MetricsServiceV2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<logging_v2_internal::MetricsServiceV2Stub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::logging::v2::LogMetric> ListLogMetrics(
      google::logging::v2::ListLogMetricsRequest request) override;

  StatusOr<google::logging::v2::LogMetric> GetLogMetric(
      google::logging::v2::GetLogMetricRequest const& request) override;

  StatusOr<google::logging::v2::LogMetric> CreateLogMetric(
      google::logging::v2::CreateLogMetricRequest const& request) override;

  StatusOr<google::logging::v2::LogMetric> UpdateLogMetric(
      google::logging::v2::UpdateLogMetricRequest const& request) override;

  Status DeleteLogMetric(
      google::logging::v2::DeleteLogMetricRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<logging_v2_internal::MetricsServiceV2Stub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_CONNECTION_IMPL_H
