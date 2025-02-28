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

#include "google/cloud/talent/v4/internal/job_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobServiceTracingConnection::JobServiceTracingConnection(
    std::shared_ptr<talent_v4::JobServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::CreateJob(
    google::cloud::talent::v4::CreateJobRequest const& request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::CreateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceTracingConnection::BatchCreateJobs(
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchCreateJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchCreateJobs(request));
}

StatusOr<google::longrunning::Operation>
JobServiceTracingConnection::BatchCreateJobs(
    NoAwaitTag,
    google::cloud::talent::v4::BatchCreateJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchCreateJobs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->BatchCreateJobs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
JobServiceTracingConnection::BatchCreateJobs(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchCreateJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchCreateJobs(operation));
}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::GetJob(
    google::cloud::talent::v4::GetJobRequest const& request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

StatusOr<google::cloud::talent::v4::Job> JobServiceTracingConnection::UpdateJob(
    google::cloud::talent::v4::UpdateJobRequest const& request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::UpdateJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceTracingConnection::BatchUpdateJobs(
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchUpdateJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchUpdateJobs(request));
}

StatusOr<google::longrunning::Operation>
JobServiceTracingConnection::BatchUpdateJobs(
    NoAwaitTag,
    google::cloud::talent::v4::BatchUpdateJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchUpdateJobs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->BatchUpdateJobs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
JobServiceTracingConnection::BatchUpdateJobs(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchUpdateJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchUpdateJobs(operation));
}

Status JobServiceTracingConnection::DeleteJob(
    google::cloud::talent::v4::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::DeleteJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteJob(request));
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceTracingConnection::BatchDeleteJobs(
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchDeleteJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchDeleteJobs(request));
}

StatusOr<google::longrunning::Operation>
JobServiceTracingConnection::BatchDeleteJobs(
    NoAwaitTag,
    google::cloud::talent::v4::BatchDeleteJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchDeleteJobs");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->BatchDeleteJobs(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
JobServiceTracingConnection::BatchDeleteJobs(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::BatchDeleteJobs");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BatchDeleteJobs(operation));
}

StreamRange<google::cloud::talent::v4::Job>
JobServiceTracingConnection::ListJobs(
    google::cloud::talent::v4::ListJobsRequest request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::ListJobs");
  internal::OTelScope scope(span);
  auto sr = child_->ListJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::talent::v4::Job>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceTracingConnection::SearchJobs(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto span = internal::MakeSpan("talent_v4::JobServiceConnection::SearchJobs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchJobs(request));
}

StatusOr<google::cloud::talent::v4::SearchJobsResponse>
JobServiceTracingConnection::SearchJobsForAlert(
    google::cloud::talent::v4::SearchJobsRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::SearchJobsForAlert");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SearchJobsForAlert(request));
}

StatusOr<google::longrunning::Operation>
JobServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpan("talent_v4::JobServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<talent_v4::JobServiceConnection>
MakeJobServiceTracingConnection(
    std::shared_ptr<talent_v4::JobServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<JobServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google
