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

#include "google/cloud/servicedirectory/v1/internal/registration_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/servicedirectory/v1/registration_service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegistrationServiceLogging::RegistrationServiceLogging(
    std::shared_ptr<RegistrationServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceLogging::CreateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
                 request) {
        return child_->CreateNamespace(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::ListNamespacesResponse>
RegistrationServiceLogging::ListNamespaces(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListNamespacesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::ListNamespacesRequest const&
                 request) {
        return child_->ListNamespaces(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceLogging::GetNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetNamespaceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::GetNamespaceRequest const&
                 request) {
        return child_->GetNamespace(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Namespace>
RegistrationServiceLogging::UpdateNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
                 request) {
        return child_->UpdateNamespace(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status RegistrationServiceLogging::DeleteNamespace(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
                 request) {
        return child_->DeleteNamespace(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceLogging::CreateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::CreateServiceRequest const&
                 request) {
        return child_->CreateService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::ListServicesResponse>
RegistrationServiceLogging::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListServicesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::ListServicesRequest const&
                 request) {
        return child_->ListServices(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceLogging::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::GetServiceRequest const&
                 request) {
        return child_->GetService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Service>
RegistrationServiceLogging::UpdateService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::UpdateServiceRequest const&
                 request) {
        return child_->UpdateService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status RegistrationServiceLogging::DeleteService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteServiceRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::DeleteServiceRequest const&
                 request) {
        return child_->DeleteService(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceLogging::CreateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::CreateEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::CreateEndpointRequest const&
                 request) {
        return child_->CreateEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::ListEndpointsResponse>
RegistrationServiceLogging::ListEndpoints(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::ListEndpointsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::ListEndpointsRequest const&
                 request) {
        return child_->ListEndpoints(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceLogging::GetEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::GetEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::GetEndpointRequest const&
                 request) {
        return child_->GetEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::servicedirectory::v1::Endpoint>
RegistrationServiceLogging::UpdateEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::UpdateEndpointRequest const&
                 request) {
        return child_->UpdateEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status RegistrationServiceLogging::DeleteEndpoint(
    grpc::ClientContext& context, Options const& options,
    google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::servicedirectory::v1::DeleteEndpointRequest const&
                 request) {
        return child_->DeleteEndpoint(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> RegistrationServiceLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
RegistrationServiceLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
RegistrationServiceLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location>
RegistrationServiceLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google
