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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/v1/ekm_connection.h"
#include "google/cloud/kms/v1/ekm_options.h"
#include "google/cloud/kms/v1/internal/ekm_connection_impl.h"
#include "google/cloud/kms/v1/internal/ekm_option_defaults.h"
#include "google/cloud/kms/v1/internal/ekm_stub_factory.h"
#include "google/cloud/kms/v1/internal/ekm_tracing_connection.h"
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
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EkmServiceConnection::~EkmServiceConnection() = default;

StreamRange<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::ListEkmConnections(
    google::cloud::kms::v1::
        ListEkmConnectionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::EkmConnection>>();
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::GetEkmConnection(
    google::cloud::kms::v1::GetEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::CreateEkmConnection(
    google::cloud::kms::v1::CreateEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceConnection::UpdateEkmConnection(
    google::cloud::kms::v1::UpdateEkmConnectionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceConnection::GetEkmConfig(
    google::cloud::kms::v1::GetEkmConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::EkmConfig>
EkmServiceConnection::UpdateEkmConfig(
    google::cloud::kms::v1::UpdateEkmConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::kms::v1::VerifyConnectivityResponse>
EkmServiceConnection::VerifyConnectivity(
    google::cloud::kms::v1::VerifyConnectivityRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
EkmServiceConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location> EkmServiceConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> EkmServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> EkmServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
EkmServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::longrunning::Operation> EkmServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<EkmServiceConnection> MakeEkmServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 EkmServicePolicyOptionList>(options, __func__);
  options = kms_v1_internal::EkmServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      kms_v1_internal::CreateDefaultEkmServiceStub(std::move(auth), options);
  return kms_v1_internal::MakeEkmServiceTracingConnection(
      std::make_shared<kms_v1_internal::EkmServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google
