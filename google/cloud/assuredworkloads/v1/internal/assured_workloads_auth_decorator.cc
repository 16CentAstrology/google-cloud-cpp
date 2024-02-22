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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/v1/internal/assured_workloads_auth_decorator.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace assuredworkloads_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceAuth::AssuredWorkloadsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<AssuredWorkloadsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceAuth::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateWorkload(cq, *std::move(context), options,
                                          request);
      });
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceAuth::UpdateWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::RestrictAllowedResourcesResponse>
AssuredWorkloadsServiceAuth::RestrictAllowedResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::RestrictAllowedResourcesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestrictAllowedResources(context, options, request);
}

Status AssuredWorkloadsServiceAuth::DeleteWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceAuth::GetWorkload(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetWorkload(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
AssuredWorkloadsServiceAuth::ListWorkloads(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListWorkloads(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::ListViolationsResponse>
AssuredWorkloadsServiceAuth::ListViolations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::ListViolationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListViolations(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::Violation>
AssuredWorkloadsServiceAuth::GetViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::GetViolationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetViolation(context, options, request);
}

StatusOr<google::cloud::assuredworkloads::v1::AcknowledgeViolationResponse>
AssuredWorkloadsServiceAuth::AcknowledgeViolation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::assuredworkloads::v1::AcknowledgeViolationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AcknowledgeViolation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> AssuredWorkloadsServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_v1_internal
}  // namespace cloud
}  // namespace google
