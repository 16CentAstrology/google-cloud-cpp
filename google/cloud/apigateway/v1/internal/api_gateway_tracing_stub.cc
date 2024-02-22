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
// source: google/cloud/apigateway/v1/apigateway_service.proto

#include "google/cloud/apigateway/v1/internal/api_gateway_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace apigateway_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ApiGatewayServiceTracingStub::ApiGatewayServiceTracingStub(
    std::shared_ptr<ApiGatewayServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::apigateway::v1::ListGatewaysResponse>
ApiGatewayServiceTracingStub::ListGateways(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::ListGatewaysRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListGateways");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGateways(context, options, request));
}

StatusOr<google::cloud::apigateway::v1::Gateway>
ApiGatewayServiceTracingStub::GetGateway(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::GetGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetGateway");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGateway(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "CreateGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "UpdateGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteGatewayRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "DeleteGateway");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteGateway(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::apigateway::v1::ListApisResponse>
ApiGatewayServiceTracingStub::ListApis(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::ListApisRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListApis");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApis(context, options, request));
}

StatusOr<google::cloud::apigateway::v1::Api>
ApiGatewayServiceTracingStub::GetApi(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::GetApiRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetApi");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApi(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateApiRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "CreateApi");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateApi(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateApiRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "UpdateApi");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateApi(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteApi(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteApiRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "DeleteApi");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteApi(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::apigateway::v1::ListApiConfigsResponse>
ApiGatewayServiceTracingStub::ListApiConfigs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::ListApiConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "ListApiConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListApiConfigs(context, options, request));
}

StatusOr<google::cloud::apigateway::v1::ApiConfig>
ApiGatewayServiceTracingStub::GetApiConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::apigateway::v1::GetApiConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "GetApiConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetApiConfig(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncCreateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::CreateApiConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "CreateApiConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateApiConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncUpdateApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::UpdateApiConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "UpdateApiConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateApiConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncDeleteApiConfig(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::apigateway::v1::DeleteApiConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.apigateway.v1.ApiGatewayService", "DeleteApiConfig");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteApiConfig(cq, context, options, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
ApiGatewayServiceTracingStub::AsyncGetOperation(
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

future<Status> ApiGatewayServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<ApiGatewayServiceStub> MakeApiGatewayServiceTracingStub(
    std::shared_ptr<ApiGatewayServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ApiGatewayServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigateway_v1_internal
}  // namespace cloud
}  // namespace google
