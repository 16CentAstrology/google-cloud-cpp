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

#include "google/cloud/monitoring/metricsscope/v1/internal/metrics_scopes_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_metricsscope_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetricsScopesTracingStub::MetricsScopesTracingStub(
    std::shared_ptr<MetricsScopesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::monitoring::metricsscope::v1::MetricsScope>
MetricsScopesTracingStub::GetMetricsScope(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.metricsscope.v1.MetricsScopes", "GetMetricsScope");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetMetricsScope(context, options, request));
}

StatusOr<google::monitoring::metricsscope::v1::
             ListMetricsScopesByMonitoredProjectResponse>
MetricsScopesTracingStub::ListMetricsScopesByMonitoredProject(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::metricsscope::v1::
        ListMetricsScopesByMonitoredProjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "ListMetricsScopesByMonitoredProject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListMetricsScopesByMonitoredProject(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncCreateMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "CreateMonitoredProject");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateMonitoredProject(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetricsScopesTracingStub::CreateMonitoredProject(
    grpc::ClientContext& context, Options options,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "CreateMonitoredProject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateMonitoredProject(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncDeleteMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "DeleteMonitoredProject");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteMonitoredProject(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
MetricsScopesTracingStub::DeleteMonitoredProject(
    grpc::ClientContext& context, Options options,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "DeleteMonitoredProject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteMonitoredProject(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> MetricsScopesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MetricsScopesStub> MakeMetricsScopesTracingStub(
    std::shared_ptr<MetricsScopesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MetricsScopesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_metricsscope_v1_internal
}  // namespace cloud
}  // namespace google
