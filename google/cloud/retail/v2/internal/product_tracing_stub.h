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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_STUB_H

#include "google/cloud/retail/v2/internal/product_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ProductServiceTracingStub : public ProductServiceStub {
 public:
  ~ProductServiceTracingStub() override = default;

  explicit ProductServiceTracingStub(std::shared_ptr<ProductServiceStub> child);

  StatusOr<google::cloud::retail::v2::Product> CreateProduct(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::CreateProductRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Product> GetProduct(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::GetProductRequest const& request) override;

  StatusOr<google::cloud::retail::v2::ListProductsResponse> ListProducts(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::ListProductsRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Product> UpdateProduct(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::UpdateProductRequest const& request) override;

  Status DeleteProduct(
      grpc::ClientContext& context, Options const& options,
      google::cloud::retail::v2::DeleteProductRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncPurgeProducts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::PurgeProductsRequest const& request) override;

  StatusOr<google::longrunning::Operation> PurgeProducts(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::PurgeProductsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportProducts(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::ImportProductsRequest const& request) override;

  StatusOr<google::longrunning::Operation> ImportProducts(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::ImportProductsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSetInventory(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::SetInventoryRequest const& request) override;

  StatusOr<google::longrunning::Operation> SetInventory(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::SetInventoryRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddFulfillmentPlaces(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AddFulfillmentPlaces(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemoveFulfillmentPlaces(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RemoveFulfillmentPlaces(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAddLocalInventories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::AddLocalInventoriesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> AddLocalInventories(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::AddLocalInventoriesRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRemoveLocalInventories(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RemoveLocalInventories(
      grpc::ClientContext& context, Options options,
      google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ProductServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ProductServiceStub> MakeProductServiceTracingStub(
    std::shared_ptr<ProductServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PRODUCT_TRACING_STUB_H
