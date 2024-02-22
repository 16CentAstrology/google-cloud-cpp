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
// source: google/cloud/contentwarehouse/v1/synonymset_service.proto

#include "google/cloud/contentwarehouse/v1/internal/synonym_set_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SynonymSetServiceTracingStub::SynonymSetServiceTracingStub(
    std::shared_ptr<SynonymSetServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceTracingStub::CreateSynonymSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::CreateSynonymSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.SynonymSetService", "CreateSynonymSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSynonymSet(context, options, request));
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceTracingStub::GetSynonymSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::GetSynonymSetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.SynonymSetService", "GetSynonymSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSynonymSet(context, options, request));
}

StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
SynonymSetServiceTracingStub::UpdateSynonymSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.SynonymSetService", "UpdateSynonymSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSynonymSet(context, options, request));
}

Status SynonymSetServiceTracingStub::DeleteSynonymSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.SynonymSetService", "DeleteSynonymSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSynonymSet(context, options, request));
}

StatusOr<google::cloud::contentwarehouse::v1::ListSynonymSetsResponse>
SynonymSetServiceTracingStub::ListSynonymSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::contentwarehouse::v1::ListSynonymSetsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.contentwarehouse.v1.SynonymSetService", "ListSynonymSets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSynonymSets(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SynonymSetServiceStub> MakeSynonymSetServiceTracingStub(
    std::shared_ptr<SynonymSetServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SynonymSetServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
