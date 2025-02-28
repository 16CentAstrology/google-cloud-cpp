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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#include "google/cloud/servicedirectory/v1/internal/registration_auth_decorator.h"
#include <google/cloud/servicedirectory/v1/registration_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistrationServiceAuth::RegistrationServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RegistrationServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceAuth::CreateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
RegistrationServiceAuth::ListNamespaces(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListNamespacesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListNamespaces(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceAuth::GetNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetNamespaceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceAuth::UpdateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateNamespace(context, options, request);
}

Status RegistrationServiceAuth::DeleteNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceAuth::CreateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
RegistrationServiceAuth::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListServicesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListServices(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceAuth::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceAuth::UpdateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateService(context, options, request);
}

Status RegistrationServiceAuth::DeleteService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteServiceRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceAuth::CreateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateEndpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEndpoint(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
RegistrationServiceAuth::ListEndpoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListEndpointsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEndpoints(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceAuth::GetEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetEndpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEndpoint(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceAuth::UpdateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateEndpoint(context, options, request);
}

Status RegistrationServiceAuth::DeleteEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEndpoint(context, options, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
RegistrationServiceAuth::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
RegistrationServiceAuth::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetLocation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google
