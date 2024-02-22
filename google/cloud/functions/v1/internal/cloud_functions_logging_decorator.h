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
// source: google/cloud/functions/v1/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_LOGGING_DECORATOR_H

#include "google/cloud/functions/v1/internal/cloud_functions_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudFunctionsServiceLogging : public CloudFunctionsServiceStub {
 public:
  ~CloudFunctionsServiceLogging() override = default;
  CloudFunctionsServiceLogging(std::shared_ptr<CloudFunctionsServiceStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components);

  StatusOr<google::cloud::functions::v1::ListFunctionsResponse> ListFunctions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::ListFunctionsRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CloudFunction> GetFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GetFunctionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::functions::v1::CreateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::functions::v1::UpdateFunctionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteFunction(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::functions::v1::DeleteFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::CallFunctionResponse> CallFunction(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::CallFunctionRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateUploadUrlRequest const& request)
      override;

  StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      grpc::ClientContext& context, Options const& options,
      google::cloud::functions::v1::GenerateDownloadUrlRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudFunctionsServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // CloudFunctionsServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V1_INTERNAL_CLOUD_FUNCTIONS_LOGGING_DECORATOR_H
