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
// source: google/cloud/dialogflow/v2/fulfillment.proto

#include "google/cloud/dialogflow_es/fulfillments_connection.h"
#include "google/cloud/dialogflow_es/fulfillments_options.h"
#include "google/cloud/dialogflow_es/internal/fulfillments_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/fulfillments_option_defaults.h"
#include "google/cloud/dialogflow_es/internal/fulfillments_stub_factory.h"
#include "google/cloud/dialogflow_es/internal/fulfillments_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FulfillmentsConnection::~FulfillmentsConnection() = default;

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsConnection::GetFulfillment(
    google::cloud::dialogflow::v2::GetFulfillmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsConnection::UpdateFulfillment(
    google::cloud::dialogflow::v2::UpdateFulfillmentRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
FulfillmentsConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location> FulfillmentsConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
FulfillmentsConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation> FulfillmentsConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status FulfillmentsConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<FulfillmentsConnection> MakeFulfillmentsConnection(
    std::string const& location, Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 FulfillmentsPolicyOptionList>(options,
                                                               __func__);
  options = dialogflow_es_internal::FulfillmentsDefaultOptions(
      location, std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = dialogflow_es_internal::CreateDefaultFulfillmentsStub(
      std::move(auth), options);
  return dialogflow_es_internal::MakeFulfillmentsTracingConnection(
      std::make_shared<dialogflow_es_internal::FulfillmentsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

std::shared_ptr<FulfillmentsConnection> MakeFulfillmentsConnection(
    Options options) {
  return MakeFulfillmentsConnection(std::string{}, std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
