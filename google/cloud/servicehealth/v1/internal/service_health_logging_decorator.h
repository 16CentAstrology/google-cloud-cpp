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
// source: google/cloud/servicehealth/v1/event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_INTERNAL_SERVICE_HEALTH_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_INTERNAL_SERVICE_HEALTH_LOGGING_DECORATOR_H

#include "google/cloud/servicehealth/v1/internal/service_health_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace servicehealth_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceHealthLogging : public ServiceHealthStub {
 public:
  ~ServiceHealthLogging() override = default;
  ServiceHealthLogging(std::shared_ptr<ServiceHealthStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> const& components);

  StatusOr<google::cloud::servicehealth::v1::ListEventsResponse> ListEvents(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::ListEventsRequest const& request)
      override;

  StatusOr<google::cloud::servicehealth::v1::Event> GetEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::GetEventRequest const& request)
      override;

  StatusOr<google::cloud::servicehealth::v1::ListOrganizationEventsResponse>
  ListOrganizationEvents(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::ListOrganizationEventsRequest const&
          request) override;

  StatusOr<google::cloud::servicehealth::v1::OrganizationEvent>
  GetOrganizationEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
          request) override;

  StatusOr<google::cloud::servicehealth::v1::ListOrganizationImpactsResponse>
  ListOrganizationImpacts(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::ListOrganizationImpactsRequest const&
          request) override;

  StatusOr<google::cloud::servicehealth::v1::OrganizationImpact>
  GetOrganizationImpact(
      grpc::ClientContext& context, Options const& options,
      google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
          request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

 private:
  std::shared_ptr<ServiceHealthStub> child_;
  TracingOptions tracing_options_;
};  // ServiceHealthLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_INTERNAL_SERVICE_HEALTH_LOGGING_DECORATOR_H
