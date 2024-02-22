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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/internal/dataset_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/dataset_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceMetadata::DatasetServiceMetadata(
    std::shared_ptr<DatasetServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataset(cq, std::move(context), options, request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceMetadata::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataset(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceMetadata::UpdateDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("dataset.name=",
                           internal::UrlEncode(request.dataset().name())));
  return child_->UpdateDataset(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
DatasetServiceMetadata::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatasets(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataset(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncImportData(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncExportData(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncCreateDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDatasetVersion(cq, std::move(context), options,
                                           request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncDeleteDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDatasetVersion(cq, std::move(context), options,
                                           request);
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceMetadata::GetDatasetVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDatasetVersion(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetVersionsResponse>
DatasetServiceMetadata::ListDatasetVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetVersionsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDatasetVersions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncRestoreDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
        request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncRestoreDatasetVersion(cq, std::move(context), options,
                                            request);
}

StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
DatasetServiceMetadata::ListDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataItems(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
DatasetServiceMetadata::SearchDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->SearchDataItems(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
DatasetServiceMetadata::ListSavedQueries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListSavedQueriesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSavedQueries(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncDeleteSavedQuery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteSavedQuery(cq, std::move(context), options,
                                       request);
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceMetadata::GetAnnotationSpec(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetAnnotationSpec(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
DatasetServiceMetadata::ListAnnotations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAnnotations(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> DatasetServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void DatasetServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DatasetServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
