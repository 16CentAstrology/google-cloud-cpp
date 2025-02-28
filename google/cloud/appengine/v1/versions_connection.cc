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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/versions_connection.h"
#include "google/cloud/appengine/v1/internal/versions_connection_impl.h"
#include "google/cloud/appengine/v1/internal/versions_option_defaults.h"
#include "google/cloud/appengine/v1/internal/versions_stub_factory.h"
#include "google/cloud/appengine/v1/internal/versions_tracing_connection.h"
#include "google/cloud/appengine/v1/versions_options.h"
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
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsConnection::~VersionsConnection() = default;

StreamRange<google::appengine::v1::Version> VersionsConnection::ListVersions(
    google::appengine::v1::
        ListVersionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::appengine::v1::Version>>();
}

StatusOr<google::appengine::v1::Version> VersionsConnection::GetVersion(
    google::appengine::v1::GetVersionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::CreateVersion(
    google::appengine::v1::CreateVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> VersionsConnection::CreateVersion(
    NoAwaitTag, google::appengine::v1::CreateVersionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::CreateVersion(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::UpdateVersion(
    google::appengine::v1::UpdateVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> VersionsConnection::UpdateVersion(
    NoAwaitTag, google::appengine::v1::UpdateVersionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::Version>>
VersionsConnection::UpdateVersion(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::Version>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
VersionsConnection::DeleteVersion(
    google::appengine::v1::DeleteVersionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> VersionsConnection::DeleteVersion(
    NoAwaitTag, google::appengine::v1::DeleteVersionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
VersionsConnection::DeleteVersion(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::appengine::v1::OperationMetadataV1>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VersionsConnection> MakeVersionsConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VersionsPolicyOptionList>(options, __func__);
  options = appengine_v1_internal::VersionsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = appengine_v1_internal::CreateDefaultVersionsStub(std::move(auth),
                                                               options);
  return appengine_v1_internal::MakeVersionsTracingConnection(
      std::make_shared<appengine_v1_internal::VersionsConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google
