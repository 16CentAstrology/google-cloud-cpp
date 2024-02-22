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
// source: google/cloud/aiplatform/v1/model_service.proto

#include "google/cloud/aiplatform/v1/internal/model_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/model_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ModelServiceStub::~ModelServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncUploadModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::UploadModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UploadModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::UploadModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUploadModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Model>
DefaultModelServiceStub::GetModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetModelRequest const& request) {
  google::cloud::aiplatform::v1::Model response;
  auto status = grpc_stub_->GetModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListModelsResponse>
DefaultModelServiceStub::ListModels(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListModelsRequest const& request) {
  google::cloud::aiplatform::v1::ListModelsResponse response;
  auto status = grpc_stub_->ListModels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListModelVersionsResponse>
DefaultModelServiceStub::ListModelVersions(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListModelVersionsRequest const& request) {
  google::cloud::aiplatform::v1::ListModelVersionsResponse response;
  auto status = grpc_stub_->ListModelVersions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::Model>
DefaultModelServiceStub::UpdateModel(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::UpdateModelRequest const& request) {
  google::cloud::aiplatform::v1::Model response;
  auto status = grpc_stub_->UpdateModel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncUpdateExplanationDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::aiplatform::v1::UpdateExplanationDatasetRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateExplanationDataset(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncDeleteModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::DeleteModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncDeleteModelVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::DeleteModelVersionRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::DeleteModelVersionRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::DeleteModelVersionRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteModelVersion(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::Model>
DefaultModelServiceStub::MergeVersionAliases(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::MergeVersionAliasesRequest const& request) {
  google::cloud::aiplatform::v1::Model response;
  auto status = grpc_stub_->MergeVersionAliases(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncExportModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::ExportModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::ExportModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::ExportModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncExportModel(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncCopyModel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::aiplatform::v1::CopyModelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::aiplatform::v1::CopyModelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::aiplatform::v1::CopyModelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCopyModel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
DefaultModelServiceStub::ImportModelEvaluation(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ImportModelEvaluationRequest const&
        request) {
  google::cloud::aiplatform::v1::ModelEvaluation response;
  auto status = grpc_stub_->ImportModelEvaluation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse>
DefaultModelServiceStub::BatchImportModelEvaluationSlices(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::
        BatchImportModelEvaluationSlicesRequest const& request) {
  google::cloud::aiplatform::v1::BatchImportModelEvaluationSlicesResponse
      response;
  auto status = grpc_stub_->BatchImportModelEvaluationSlices(&context, request,
                                                             &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse>
DefaultModelServiceStub::BatchImportEvaluatedAnnotations(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsRequest const&
        request) {
  google::cloud::aiplatform::v1::BatchImportEvaluatedAnnotationsResponse
      response;
  auto status =
      grpc_stub_->BatchImportEvaluatedAnnotations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluation>
DefaultModelServiceStub::GetModelEvaluation(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetModelEvaluationRequest const& request) {
  google::cloud::aiplatform::v1::ModelEvaluation response;
  auto status = grpc_stub_->GetModelEvaluation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationsResponse>
DefaultModelServiceStub::ListModelEvaluations(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListModelEvaluationsRequest const& request) {
  google::cloud::aiplatform::v1::ListModelEvaluationsResponse response;
  auto status = grpc_stub_->ListModelEvaluations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ModelEvaluationSlice>
DefaultModelServiceStub::GetModelEvaluationSlice(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::GetModelEvaluationSliceRequest const&
        request) {
  google::cloud::aiplatform::v1::ModelEvaluationSlice response;
  auto status =
      grpc_stub_->GetModelEvaluationSlice(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse>
DefaultModelServiceStub::ListModelEvaluationSlices(
    grpc::ClientContext& context, Options const&,
    google::cloud::aiplatform::v1::ListModelEvaluationSlicesRequest const&
        request) {
  google::cloud::aiplatform::v1::ListModelEvaluationSlicesResponse response;
  auto status =
      grpc_stub_->ListModelEvaluationSlices(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultModelServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultModelServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
