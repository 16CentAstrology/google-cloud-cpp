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
// source: google/cloud/timeseriesinsights/v1/timeseries_insights.proto

#include "google/cloud/timeseriesinsights/v1/internal/timeseries_insights_controller_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/timeseriesinsights/v1/timeseries_insights.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace timeseriesinsights_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TimeseriesInsightsControllerMetadata::TimeseriesInsightsControllerMetadata(
    std::shared_ptr<TimeseriesInsightsControllerStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::timeseriesinsights::v1::ListDataSetsResponse>
TimeseriesInsightsControllerMetadata::ListDataSets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::ListDataSetsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataSets(context, options, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::DataSet>
TimeseriesInsightsControllerMetadata::CreateDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::CreateDataSetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataSet(context, options, request);
}

Status TimeseriesInsightsControllerMetadata::DeleteDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::DeleteDataSetRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataSet(context, options, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::AppendEventsResponse>
TimeseriesInsightsControllerMetadata::AppendEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::AppendEventsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->AppendEvents(context, options, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::QueryDataSetResponse>
TimeseriesInsightsControllerMetadata::QueryDataSet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::QueryDataSetRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->QueryDataSet(context, options, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerMetadata::EvaluateSlice(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::EvaluateSliceRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("dataset=", internal::UrlEncode(request.dataset())));
  return child_->EvaluateSlice(context, options, request);
}

StatusOr<google::cloud::timeseriesinsights::v1::EvaluatedSlice>
TimeseriesInsightsControllerMetadata::EvaluateTimeseries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::timeseriesinsights::v1::EvaluateTimeseriesRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->EvaluateTimeseries(context, options, request);
}

void TimeseriesInsightsControllerMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TimeseriesInsightsControllerMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options) {
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
}  // namespace timeseriesinsights_v1_internal
}  // namespace cloud
}  // namespace google
