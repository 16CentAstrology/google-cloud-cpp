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
// source: google/cloud/discoveryengine/v1/grounded_generation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_GROUNDED_GENERATION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_GROUNDED_GENERATION_LOGGING_DECORATOR_H

#include "google/cloud/discoveryengine/v1/internal/grounded_generation_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GroundedGenerationServiceLogging : public GroundedGenerationServiceStub {
 public:
  ~GroundedGenerationServiceLogging() override = default;
  GroundedGenerationServiceLogging(
      std::shared_ptr<GroundedGenerationServiceStub> child,
      TracingOptions tracing_options, std::set<std::string> const& components);

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::discoveryengine::v1::GenerateGroundedContentRequest,
      google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>>
  AsyncStreamGenerateGroundedContent(
      google::cloud::CompletionQueue const& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options) override;

  StatusOr<google::cloud::discoveryengine::v1::GenerateGroundedContentResponse>
  GenerateGroundedContent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GenerateGroundedContentRequest const&
          request) override;

  StatusOr<google::cloud::discoveryengine::v1::CheckGroundingResponse>
  CheckGrounding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::CheckGroundingRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<GroundedGenerationServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // GroundedGenerationServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_GROUNDED_GENERATION_LOGGING_DECORATOR_H
