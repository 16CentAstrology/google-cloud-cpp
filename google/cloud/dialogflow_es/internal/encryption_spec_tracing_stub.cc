// Copyright 2024 Google LLC
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
// source: google/cloud/dialogflow/v2/encryption_spec.proto

#include "google/cloud/dialogflow_es/internal/encryption_spec_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EncryptionSpecServiceTracingStub::EncryptionSpecServiceTracingStub(
    std::shared_ptr<EncryptionSpecServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::v2::EncryptionSpec>
EncryptionSpecServiceTracingStub::GetEncryptionSpec(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::v2::GetEncryptionSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.v2.EncryptionSpecService", "GetEncryptionSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetEncryptionSpec(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EncryptionSpecServiceTracingStub::AsyncInitializeEncryptionSpec(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dialogflow::v2::InitializeEncryptionSpecRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EncryptionSpecService",
                             "InitializeEncryptionSpec");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncInitializeEncryptionSpec(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
EncryptionSpecServiceTracingStub::InitializeEncryptionSpec(
    grpc::ClientContext& context, Options options,
    google::cloud::dialogflow::v2::InitializeEncryptionSpecRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dialogflow.v2.EncryptionSpecService",
                             "InitializeEncryptionSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->InitializeEncryptionSpec(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EncryptionSpecServiceTracingStub::AsyncGetOperation(
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

future<Status> EncryptionSpecServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<EncryptionSpecServiceStub> MakeEncryptionSpecServiceTracingStub(
    std::shared_ptr<EncryptionSpecServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EncryptionSpecServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
