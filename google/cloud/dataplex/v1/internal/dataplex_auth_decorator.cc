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
// source: google/cloud/dataplex/v1/service.proto

#include "google/cloud/dataplex/v1/internal/dataplex_auth_decorator.h"
#include <google/cloud/dataplex/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataplexServiceAuth::DataplexServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DataplexServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncCreateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateLakeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateLake(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncUpdateLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateLakeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateLake(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncDeleteLake(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteLakeRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteLake(cq, *std::move(context), options,
                                      request);
      });
}

StatusOr<google::cloud::dataplex::v1::ListLakesResponse>
DataplexServiceAuth::ListLakes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListLakesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLakes(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Lake> DataplexServiceAuth::GetLake(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetLakeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLake(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceAuth::ListLakeActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListLakeActionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLakeActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncCreateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateZoneRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateZone(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncUpdateZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateZoneRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateZone(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncDeleteZone(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteZoneRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteZone(cq, *std::move(context), options,
                                      request);
      });
}

StatusOr<google::cloud::dataplex::v1::ListZonesResponse>
DataplexServiceAuth::ListZones(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListZonesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListZones(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Zone> DataplexServiceAuth::GetZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetZoneRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetZone(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceAuth::ListZoneActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListZoneActionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListZoneActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateAssetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAsset(cq, *std::move(context), options,
                                       request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncUpdateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateAssetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateAsset(cq, *std::move(context), options,
                                       request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteAssetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAsset(cq, *std::move(context), options,
                                       request);
      });
}

StatusOr<google::cloud::dataplex::v1::ListAssetsResponse>
DataplexServiceAuth::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAssetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Asset> DataplexServiceAuth::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAsset(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListActionsResponse>
DataplexServiceAuth::ListAssetActions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListAssetActionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssetActions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncCreateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateTaskRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateTask(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncUpdateTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateTaskRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateTask(cq, *std::move(context), options,
                                      request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncDeleteTask(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteTaskRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteTask(cq, *std::move(context), options,
                                      request);
      });
}

StatusOr<google::cloud::dataplex::v1::ListTasksResponse>
DataplexServiceAuth::ListTasks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListTasksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTasks(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Task> DataplexServiceAuth::GetTask(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTask(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListJobsResponse>
DataplexServiceAuth::ListJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobs(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::RunTaskResponse>
DataplexServiceAuth::RunTask(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::RunTaskRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RunTask(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Job> DataplexServiceAuth::GetJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJob(context, options, request);
}

Status DataplexServiceAuth::CancelJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::CancelJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::CreateEnvironmentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateEnvironment(cq, *std::move(context), options,
                                             request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateEnvironment(cq, *std::move(context), options,
                                             request);
      });
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteEnvironment(cq, *std::move(context), options,
                                             request);
      });
}

StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
DataplexServiceAuth::ListEnvironments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListEnvironmentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEnvironments(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::Environment>
DataplexServiceAuth::GetEnvironment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetEnvironmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEnvironment(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListSessionsResponse>
DataplexServiceAuth::ListSessions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListSessionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSessions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataplexServiceAuth::AsyncGetOperation(
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

future<Status> DataplexServiceAuth::AsyncCancelOperation(
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
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
