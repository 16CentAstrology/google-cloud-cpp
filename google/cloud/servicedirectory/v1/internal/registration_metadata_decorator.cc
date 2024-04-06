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

#include "google/cloud/servicedirectory/v1/internal/registration_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/servicedirectory/v1/registration_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistrationServiceMetadata::RegistrationServiceMetadata(
    std::shared_ptr<RegistrationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::CreateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
RegistrationServiceMetadata::ListNamespaces(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListNamespacesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListNamespaces(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::GetNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetNamespaceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceMetadata::UpdateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("namespace.name=",
                           internal::UrlEncode(request.namespace_().name())));
  return child_->UpdateNamespace(context, options, request);
}

Status RegistrationServiceMetadata::DeleteNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteNamespace(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::CreateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
RegistrationServiceMetadata::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListServicesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListServices(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceMetadata::UpdateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service.name=",
                           internal::UrlEncode(request.service().name())));
  return child_->UpdateService(context, options, request);
}

Status RegistrationServiceMetadata::DeleteService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteService(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::CreateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateEndpoint(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
RegistrationServiceMetadata::ListEndpoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListEndpointsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListEndpoints(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::GetEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetEndpoint(context, options, request);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceMetadata::UpdateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("endpoint.name=",
                           internal::UrlEncode(request.endpoint().name())));
  return child_->UpdateEndpoint(context, options, request);
}

Status RegistrationServiceMetadata::DeleteEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteEndpoint(context, options, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

void RegistrationServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void RegistrationServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                              Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google
