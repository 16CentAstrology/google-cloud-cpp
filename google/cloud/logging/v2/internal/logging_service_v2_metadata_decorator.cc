// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto

#include "google/cloud/logging/v2/internal/logging_service_v2_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/logging/v2/logging.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LoggingServiceV2Metadata::LoggingServiceV2Metadata(
    std::shared_ptr<LoggingServiceV2Stub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

Status LoggingServiceV2Metadata::DeleteLog(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::DeleteLogRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("log_name=", internal::UrlEncode(request.log_name())));
  return child_->DeleteLog(context, options, request);
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2Metadata::WriteLogEntries(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::WriteLogEntriesRequest const& request) {
  SetMetadata(context, options);
  return child_->WriteLogEntries(context, options, request);
}

StatusOr<google::logging::v2::ListLogEntriesResponse>
LoggingServiceV2Metadata::ListLogEntries(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListLogEntriesRequest const& request) {
  SetMetadata(context, options);
  return child_->ListLogEntries(context, options, request);
}

StatusOr<google::logging::v2::ListMonitoredResourceDescriptorsResponse>
LoggingServiceV2Metadata::ListMonitoredResourceDescriptors(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListMonitoredResourceDescriptorsRequest const&
        request) {
  SetMetadata(context, options);
  return child_->ListMonitoredResourceDescriptors(context, options, request);
}

StatusOr<google::logging::v2::ListLogsResponse>
LoggingServiceV2Metadata::ListLogs(
    grpc::ClientContext& context, Options const& options,
    google::logging::v2::ListLogsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListLogs(context, options, request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::logging::v2::TailLogEntriesRequest,
    google::logging::v2::TailLogEntriesResponse>>
LoggingServiceV2Metadata::AsyncTailLogEntries(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context, internal::CurrentOptions());
  return child_->AsyncTailLogEntries(cq, std::move(context));
}

future<StatusOr<google::logging::v2::WriteLogEntriesResponse>>
LoggingServiceV2Metadata::AsyncWriteLogEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::logging::v2::WriteLogEntriesRequest const& request) {
  SetMetadata(*context, internal::CurrentOptions());
  return child_->AsyncWriteLogEntries(cq, std::move(context), request);
}

void LoggingServiceV2Metadata::SetMetadata(grpc::ClientContext& context,
                                           Options const& options,
                                           std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void LoggingServiceV2Metadata::SetMetadata(grpc::ClientContext& context,
                                           Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google
