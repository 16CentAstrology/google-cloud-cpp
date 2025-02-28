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

#include "google/cloud/logging/v2/internal/metrics_service_v2_auth_decorator.h"
#include <google/logging/v2/logging_metrics.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetricsServiceV2Auth::MetricsServiceV2Auth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<MetricsServiceV2Stub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::logging::v2::ListLogMetricsResponse>
MetricsServiceV2Auth::ListLogMetrics(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListLogMetricsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLogMetrics(context, options, request);
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Auth::GetLogMetric(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::GetLogMetricRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLogMetric(context, options, request);
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Auth::CreateLogMetric(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::CreateLogMetricRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateLogMetric(context, options, request);
}

StatusOr<google::logging::v2::LogMetric> MetricsServiceV2Auth::UpdateLogMetric(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::UpdateLogMetricRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateLogMetric(context, options, request);
}

Status MetricsServiceV2Auth::DeleteLogMetric(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteLogMetricRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteLogMetric(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
MetricsServiceV2Auth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> MetricsServiceV2Auth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

Status MetricsServiceV2Auth::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelOperation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
