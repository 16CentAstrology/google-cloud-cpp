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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchMetadata::ProductSearchMetadata(
    std::shared_ptr<ProductSearchStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchMetadata::CreateProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProductSet(context, options, request);
}

StatusOr<google::cloud::vision::v1::ListProductSetsResponse>
ProductSearchMetadata::ListProductSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductSetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProductSets(context, options, request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchMetadata::GetProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProductSet(context, options, request);
}

StatusOr<google::cloud::vision::v1::ProductSet>
ProductSearchMetadata::UpdateProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("product_set.name=",
                           internal::UrlEncode(request.product_set().name())));
  return child_->UpdateProductSet(context, options, request);
}

Status ProductSearchMetadata::DeleteProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteProductSet(context, options, request);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchMetadata::CreateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProduct(context, options, request);
}

StatusOr<google::cloud::vision::v1::ListProductsResponse>
ProductSearchMetadata::ListProducts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProducts(context, options, request);
}

StatusOr<google::cloud::vision::v1::Product> ProductSearchMetadata::GetProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProduct(context, options, request);
}

StatusOr<google::cloud::vision::v1::Product>
ProductSearchMetadata::UpdateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("product.name=",
                           internal::UrlEncode(request.product().name())));
  return child_->UpdateProduct(context, options, request);
}

Status ProductSearchMetadata::DeleteProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteProduct(context, options, request);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchMetadata::CreateReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateReferenceImage(context, options, request);
}

Status ProductSearchMetadata::DeleteReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteReferenceImage(context, options, request);
}

StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
ProductSearchMetadata::ListReferenceImages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListReferenceImagesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReferenceImages(context, options, request);
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
ProductSearchMetadata::GetReferenceImage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetReferenceImage(context, options, request);
}

Status ProductSearchMetadata::AddProductToProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AddProductToProductSet(context, options, request);
}

Status ProductSearchMetadata::RemoveProductFromProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->RemoveProductFromProductSet(context, options, request);
}

StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
ProductSearchMetadata::ListProductsInProductSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::vision::v1::ListProductsInProductSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListProductsInProductSet(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchMetadata::AsyncImportProductSets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncImportProductSets(cq, std::move(context), options,
                                        request);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchMetadata::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncPurgeProducts(cq, std::move(context), options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProductSearchMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), options, request);
}

future<Status> ProductSearchMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context), options, request);
}

void ProductSearchMetadata::SetMetadata(grpc::ClientContext& context,
                                        Options const& options,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ProductSearchMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
