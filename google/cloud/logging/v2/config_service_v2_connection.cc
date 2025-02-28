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
// source: google/logging/v2/logging_config.proto

#include "google/cloud/logging/v2/config_service_v2_connection.h"
#include "google/cloud/logging/v2/config_service_v2_options.h"
#include "google/cloud/logging/v2/internal/config_service_v2_connection_impl.h"
#include "google/cloud/logging/v2/internal/config_service_v2_option_defaults.h"
#include "google/cloud/logging/v2/internal/config_service_v2_stub_factory.h"
#include "google/cloud/logging/v2/internal/config_service_v2_tracing_connection.h"
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
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfigServiceV2Connection::~ConfigServiceV2Connection() = default;

StreamRange<google::logging::v2::LogBucket>
ConfigServiceV2Connection::ListBuckets(
    google::logging::v2::
        ListBucketsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::logging::v2::LogBucket>>();
}

StatusOr<google::logging::v2::LogBucket> ConfigServiceV2Connection::GetBucket(
    google::logging::v2::GetBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2Connection::CreateBucketAsync(
    google::logging::v2::CreateBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LogBucket>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Connection::CreateBucketAsync(
    NoAwaitTag, google::logging::v2::CreateBucketRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2Connection::CreateBucketAsync(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LogBucket>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2Connection::UpdateBucketAsync(
    google::logging::v2::UpdateBucketRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LogBucket>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Connection::UpdateBucketAsync(
    NoAwaitTag, google::logging::v2::UpdateBucketRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::LogBucket>>
ConfigServiceV2Connection::UpdateBucketAsync(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LogBucket>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2Connection::CreateBucket(
    google::logging::v2::CreateBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogBucket>
ConfigServiceV2Connection::UpdateBucket(
    google::logging::v2::UpdateBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::DeleteBucket(
    google::logging::v2::DeleteBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::UndeleteBucket(
    google::logging::v2::UndeleteBucketRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::logging::v2::LogView> ConfigServiceV2Connection::ListViews(
    google::logging::v2::
        ListViewsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::logging::v2::LogView>>();
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Connection::GetView(
    google::logging::v2::GetViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Connection::CreateView(
    google::logging::v2::CreateViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogView> ConfigServiceV2Connection::UpdateView(
    google::logging::v2::UpdateViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::DeleteView(
    google::logging::v2::DeleteViewRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::logging::v2::LogSink> ConfigServiceV2Connection::ListSinks(
    google::logging::v2::
        ListSinksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::logging::v2::LogSink>>();
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Connection::GetSink(
    google::logging::v2::GetSinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Connection::CreateSink(
    google::logging::v2::CreateSinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogSink> ConfigServiceV2Connection::UpdateSink(
    google::logging::v2::UpdateSinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::DeleteSink(
    google::logging::v2::DeleteSinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::logging::v2::Link>>
ConfigServiceV2Connection::CreateLink(
    google::logging::v2::CreateLinkRequest const&) {
  return google::cloud::make_ready_future<StatusOr<google::logging::v2::Link>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ConfigServiceV2Connection::CreateLink(
    NoAwaitTag, google::logging::v2::CreateLinkRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::Link>>
ConfigServiceV2Connection::CreateLink(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<StatusOr<google::logging::v2::Link>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::LinkMetadata>>
ConfigServiceV2Connection::DeleteLink(
    google::logging::v2::DeleteLinkRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LinkMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> ConfigServiceV2Connection::DeleteLink(
    NoAwaitTag, google::logging::v2::DeleteLinkRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::LinkMetadata>>
ConfigServiceV2Connection::DeleteLink(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::LinkMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::logging::v2::Link> ConfigServiceV2Connection::ListLinks(
    google::logging::v2::
        ListLinksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::logging::v2::Link>>();
}

StatusOr<google::logging::v2::Link> ConfigServiceV2Connection::GetLink(
    google::logging::v2::GetLinkRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::logging::v2::LogExclusion>
ConfigServiceV2Connection::ListExclusions(
    google::logging::v2::
        ListExclusionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::logging::v2::LogExclusion>>();
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Connection::GetExclusion(
    google::logging::v2::GetExclusionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Connection::CreateExclusion(
    google::logging::v2::CreateExclusionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::LogExclusion>
ConfigServiceV2Connection::UpdateExclusion(
    google::logging::v2::UpdateExclusionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::DeleteExclusion(
    google::logging::v2::DeleteExclusionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Connection::GetCmekSettings(
    google::logging::v2::GetCmekSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::CmekSettings>
ConfigServiceV2Connection::UpdateCmekSettings(
    google::logging::v2::UpdateCmekSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::Settings> ConfigServiceV2Connection::GetSettings(
    google::logging::v2::GetSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::logging::v2::Settings>
ConfigServiceV2Connection::UpdateSettings(
    google::logging::v2::UpdateSettingsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::logging::v2::CopyLogEntriesResponse>>
ConfigServiceV2Connection::CopyLogEntries(
    google::logging::v2::CopyLogEntriesRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::CopyLogEntriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Connection::CopyLogEntries(
    NoAwaitTag, google::logging::v2::CopyLogEntriesRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::logging::v2::CopyLogEntriesResponse>>
ConfigServiceV2Connection::CopyLogEntries(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::logging::v2::CopyLogEntriesResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::longrunning::Operation>
ConfigServiceV2Connection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
ConfigServiceV2Connection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status ConfigServiceV2Connection::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ConfigServiceV2Connection> MakeConfigServiceV2Connection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ConfigServiceV2PolicyOptionList>(options,
                                                                  __func__);
  options =
      logging_v2_internal::ConfigServiceV2DefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = logging_v2_internal::CreateDefaultConfigServiceV2Stub(
      std::move(auth), options);
  return logging_v2_internal::MakeConfigServiceV2TracingConnection(
      std::make_shared<logging_v2_internal::ConfigServiceV2ConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google
