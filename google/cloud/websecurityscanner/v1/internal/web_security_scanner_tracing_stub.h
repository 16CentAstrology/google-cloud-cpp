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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_INTERNAL_WEB_SECURITY_SCANNER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_INTERNAL_WEB_SECURITY_SCANNER_TRACING_STUB_H

#include "google/cloud/websecurityscanner/v1/internal/web_security_scanner_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace websecurityscanner_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class WebSecurityScannerTracingStub : public WebSecurityScannerStub {
 public:
  ~WebSecurityScannerTracingStub() override = default;

  explicit WebSecurityScannerTracingStub(
      std::shared_ptr<WebSecurityScannerStub> child);

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> CreateScanConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
          request) override;

  Status DeleteScanConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> GetScanConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ListScanConfigsResponse>
  ListScanConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::ListScanConfigsRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanConfig> UpdateScanConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StartScanRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::StartScanRunRequest const& request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> GetScanRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::GetScanRunRequest const& request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ListScanRunsResponse>
  ListScanRuns(grpc::ClientContext& context, Options const& options,
               google::cloud::websecurityscanner::v1::ListScanRunsRequest const&
                   request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StopScanRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::StopScanRunRequest const& request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ListCrawledUrlsResponse>
  ListCrawledUrls(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest const&
          request) override;

  StatusOr<google::cloud::websecurityscanner::v1::Finding> GetFinding(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::GetFindingRequest const& request)
      override;

  StatusOr<google::cloud::websecurityscanner::v1::ListFindingsResponse>
  ListFindings(grpc::ClientContext& context, Options const& options,
               google::cloud::websecurityscanner::v1::ListFindingsRequest const&
                   request) override;

  StatusOr<google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
  ListFindingTypeStats(
      grpc::ClientContext& context, Options const& options,
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
          request) override;

 private:
  std::shared_ptr<WebSecurityScannerStub> child_;
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
std::shared_ptr<WebSecurityScannerStub> MakeWebSecurityScannerTracingStub(
    std::shared_ptr<WebSecurityScannerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_V1_INTERNAL_WEB_SECURITY_SCANNER_TRACING_STUB_H
