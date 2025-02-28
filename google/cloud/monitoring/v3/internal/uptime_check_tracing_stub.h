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
// source: google/monitoring/v3/uptime_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_UPTIME_CHECK_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_UPTIME_CHECK_TRACING_STUB_H

#include "google/cloud/monitoring/v3/internal/uptime_check_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class UptimeCheckServiceTracingStub : public UptimeCheckServiceStub {
 public:
  ~UptimeCheckServiceTracingStub() override = default;

  explicit UptimeCheckServiceTracingStub(
      std::shared_ptr<UptimeCheckServiceStub> child);

  StatusOr<google::monitoring::v3::ListUptimeCheckConfigsResponse>
  ListUptimeCheckConfigs(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::ListUptimeCheckConfigsRequest const& request)
      override;

  StatusOr<google::monitoring::v3::UptimeCheckConfig> GetUptimeCheckConfig(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::GetUptimeCheckConfigRequest const& request)
      override;

  StatusOr<google::monitoring::v3::UptimeCheckConfig> CreateUptimeCheckConfig(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::CreateUptimeCheckConfigRequest const& request)
      override;

  StatusOr<google::monitoring::v3::UptimeCheckConfig> UpdateUptimeCheckConfig(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request)
      override;

  Status DeleteUptimeCheckConfig(
      grpc::ClientContext& context, Options const& options,
      google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request)
      override;

  StatusOr<google::monitoring::v3::ListUptimeCheckIpsResponse>
  ListUptimeCheckIps(grpc::ClientContext& context, Options const& options,
                     google::monitoring::v3::ListUptimeCheckIpsRequest const&
                         request) override;

 private:
  std::shared_ptr<UptimeCheckServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<UptimeCheckServiceStub> MakeUptimeCheckServiceTracingStub(
    std::shared_ptr<UptimeCheckServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_UPTIME_CHECK_TRACING_STUB_H
