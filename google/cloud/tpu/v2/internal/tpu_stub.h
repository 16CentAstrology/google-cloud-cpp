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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/tpu/v2/cloud_tpu.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuStub {
 public:
  virtual ~TpuStub() = 0;

  virtual StatusOr<google::cloud::tpu::v2::ListNodesResponse> ListNodes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListNodesRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::Node> GetNode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetNodeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::CreateNodeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::CreateNodeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::DeleteNodeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::DeleteNodeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStopNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::StopNodeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> StopNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::StopNodeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStartNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::StartNodeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> StartNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::StartNodeRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpdateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::UpdateNodeRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::UpdateNodeRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::ListQueuedResourcesResponse>
  ListQueuedResources(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListQueuedResourcesRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::QueuedResource> GetQueuedResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetQueuedResourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::CreateQueuedResourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncResetQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ResetQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::ResetQueuedResourceRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
  GenerateServiceIdentity(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GenerateServiceIdentityRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
  ListAcceleratorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::AcceleratorType> GetAcceleratorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
  ListRuntimeVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListRuntimeVersionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::RuntimeVersion> GetRuntimeVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
  GetGuestAttributes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetGuestAttributesRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultTpuStub : public TpuStub {
 public:
  DefaultTpuStub(
      std::unique_ptr<google::cloud::tpu::v2::Tpu::StubInterface> grpc_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::tpu::v2::ListNodesResponse> ListNodes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListNodesRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::Node> GetNode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::CreateNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::CreateNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::DeleteNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::DeleteNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::StopNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StopNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::StopNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::StartNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> StartNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::StartNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::UpdateNodeRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateNode(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::UpdateNodeRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::ListQueuedResourcesResponse>
  ListQueuedResources(grpc::ClientContext& context, Options const& options,
                      google::cloud::tpu::v2::ListQueuedResourcesRequest const&
                          request) override;

  StatusOr<google::cloud::tpu::v2::QueuedResource> GetQueuedResource(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetQueuedResourceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::CreateQueuedResourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::CreateQueuedResourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::DeleteQueuedResourceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetQueuedResource(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::tpu::v2::ResetQueuedResourceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResetQueuedResource(
      grpc::ClientContext& context, Options options,
      google::cloud::tpu::v2::ResetQueuedResourceRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
  GenerateServiceIdentity(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::ListAcceleratorTypesResponse>
  ListAcceleratorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::ListAcceleratorTypesRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::AcceleratorType> GetAcceleratorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v2::ListRuntimeVersionsResponse>
  ListRuntimeVersions(grpc::ClientContext& context, Options const& options,
                      google::cloud::tpu::v2::ListRuntimeVersionsRequest const&
                          request) override;

  StatusOr<google::cloud::tpu::v2::RuntimeVersion> GetRuntimeVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
  GetGuestAttributes(grpc::ClientContext& context, Options const& options,
                     google::cloud::tpu::v2::GetGuestAttributesRequest const&
                         request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::tpu::v2::Tpu::StubInterface> grpc_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_STUB_H
