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

#include "google/cloud/functions/v1/internal/cloud_functions_auth_decorator.h"
#include <google/cloud/functions/v1/functions.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudFunctionsServiceAuth::CloudFunctionsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudFunctionsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::functions::v1::ListFunctionsResponse>
CloudFunctionsServiceAuth::ListFunctions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::ListFunctionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFunctions(context, options, request);
}

StatusOr<google::cloud::functions::v1::CloudFunction>
CloudFunctionsServiceAuth::GetFunction(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GetFunctionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceAuth::AsyncCreateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateFunction(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceAuth::CreateFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceAuth::AsyncUpdateFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateFunction(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceAuth::UpdateFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateFunction(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceAuth::AsyncDeleteFunction(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteFunction(cq, *std::move(context),
                                          std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceAuth::DeleteFunction(
    grpc::ClientContext& context, Options options,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteFunction(context, options, request);
}

StatusOr<google::cloud::functions::v1::CallFunctionResponse>
CloudFunctionsServiceAuth::CallFunction(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::CallFunctionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CallFunction(context, options, request);
}

StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
CloudFunctionsServiceAuth::GenerateUploadUrl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GenerateUploadUrlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateUploadUrl(context, options, request);
}

StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
CloudFunctionsServiceAuth::GenerateDownloadUrl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::functions::v1::GenerateDownloadUrlRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateDownloadUrl(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudFunctionsServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudFunctionsServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
CloudFunctionsServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
CloudFunctionsServiceAuth::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceAuth::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudFunctionsServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> CloudFunctionsServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google
