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
// source: google/cloud/compute/health_checks/v1/health_checks.proto

#include "google/cloud/compute/health_checks/v1/health_checks_connection.h"
#include "google/cloud/compute/health_checks/v1/health_checks_options.h"
#include "google/cloud/compute/health_checks/v1/internal/health_checks_option_defaults.h"
#include "google/cloud/compute/health_checks/v1/internal/health_checks_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_health_checks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HealthChecksConnection::~HealthChecksConnection() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::HealthChecksScopedList>>
HealthChecksConnection::AggregatedListHealthChecks(
    google::cloud::cpp::compute::health_checks::v1::
        AggregatedListHealthChecksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::HealthChecksScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::DeleteHealthCheck(
    google::cloud::cpp::compute::health_checks::v1::
        DeleteHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksConnection::DeleteHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::health_checks::v1::
                    DeleteHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::DeleteHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
HealthChecksConnection::GetHealthCheck(
    google::cloud::cpp::compute::health_checks::v1::
        GetHealthCheckRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::InsertHealthCheck(
    google::cloud::cpp::compute::health_checks::v1::
        InsertHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksConnection::InsertHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::health_checks::v1::
                    InsertHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::InsertHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheck>
HealthChecksConnection::ListHealthChecks(
    google::cloud::cpp::compute::health_checks::v1::
        ListHealthChecksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::HealthCheck>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::PatchHealthCheck(
    google::cloud::cpp::compute::health_checks::v1::
        PatchHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksConnection::PatchHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::health_checks::v1::
                    PatchHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::PatchHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::UpdateHealthCheck(
    google::cloud::cpp::compute::health_checks::v1::
        UpdateHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksConnection::UpdateHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::health_checks::v1::
                    UpdateHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksConnection::UpdateHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_health_checks_v1
}  // namespace cloud
}  // namespace google
