// Copyright 2024 Google LLC
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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IMPL_H

#include "google/cloud/privilegedaccessmanager/v1/internal/privileged_access_manager_retry_traits.h"
#include "google/cloud/privilegedaccessmanager/v1/internal/privileged_access_manager_stub.h"
#include "google/cloud/privilegedaccessmanager/v1/privileged_access_manager_connection.h"
#include "google/cloud/privilegedaccessmanager/v1/privileged_access_manager_connection_idempotency_policy.h"
#include "google/cloud/privilegedaccessmanager/v1/privileged_access_manager_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PrivilegedAccessManagerConnectionImpl
    : public privilegedaccessmanager_v1::PrivilegedAccessManagerConnection {
 public:
  ~PrivilegedAccessManagerConnectionImpl() override = default;

  PrivilegedAccessManagerConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          privilegedaccessmanager_v1_internal::PrivilegedAccessManagerStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<
      google::cloud::privilegedaccessmanager::v1::CheckOnboardingStatusResponse>
  CheckOnboardingStatus(
      google::cloud::privilegedaccessmanager::v1::
          CheckOnboardingStatusRequest const& request) override;

  StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>
  ListEntitlements(
      google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest
          request) override;

  StreamRange<google::cloud::privilegedaccessmanager::v1::Entitlement>
  SearchEntitlements(
      google::cloud::privilegedaccessmanager::v1::SearchEntitlementsRequest
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>
  GetEntitlement(
      google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
          request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  CreateEntitlement(google::cloud::privilegedaccessmanager::v1::
                        CreateEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateEntitlement(
      ExperimentalTag, NoAwaitTag,
      google::cloud::privilegedaccessmanager::v1::
          CreateEntitlementRequest const& request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  CreateEntitlement(ExperimentalTag,
                    google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  DeleteEntitlement(google::cloud::privilegedaccessmanager::v1::
                        DeleteEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteEntitlement(
      ExperimentalTag, NoAwaitTag,
      google::cloud::privilegedaccessmanager::v1::
          DeleteEntitlementRequest const& request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  DeleteEntitlement(ExperimentalTag,
                    google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  UpdateEntitlement(google::cloud::privilegedaccessmanager::v1::
                        UpdateEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateEntitlement(
      ExperimentalTag, NoAwaitTag,
      google::cloud::privilegedaccessmanager::v1::
          UpdateEntitlementRequest const& request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>>
  UpdateEntitlement(ExperimentalTag,
                    google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::privilegedaccessmanager::v1::Grant> ListGrants(
      google::cloud::privilegedaccessmanager::v1::ListGrantsRequest request)
      override;

  StreamRange<google::cloud::privilegedaccessmanager::v1::Grant> SearchGrants(
      google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest request)
      override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> GetGrant(
      google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> CreateGrant(
      google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> ApproveGrant(
      google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> DenyGrant(
      google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
          request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>
  RevokeGrant(
      google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RevokeGrant(
      ExperimentalTag, NoAwaitTag,
      google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
          request) override;

  future<StatusOr<google::cloud::privilegedaccessmanager::v1::Grant>>
  RevokeGrant(ExperimentalTag,
              google::longrunning::Operation const& operation) override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      privilegedaccessmanager_v1_internal::PrivilegedAccessManagerStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_CONNECTION_IMPL_H
