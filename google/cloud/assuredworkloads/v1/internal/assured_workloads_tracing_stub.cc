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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AssuredWorkloadsServiceTracingStub::AssuredWorkloadsServiceTracingStub(
    std::shared_ptr<AssuredWorkloadsServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceTracingStub::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "CreateWorkload");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateWorkload(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceTracingStub::UpdateWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "UpdateWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateWorkload(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceTracingStub::RestrictAllowedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "RestrictAllowedResources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->RestrictAllowedResources(context, options, request));
}

Status AssuredWorkloadsServiceTracingStub::DeleteWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "DeleteWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteWorkload(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceTracingStub::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "GetWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetWorkload(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
AssuredWorkloadsServiceTracingStub::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "ListWorkloads");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListWorkloads(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
AssuredWorkloadsServiceTracingStub::ListViolations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListViolationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "ListViolations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListViolations(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceTracingStub::GetViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "GetViolation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetViolation(context, options, request));
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceTracingStub::AcknowledgeViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.assuredworkloads.v1.AssuredWorkloadsService",
      "AcknowledgeViolation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AcknowledgeViolation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> AssuredWorkloadsServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCancelOperation(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AssuredWorkloadsServiceStub>
MakeAssuredWorkloadsServiceTracingStub(
    std::shared_ptr<AssuredWorkloadsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AssuredWorkloadsServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
