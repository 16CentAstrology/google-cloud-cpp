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
// source: google/api/cloudquotas/v1/cloudquotas.proto

#include "google/cloud/cloudquotas/v1/internal/cloud_quotas_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/api/cloudquotas/v1/cloudquotas.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudquotas_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudQuotasMetadata::CloudQuotasMetadata(
    std::shared_ptr<CloudQuotasStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::api::cloudquotas::v1::ListQuotaInfosResponse>
CloudQuotasMetadata::ListQuotaInfos(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::ListQuotaInfosRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListQuotaInfos(context, options, request);
}

StatusOr<google::api::cloudquotas::v1::QuotaInfo>
CloudQuotasMetadata::GetQuotaInfo(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::GetQuotaInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetQuotaInfo(context, options, request);
}

StatusOr<google::api::cloudquotas::v1::ListQuotaPreferencesResponse>
CloudQuotasMetadata::ListQuotaPreferences(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::ListQuotaPreferencesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListQuotaPreferences(context, options, request);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasMetadata::GetQuotaPreference(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::GetQuotaPreferenceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetQuotaPreference(context, options, request);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasMetadata::CreateQuotaPreference(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::CreateQuotaPreferenceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateQuotaPreference(context, options, request);
}

StatusOr<google::api::cloudquotas::v1::QuotaPreference>
CloudQuotasMetadata::UpdateQuotaPreference(
    grpc::ClientContext& context, Options const& options,
    google::api::cloudquotas::v1::UpdateQuotaPreferenceRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("quota_preference.name=",
                   internal::UrlEncode(request.quota_preference().name())));
  return child_->UpdateQuotaPreference(context, options, request);
}

void CloudQuotasMetadata::SetMetadata(grpc::ClientContext& context,
                                      Options const& options,
                                      std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudQuotasMetadata::SetMetadata(grpc::ClientContext& context,
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
}  // namespace cloudquotas_v1_internal
}  // namespace cloud
}  // namespace google
