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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_LOGGING_DECORATOR_H

#include "google/cloud/tpu/v1/internal/tpu_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace tpu_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuLogging : public TpuStub {
 public:
  ~TpuLogging() override = default;
  TpuLogging(std::shared_ptr<TpuStub> child, TracingOptions tracing_options,
             std::set<std::string> const& components);

  StatusOr<google::cloud::tpu::v1::ListNodesResponse> ListNodes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListNodesRequest const& request) override;

  StatusOr<google::cloud::tpu::v1::Node> GetNode(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::tpu::v1::CreateNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::tpu::v1::DeleteNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReimageNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::tpu::v1::ReimageNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::tpu::v1::StopNodeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartNode(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::tpu::v1::StartNodeRequest const& request) override;

  StatusOr<google::cloud::tpu::v1::ListTensorFlowVersionsResponse>
  ListTensorFlowVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListTensorFlowVersionsRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::TensorFlowVersion> GetTensorFlowVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetTensorFlowVersionRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::ListAcceleratorTypesResponse>
  ListAcceleratorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::ListAcceleratorTypesRequest const& request)
      override;

  StatusOr<google::cloud::tpu::v1::AcceleratorType> GetAcceleratorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::tpu::v1::GetAcceleratorTypeRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<TpuStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // TpuLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_INTERNAL_TPU_LOGGING_DECORATOR_H
