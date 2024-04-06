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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/v2/internal/product_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/product_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductServiceMetadata::ProductServiceMetadata(
    std::shared_ptr<ProductServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceMetadata::CreateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::CreateProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateProduct(context, options, request);
}

StatusOr<google::cloud::retail::v2::Product> ProductServiceMetadata::GetProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::GetProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProduct(context, options, request);
}

StatusOr<google::cloud::retail::v2::ListProductsResponse>
ProductServiceMetadata::ListProducts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::ListProductsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListProducts(context, options, request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceMetadata::UpdateProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("product.name=",
                           internal::UrlEncode(request.product().name())));
  return child_->UpdateProduct(context, options, request);
}

Status ProductServiceMetadata::DeleteProduct(
    grpc::ClientContext& context, Options const& options,
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteProduct(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncImportProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncImportProducts(cq, std::move(context), std::move(options),
                                     request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncSetInventory(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("inventory.name=",
                           internal::UrlEncode(request.inventory().name())));
  return child_->AsyncSetInventory(cq, std::move(context), std::move(options),
                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncAddFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("product=", internal::UrlEncode(request.product())));
  return child_->AsyncAddFulfillmentPlaces(cq, std::move(context),
                                           std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncRemoveFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("product=", internal::UrlEncode(request.product())));
  return child_->AsyncRemoveFulfillmentPlaces(cq, std::move(context),
                                              std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncAddLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("product=", internal::UrlEncode(request.product())));
  return child_->AsyncAddLocalInventories(cq, std::move(context),
                                          std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncRemoveLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("product=", internal::UrlEncode(request.product())));
  return child_->AsyncRemoveLocalInventories(cq, std::move(context),
                                             std::move(options), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> ProductServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void ProductServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ProductServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
