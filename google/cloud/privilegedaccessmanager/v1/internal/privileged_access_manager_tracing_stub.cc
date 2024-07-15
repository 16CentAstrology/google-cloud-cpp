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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#include "google/cloud/privilegedaccessmanager/v1/internal/privileged_access_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PrivilegedAccessManagerTracingStub::PrivilegedAccessManagerTracingStub(
    std::shared_ptr<PrivilegedAccessManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<
    google::cloud::privilegedaccessmanager::v1::CheckOnboardingStatusResponse>
PrivilegedAccessManagerTracingStub::CheckOnboardingStatus(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::
        CheckOnboardingStatusRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "CheckOnboardingStatus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CheckOnboardingStatus(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::ListEntitlementsResponse>
PrivilegedAccessManagerTracingStub::ListEntitlements(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "ListEntitlements");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEntitlements(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::SearchEntitlementsResponse>
PrivilegedAccessManagerTracingStub::SearchEntitlements(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::SearchEntitlementsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "SearchEntitlements");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SearchEntitlements(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>
PrivilegedAccessManagerTracingStub::GetEntitlement(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "GetEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEntitlement(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrivilegedAccessManagerTracingStub::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::privilegedaccessmanager::v1::CreateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "CreateEntitlement");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateEntitlement(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingStub::CreateEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::privilegedaccessmanager::v1::CreateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "CreateEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateEntitlement(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrivilegedAccessManagerTracingStub::AsyncDeleteEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::privilegedaccessmanager::v1::DeleteEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "DeleteEntitlement");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteEntitlement(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingStub::DeleteEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::privilegedaccessmanager::v1::DeleteEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "DeleteEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteEntitlement(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrivilegedAccessManagerTracingStub::AsyncUpdateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::privilegedaccessmanager::v1::UpdateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "UpdateEntitlement");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateEntitlement(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingStub::UpdateEntitlement(
    grpc::ClientContext& context, Options options,
    google::cloud::privilegedaccessmanager::v1::UpdateEntitlementRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "UpdateEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateEntitlement(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::ListGrantsResponse>
PrivilegedAccessManagerTracingStub::ListGrants(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::ListGrantsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "ListGrants");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGrants(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::SearchGrantsResponse>
PrivilegedAccessManagerTracingStub::SearchGrants(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "SearchGrants");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchGrants(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingStub::GetGrant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "GetGrant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGrant(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingStub::CreateGrant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "CreateGrant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateGrant(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingStub::ApproveGrant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "ApproveGrant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ApproveGrant(context, options, request));
}

StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>
PrivilegedAccessManagerTracingStub::DenyGrant(
    grpc::ClientContext& context, Options const& options,
    google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "DenyGrant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DenyGrant(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrivilegedAccessManagerTracingStub::AsyncRevokeGrant(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "RevokeGrant");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRevokeGrant(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrivilegedAccessManagerTracingStub::RevokeGrant(
    grpc::ClientContext& context, Options options,
    google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.privilegedaccessmanager.v1.PrivilegedAccessManager",
      "RevokeGrant");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RevokeGrant(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrivilegedAccessManagerTracingStub::AsyncGetOperation(
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

future<Status> PrivilegedAccessManagerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<PrivilegedAccessManagerStub>
MakePrivilegedAccessManagerTracingStub(
    std::shared_ptr<PrivilegedAccessManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PrivilegedAccessManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1_internal
}  // namespace cloud
}  // namespace google
