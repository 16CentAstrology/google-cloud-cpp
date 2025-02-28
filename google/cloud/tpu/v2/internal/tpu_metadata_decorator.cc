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

#include "google/cloud/tpu/v2/internal/tpu_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/tpu/v2/cloud_tpu.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TpuMetadata::TpuMetadata(std::shared_ptr<TpuStub> child,
                         std::multimap<std::string, std::string> fixed_metadata,
                         std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::tpu::v2::ListNodesResponse> TpuMetadata::ListNodes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::ListNodesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNodes(context, options, request);
}

StatusOr<google::cloud::tpu::v2::Node> TpuMetadata::GetNode(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GetNodeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncCreateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateNode(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::CreateNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::CreateNodeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncDeleteNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteNode(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::DeleteNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::DeleteNodeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncStopNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStopNode(cq, std::move(context), std::move(options),
                               request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::StopNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::StopNodeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StopNode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncStartNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncStartNode(cq, std::move(context), std::move(options),
                                request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::StartNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::StartNodeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->StartNode(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncUpdateNode(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("node.name=", internal::UrlEncode(request.node().name())));
  return child_->AsyncUpdateNode(cq, std::move(context), std::move(options),
                                 request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::UpdateNode(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::UpdateNodeRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("node.name=", internal::UrlEncode(request.node().name())));
  return child_->UpdateNode(context, options, request);
}

StatusOr<google::cloud::tpu::v2::ListQueuedResourcesResponse>
TpuMetadata::ListQueuedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::ListQueuedResourcesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListQueuedResources(context, options, request);
}

StatusOr<google::cloud::tpu::v2::QueuedResource> TpuMetadata::GetQueuedResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GetQueuedResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetQueuedResource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TpuMetadata::AsyncCreateQueuedResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateQueuedResource(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::CreateQueuedResource(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateQueuedResource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TpuMetadata::AsyncDeleteQueuedResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteQueuedResource(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::DeleteQueuedResource(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteQueuedResource(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TpuMetadata::AsyncResetQueuedResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncResetQueuedResource(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::ResetQueuedResource(
    grpc::ClientContext& context, Options options,
    google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ResetQueuedResource(context, options, request);
}

StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
TpuMetadata::GenerateServiceIdentity(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->GenerateServiceIdentity(context, options, request);
}

StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
TpuMetadata::ListAcceleratorTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAcceleratorTypes(context, options, request);
}

StatusOr<google::cloud::tpu::v2::AcceleratorType>
TpuMetadata::GetAcceleratorType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAcceleratorType(context, options, request);
}

StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
TpuMetadata::ListRuntimeVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListRuntimeVersions(context, options, request);
}

StatusOr<google::cloud::tpu::v2::RuntimeVersion> TpuMetadata::GetRuntimeVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetRuntimeVersion(context, options, request);
}

StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
TpuMetadata::GetGuestAttributes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::tpu::v2::GetGuestAttributesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetGuestAttributes(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
TpuMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location> TpuMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
TpuMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation> TpuMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status TpuMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status TpuMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>> TpuMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> TpuMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void TpuMetadata::SetMetadata(grpc::ClientContext& context,
                              Options const& options,
                              std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TpuMetadata::SetMetadata(grpc::ClientContext& context,
                              Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google
