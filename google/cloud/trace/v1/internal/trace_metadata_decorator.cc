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
// source: google/devtools/cloudtrace/v1/trace.proto

#include "google/cloud/trace/v1/internal/trace_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/devtools/cloudtrace/v1/trace.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace trace_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TraceServiceMetadata::TraceServiceMetadata(
    std::shared_ptr<TraceServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::devtools::cloudtrace::v1::ListTracesResponse>
TraceServiceMetadata::ListTraces(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudtrace::v1::ListTracesRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->ListTraces(context, options, request);
}

StatusOr<google::devtools::cloudtrace::v1::Trace>
TraceServiceMetadata::GetTrace(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudtrace::v1::GetTraceRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id()),
                   "&", "trace_id=", internal::UrlEncode(request.trace_id())));
  return child_->GetTrace(context, options, request);
}

Status TraceServiceMetadata::PatchTraces(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudtrace::v1::PatchTracesRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("project_id=", internal::UrlEncode(request.project_id())));
  return child_->PatchTraces(context, options, request);
}

void TraceServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TraceServiceMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace trace_v1_internal
}  // namespace cloud
}  // namespace google
