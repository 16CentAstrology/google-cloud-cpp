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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_METADATA_DECORATOR_H

#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace iap_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IdentityAwareProxyAdminServiceMetadata
    : public IdentityAwareProxyAdminServiceStub {
 public:
  ~IdentityAwareProxyAdminServiceMetadata() override = default;
  IdentityAwareProxyAdminServiceMetadata(
      std::shared_ptr<IdentityAwareProxyAdminServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> GetIapSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::GetIapSettingsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::IapSettings> UpdateIapSettings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request) override;

  StatusOr<google::cloud::iap::v1::ListTunnelDestGroupsResponse>
  ListTunnelDestGroups(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::ListTunnelDestGroupsRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> CreateTunnelDestGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request)
      override;

  Status DeleteTunnelDestGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request)
      override;

  StatusOr<google::cloud::iap::v1::TunnelDestGroup> UpdateTunnelDestGroup(
      grpc::ClientContext& context, Options const& options,
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<IdentityAwareProxyAdminServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_INTERNAL_IDENTITY_AWARE_PROXY_ADMIN_METADATA_DECORATOR_H
