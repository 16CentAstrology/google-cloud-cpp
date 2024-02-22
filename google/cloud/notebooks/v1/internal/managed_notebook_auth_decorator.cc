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
// source: google/cloud/notebooks/v1/managed_service.proto

#include "google/cloud/notebooks/v1/internal/managed_notebook_auth_decorator.h"
#include <google/cloud/notebooks/v1/managed_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedNotebookServiceAuth::ManagedNotebookServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ManagedNotebookServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::notebooks::v1::ListRuntimesResponse>
ManagedNotebookServiceAuth::ListRuntimes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::ListRuntimesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRuntimes(context, options, request);
}

StatusOr<google::cloud::notebooks::v1::Runtime>
ManagedNotebookServiceAuth::GetRuntime(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::GetRuntimeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetRuntime(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncCreateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::CreateRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateRuntime(cq, *std::move(context), options,
                                         request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncUpdateRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::UpdateRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateRuntime(cq, *std::move(context), options,
                                         request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncDeleteRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::DeleteRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteRuntime(cq, *std::move(context), options,
                                         request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncStartRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::StartRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartRuntime(cq, *std::move(context), options,
                                        request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncStopRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::StopRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStopRuntime(cq, *std::move(context), options,
                                       request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncSwitchRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::SwitchRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSwitchRuntime(cq, *std::move(context), options,
                                         request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncResetRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::ResetRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncResetRuntime(cq, *std::move(context), options,
                                        request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncUpgradeRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::UpgradeRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpgradeRuntime(cq, *std::move(context), options,
                                          request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncReportRuntimeEvent(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncReportRuntimeEvent(cq, *std::move(context), options,
                                              request);
      });
}

StatusOr<google::cloud::notebooks::v1::RefreshRuntimeTokenInternalResponse>
ManagedNotebookServiceAuth::RefreshRuntimeTokenInternal(
    grpc::ClientContext& context, Options const& options,
    google::cloud::notebooks::v1::RefreshRuntimeTokenInternalRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RefreshRuntimeTokenInternal(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncDiagnoseRuntime(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::notebooks::v1::DiagnoseRuntimeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDiagnoseRuntime(cq, *std::move(context), options,
                                           request);
      });
}

future<StatusOr<google::longrunning::Operation>>
ManagedNotebookServiceAuth::AsyncGetOperation(
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

future<Status> ManagedNotebookServiceAuth::AsyncCancelOperation(
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
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google
