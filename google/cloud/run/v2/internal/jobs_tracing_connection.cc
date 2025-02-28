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
// source: google/cloud/run/v2/job.proto

#include "google/cloud/run/v2/internal/jobs_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

JobsTracingConnection::JobsTracingConnection(
    std::shared_ptr<run_v2::JobsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::CreateJob(
    google::cloud::run::v2::CreateJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::CreateJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateJob(request));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::CreateJob(
    NoAwaitTag, google::cloud::run::v2::CreateJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::CreateJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::CreateJob(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::CreateJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateJob(operation));
}

StatusOr<google::cloud::run::v2::Job> JobsTracingConnection::GetJob(
    google::cloud::run::v2::GetJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::GetJob");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetJob(request));
}

StreamRange<google::cloud::run::v2::Job> JobsTracingConnection::ListJobs(
    google::cloud::run::v2::ListJobsRequest request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::ListJobs");
  internal::OTelScope scope(span);
  auto sr = child_->ListJobs(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::run::v2::Job>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::UpdateJob(
    google::cloud::run::v2::UpdateJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::UpdateJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateJob(request));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::UpdateJob(
    NoAwaitTag, google::cloud::run::v2::UpdateJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::UpdateJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::UpdateJob(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::UpdateJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateJob(operation));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::DeleteJob(
    google::cloud::run::v2::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::DeleteJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteJob(request));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::DeleteJob(
    NoAwaitTag, google::cloud::run::v2::DeleteJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::DeleteJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Job>> JobsTracingConnection::DeleteJob(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::DeleteJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteJob(operation));
}

future<StatusOr<google::cloud::run::v2::Execution>>
JobsTracingConnection::RunJob(
    google::cloud::run::v2::RunJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::RunJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RunJob(request));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::RunJob(
    NoAwaitTag, google::cloud::run::v2::RunJobRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::RunJob");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->RunJob(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::run::v2::Execution>>
JobsTracingConnection::RunJob(google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::RunJob");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RunJob(operation));
}

StatusOr<google::iam::v1::Policy> JobsTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> JobsTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
JobsTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
JobsTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status JobsTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

StatusOr<google::longrunning::Operation> JobsTracingConnection::WaitOperation(
    google::longrunning::WaitOperationRequest const& request) {
  auto span = internal::MakeSpan("run_v2::JobsConnection::WaitOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->WaitOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<run_v2::JobsConnection> MakeJobsTracingConnection(
    std::shared_ptr<run_v2::JobsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<JobsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
