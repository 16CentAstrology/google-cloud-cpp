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
// source: google/cloud/dialogflow/v2/session_entity_type.proto

#include "google/cloud/dialogflow_es/internal/session_entity_types_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/session_entity_type.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionEntityTypesStub::~SessionEntityTypesStub() = default;

StatusOr<google::cloud::dialogflow::v2::ListSessionEntityTypesResponse>
DefaultSessionEntityTypesStub::ListSessionEntityTypes(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::ListSessionEntityTypesRequest const&
        request) {
  google::cloud::dialogflow::v2::ListSessionEntityTypesResponse response;
  auto status =
      grpc_stub_->ListSessionEntityTypes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
DefaultSessionEntityTypesStub::GetSessionEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::GetSessionEntityTypeRequest const& request) {
  google::cloud::dialogflow::v2::SessionEntityType response;
  auto status = grpc_stub_->GetSessionEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
DefaultSessionEntityTypesStub::CreateSessionEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::CreateSessionEntityTypeRequest const&
        request) {
  google::cloud::dialogflow::v2::SessionEntityType response;
  auto status =
      grpc_stub_->CreateSessionEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::SessionEntityType>
DefaultSessionEntityTypesStub::UpdateSessionEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::UpdateSessionEntityTypeRequest const&
        request) {
  google::cloud::dialogflow::v2::SessionEntityType response;
  auto status =
      grpc_stub_->UpdateSessionEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSessionEntityTypesStub::DeleteSessionEntityType(
    grpc::ClientContext& context, Options const&,
    google::cloud::dialogflow::v2::DeleteSessionEntityTypeRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteSessionEntityType(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultSessionEntityTypesStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultSessionEntityTypesStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultSessionEntityTypesStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultSessionEntityTypesStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSessionEntityTypesStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
