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
// source: google/cloud/compute/instance_settings/v1/instance_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_TRACING_CONNECTION_H

#include "google/cloud/compute/instance_settings/v1/instance_settings_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_settings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class InstanceSettingsTracingConnection
    : public compute_instance_settings_v1::InstanceSettingsConnection {
 public:
  ~InstanceSettingsTracingConnection() override = default;

  explicit InstanceSettingsTracingConnection(
      std::shared_ptr<compute_instance_settings_v1::InstanceSettingsConnection>
          child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::InstanceSettings>
  GetInstanceSettings(google::cloud::cpp::compute::instance_settings::v1::
                          GetInstanceSettingsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceSettings(
      google::cloud::cpp::compute::instance_settings::v1::
          PatchInstanceSettingsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PatchInstanceSettings(
      NoAwaitTag, google::cloud::cpp::compute::instance_settings::v1::
                      PatchInstanceSettingsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchInstanceSettings(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  std::shared_ptr<compute_instance_settings_v1::InstanceSettingsConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_instance_settings_v1::InstanceSettingsConnection>
MakeInstanceSettingsTracingConnection(
    std::shared_ptr<compute_instance_settings_v1::InstanceSettingsConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_settings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_SETTINGS_V1_INTERNAL_INSTANCE_SETTINGS_TRACING_CONNECTION_H
