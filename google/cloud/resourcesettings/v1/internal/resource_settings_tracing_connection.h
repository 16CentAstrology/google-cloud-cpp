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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_INTERNAL_RESOURCE_SETTINGS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_INTERNAL_RESOURCE_SETTINGS_TRACING_CONNECTION_H

#include "google/cloud/resourcesettings/v1/resource_settings_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcesettings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ResourceSettingsServiceTracingConnection
    : public resourcesettings_v1::ResourceSettingsServiceConnection {
 public:
  ~ResourceSettingsServiceTracingConnection() override = default;

  explicit ResourceSettingsServiceTracingConnection(
      std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::resourcesettings::v1::Setting> ListSettings(
      google::cloud::resourcesettings::v1::ListSettingsRequest request)
      override;

  StatusOr<google::cloud::resourcesettings::v1::Setting> GetSetting(
      google::cloud::resourcesettings::v1::GetSettingRequest const& request)
      override;

  StatusOr<google::cloud::resourcesettings::v1::Setting> UpdateSetting(
      google::cloud::resourcesettings::v1::UpdateSettingRequest const& request)
      override;

 private:
  std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
MakeResourceSettingsServiceTracingConnection(
    std::shared_ptr<resourcesettings_v1::ResourceSettingsServiceConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcesettings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCESETTINGS_V1_INTERNAL_RESOURCE_SETTINGS_TRACING_CONNECTION_H
