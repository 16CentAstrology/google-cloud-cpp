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
// source:
// google/cloud/compute/region_health_checks/v1/region_health_checks.proto

#include "google/cloud/compute/region_health_checks/v1/internal/region_health_checks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RegionHealthChecksTracingConnection::RegionHealthChecksTracingConnection(
    std::shared_ptr<
        compute_region_health_checks_v1::RegionHealthChecksConnection>
        child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::DeleteHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        DeleteHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "DeleteHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteHealthCheck(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthChecksTracingConnection::DeleteHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::region_health_checks::v1::
                    DeleteHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "DeleteHealthCheck");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteHealthCheck(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::DeleteHealthCheck(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "DeleteHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteHealthCheck(operation));
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksTracingConnection::GetHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        GetHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "GetHealthCheck");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetHealthCheck(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::InsertHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        InsertHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "InsertHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->InsertHealthCheck(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthChecksTracingConnection::InsertHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::region_health_checks::v1::
                    InsertHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "InsertHealthCheck");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->InsertHealthCheck(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::InsertHealthCheck(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "InsertHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertHealthCheck(operation));
}

StreamRange<google::cloud::cpp::compute::v1::HealthCheck>
RegionHealthChecksTracingConnection::ListRegionHealthChecks(
    google::cloud::cpp::compute::region_health_checks::v1::
        ListRegionHealthChecksRequest request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "ListRegionHealthChecks");
  internal::OTelScope scope(span);
  auto sr = child_->ListRegionHealthChecks(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::HealthCheck>(std::move(span),
                                                    std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::PatchHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        PatchHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "PatchHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->PatchHealthCheck(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthChecksTracingConnection::PatchHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::region_health_checks::v1::
                    PatchHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "PatchHealthCheck");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->PatchHealthCheck(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::PatchHealthCheck(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "PatchHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->PatchHealthCheck(operation));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::UpdateHealthCheck(
    google::cloud::cpp::compute::region_health_checks::v1::
        UpdateHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "UpdateHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateHealthCheck(request));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionHealthChecksTracingConnection::UpdateHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::region_health_checks::v1::
                    UpdateHealthCheckRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "UpdateHealthCheck");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateHealthCheck(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionHealthChecksTracingConnection::UpdateHealthCheck(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto span = internal::MakeSpan(
      "compute_region_health_checks_v1::RegionHealthChecksConnection::"
      "UpdateHealthCheck");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateHealthCheck(operation));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_region_health_checks_v1::RegionHealthChecksConnection>
MakeRegionHealthChecksTracingConnection(
    std::shared_ptr<
        compute_region_health_checks_v1::RegionHealthChecksConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<RegionHealthChecksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_health_checks_v1_internal
}  // namespace cloud
}  // namespace google
