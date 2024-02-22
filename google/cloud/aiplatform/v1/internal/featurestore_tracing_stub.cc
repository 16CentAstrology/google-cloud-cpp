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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeaturestoreServiceTracingStub::FeaturestoreServiceTracingStub(
    std::shared_ptr<FeaturestoreServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateFeaturestore(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingStub::GetFeaturestore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFeaturestore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
FeaturestoreServiceTracingStub::ListFeaturestores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListFeaturestores");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListFeaturestores(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncUpdateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateFeaturestore(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteFeaturestore(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateEntityType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEntityType(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingStub::GetEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEntityType(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
FeaturestoreServiceTracingStub::ListEntityTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListEntityTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEntityTypes(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingStub::UpdateEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEntityType(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteEntityType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEntityType(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeature");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateFeature(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncBatchCreateFeatures(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "BatchCreateFeatures");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchCreateFeatures(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingStub::GetFeature(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFeature(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse>
FeaturestoreServiceTracingStub::ListFeatures(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFeatures(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingStub::UpdateFeature(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateFeature(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeature");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteFeature(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncImportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ImportFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportFeatureValues(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncBatchReadFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.FeaturestoreService",
                             "BatchReadFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchReadFeatureValues(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncExportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ExportFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncExportFeatureValues(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteFeatureValues(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
FeaturestoreServiceTracingStub::SearchFeatures(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "SearchFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchFeatures(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncGetOperation(
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

future<Status> FeaturestoreServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<FeaturestoreServiceStub> MakeFeaturestoreServiceTracingStub(
    std::shared_ptr<FeaturestoreServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<FeaturestoreServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
