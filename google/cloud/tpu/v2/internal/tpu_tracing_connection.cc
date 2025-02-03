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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#include "google/cloud/tpu/v2/internal/tpu_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TpuTracingConnection::TpuTracingConnection(
    std::shared_ptr<tpu_v2::TpuConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::tpu::v2::Node> TpuTracingConnection::ListNodes(
    google::cloud::tpu::v2::ListNodesRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListNodes");
  internal::OTelScope scope(span);
  auto sr = child_->ListNodes(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::tpu::v2::Node>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::tpu::v2::Node> TpuTracingConnection::GetNode(
    google::cloud::tpu::v2::GetNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetNode");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNode(request));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::CreateNode(
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNode(request));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::CreateNode(
    NoAwaitTag, google::cloud::tpu::v2::CreateNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateNode");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateNode(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::CreateNode(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateNode(operation));
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuTracingConnection::DeleteNode(
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNode(request));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::DeleteNode(
    NoAwaitTag, google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteNode");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteNode(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuTracingConnection::DeleteNode(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteNode(operation));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::StopNode(
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StopNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopNode(request));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::StopNode(
    NoAwaitTag, google::cloud::tpu::v2::StopNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StopNode");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->StopNode(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::StopNode(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StopNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StopNode(operation));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::StartNode(
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StartNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartNode(request));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::StartNode(
    NoAwaitTag, google::cloud::tpu::v2::StartNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StartNode");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->StartNode(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::StartNode(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::StartNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->StartNode(operation));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::UpdateNode(
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::UpdateNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNode(request));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::UpdateNode(
    NoAwaitTag, google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::UpdateNode");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->UpdateNode(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::Node>> TpuTracingConnection::UpdateNode(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::UpdateNode");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateNode(operation));
}

StreamRange<google::cloud::tpu::v2::QueuedResource>
TpuTracingConnection::ListQueuedResources(
    google::cloud::tpu::v2::ListQueuedResourcesRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListQueuedResources");
  internal::OTelScope scope(span);
  auto sr = child_->ListQueuedResources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::tpu::v2::QueuedResource>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::tpu::v2::QueuedResource>
TpuTracingConnection::GetQueuedResource(
    google::cloud::tpu::v2::GetQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetQueuedResource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetQueuedResource(request));
}

future<StatusOr<google::cloud::tpu::v2::QueuedResource>>
TpuTracingConnection::CreateQueuedResource(
    google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateQueuedResource(request));
}

StatusOr<google::longrunning::Operation>
TpuTracingConnection::CreateQueuedResource(
    NoAwaitTag,
    google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateQueuedResource");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateQueuedResource(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::QueuedResource>>
TpuTracingConnection::CreateQueuedResource(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CreateQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateQueuedResource(operation));
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuTracingConnection::DeleteQueuedResource(
    google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteQueuedResource(request));
}

StatusOr<google::longrunning::Operation>
TpuTracingConnection::DeleteQueuedResource(
    NoAwaitTag,
    google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteQueuedResource");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteQueuedResource(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::OperationMetadata>>
TpuTracingConnection::DeleteQueuedResource(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteQueuedResource(operation));
}

future<StatusOr<google::cloud::tpu::v2::QueuedResource>>
TpuTracingConnection::ResetQueuedResource(
    google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ResetQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetQueuedResource(request));
}

StatusOr<google::longrunning::Operation>
TpuTracingConnection::ResetQueuedResource(
    NoAwaitTag,
    google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ResetQueuedResource");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ResetQueuedResource(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::tpu::v2::QueuedResource>>
TpuTracingConnection::ResetQueuedResource(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ResetQueuedResource");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ResetQueuedResource(operation));
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
TpuTracingConnection::GenerateServiceIdentity(
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request) {
  auto span =
      internal::MakeSpan("tpu_v2::TpuConnection::GenerateServiceIdentity");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateServiceIdentity(request));
}

StreamRange<google::cloud::tpu::v2::AcceleratorType>
TpuTracingConnection::ListAcceleratorTypes(
    google::cloud::tpu::v2::ListAcceleratorTypesRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListAcceleratorTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListAcceleratorTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::tpu::v2::AcceleratorType>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::tpu::v2::AcceleratorType>
TpuTracingConnection::GetAcceleratorType(
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetAcceleratorType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAcceleratorType(request));
}

StreamRange<google::cloud::tpu::v2::RuntimeVersion>
TpuTracingConnection::ListRuntimeVersions(
    google::cloud::tpu::v2::ListRuntimeVersionsRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListRuntimeVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListRuntimeVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::tpu::v2::RuntimeVersion>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion>
TpuTracingConnection::GetRuntimeVersion(
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetRuntimeVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRuntimeVersion(request));
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
TpuTracingConnection::GetGuestAttributes(
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetGuestAttributes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGuestAttributes(request));
}

StreamRange<google::cloud::location::Location>
TpuTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location> TpuTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
TpuTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation> TpuTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status TpuTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status TpuTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan("tpu_v2::TpuConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<tpu_v2::TpuConnection> MakeTpuTracingConnection(
    std::shared_ptr<tpu_v2::TpuConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TpuTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google
