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
// source: google/cloud/aiplatform/v1/pipeline_service.proto

#include "google/cloud/aiplatform/v1/internal/pipeline_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/pipeline_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceMetadata::PipelineServiceMetadata(
    std::shared_ptr<PipelineServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceMetadata::CreateTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateTrainingPipelineRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTrainingPipeline(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::TrainingPipeline>
PipelineServiceMetadata::GetTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetTrainingPipelineRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTrainingPipeline(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListTrainingPipelinesResponse>
PipelineServiceMetadata::ListTrainingPipelines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListTrainingPipelinesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTrainingPipelines(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceMetadata::AsyncDeleteTrainingPipeline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteTrainingPipelineRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteTrainingPipeline(cq, std::move(context),
                                             std::move(options), request);
}

Status PipelineServiceMetadata::CancelTrainingPipeline(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelTrainingPipelineRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelTrainingPipeline(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceMetadata::CreatePipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreatePipelineJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreatePipelineJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::PipelineJob>
PipelineServiceMetadata::GetPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetPipelineJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetPipelineJob(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListPipelineJobsResponse>
PipelineServiceMetadata::ListPipelineJobs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListPipelineJobsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListPipelineJobs(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceMetadata::AsyncDeletePipelineJob(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeletePipelineJobRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeletePipelineJob(cq, std::move(context),
                                        std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceMetadata::AsyncBatchDeletePipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchDeletePipelineJobsRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchDeletePipelineJobs(cq, std::move(context),
                                              std::move(options), request);
}

Status PipelineServiceMetadata::CancelPipelineJob(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CancelPipelineJobRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelPipelineJob(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceMetadata::AsyncBatchCancelPipelineJobs(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchCancelPipelineJobsRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncBatchCancelPipelineJobs(cq, std::move(context),
                                              std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
PipelineServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> PipelineServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void PipelineServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void PipelineServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
