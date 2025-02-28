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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/networksecurity/v1/network_security.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networksecurity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkSecurityConnectionIdempotencyPolicy {
 public:
  virtual ~NetworkSecurityConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<NetworkSecurityConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListAuthorizationPolicies(
      google::cloud::networksecurity::v1::ListAuthorizationPoliciesRequest
          request);

  virtual google::cloud::Idempotency GetAuthorizationPolicy(
      google::cloud::networksecurity::v1::GetAuthorizationPolicyRequest const&
          request);

  virtual google::cloud::Idempotency CreateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          CreateAuthorizationPolicyRequest const& request);

  virtual google::cloud::Idempotency UpdateAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          UpdateAuthorizationPolicyRequest const& request);

  virtual google::cloud::Idempotency DeleteAuthorizationPolicy(
      google::cloud::networksecurity::v1::
          DeleteAuthorizationPolicyRequest const& request);

  virtual google::cloud::Idempotency ListServerTlsPolicies(
      google::cloud::networksecurity::v1::ListServerTlsPoliciesRequest request);

  virtual google::cloud::Idempotency GetServerTlsPolicy(
      google::cloud::networksecurity::v1::GetServerTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency CreateServerTlsPolicy(
      google::cloud::networksecurity::v1::CreateServerTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateServerTlsPolicy(
      google::cloud::networksecurity::v1::UpdateServerTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency DeleteServerTlsPolicy(
      google::cloud::networksecurity::v1::DeleteServerTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency ListClientTlsPolicies(
      google::cloud::networksecurity::v1::ListClientTlsPoliciesRequest request);

  virtual google::cloud::Idempotency GetClientTlsPolicy(
      google::cloud::networksecurity::v1::GetClientTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency CreateClientTlsPolicy(
      google::cloud::networksecurity::v1::CreateClientTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateClientTlsPolicy(
      google::cloud::networksecurity::v1::UpdateClientTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency DeleteClientTlsPolicy(
      google::cloud::networksecurity::v1::DeleteClientTlsPolicyRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<NetworkSecurityConnectionIdempotencyPolicy>
MakeDefaultNetworkSecurityConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networksecurity_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKSECURITY_V1_NETWORK_SECURITY_CONNECTION_IDEMPOTENCY_POLICY_H
