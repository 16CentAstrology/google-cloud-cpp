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
// source: google/cloud/networksecurity/v1/network_security.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_METADATA_DECORATOR_H

#include "google/cloud/networksecurity/v1/internal/network_security_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace networksecurity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkSecurityMetadata : public NetworkSecurityStub {
 public:
  ~NetworkSecurityMetadata() override = default;
  NetworkSecurityMetadata(
      std::shared_ptr<NetworkSecurityStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<
      google::cloud::networksecurity::v1::ListAuthorizationPoliciesResponse>
  ListAuthorizationPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::
          ListAuthorizationPoliciesRequest const& request) override;

  StatusOr<google::cloud::networksecurity::v1::AuthorizationPolicy>
  GetAuthorizationPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateAuthorizationPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateAuthorizationPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAuthorizationPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteAuthorizationPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request) override;

  StatusOr<google::cloud::networksecurity::v1::ListServerTlsPoliciesResponse>
  ListServerTlsPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ServerTlsPolicy>
  GetServerTlsPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateServerTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateServerTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteServerTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteServerTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ListClientTlsPoliciesResponse>
  ListClientTlsPolicies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest const&
          request) override;

  StatusOr<google::cloud::networksecurity::v1::ClientTlsPolicy>
  GetClientTlsPolicy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateClientTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateClientTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteClientTlsPolicy(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteClientTlsPolicy(
      grpc::ClientContext& context, Options options,
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<NetworkSecurityStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_INTERNAL_NETWORK_SECURITY_METADATA_DECORATOR_H
