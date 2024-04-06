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
// source: google/cloud/resourcesettings/v1/resource_settings.proto

#include "google/cloud/resourcesettings/v1/internal/resource_settings_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcesettings/v1/resource_settings.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ResourceSettingsServiceMetadata::ResourceSettingsServiceMetadata(
    std::shared_ptr<ResourceSettingsServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::resourcesettings::v1::ListSettingsResponse>
ResourceSettingsServiceMetadata::ListSettings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::ListSettingsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListSettings(context, options, request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceMetadata::GetSetting(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::GetSettingRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetSetting(context, options, request);
}

StatusOr<google::cloud::resourcesettings::v1::Setting>
ResourceSettingsServiceMetadata::UpdateSetting(
    grpc::ClientContext& context, Options const& options,
    google::cloud::resourcesettings::v1::UpdateSettingRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("setting.name=",
                           internal::UrlEncode(request.setting().name())));
  return child_->UpdateSetting(context, options, request);
}

void ResourceSettingsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ResourceSettingsServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                                  Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google
