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
// source: google/api/serviceusage/v1/serviceusage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_INTERNAL_SERVICE_USAGE_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_INTERNAL_SERVICE_USAGE_CONNECTION_IMPL_H

#include "google/cloud/serviceusage/internal/service_usage_retry_traits.h"
#include "google/cloud/serviceusage/internal/service_usage_stub.h"
#include "google/cloud/serviceusage/service_usage_connection.h"
#include "google/cloud/serviceusage/service_usage_connection_idempotency_policy.h"
#include "google/cloud/serviceusage/service_usage_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceUsageConnectionImpl : public serviceusage::ServiceUsageConnection {
 public:
  ~ServiceUsageConnectionImpl() override = default;

  ServiceUsageConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<serviceusage_internal::ServiceUsageStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
  EnableService(google::api::serviceusage::v1::EnableServiceRequest const&
                    request) override;

  future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
  DisableService(google::api::serviceusage::v1::DisableServiceRequest const&
                     request) override;

  StatusOr<google::api::serviceusage::v1::Service> GetService(
      google::api::serviceusage::v1::GetServiceRequest const& request) override;

  StreamRange<google::api::serviceusage::v1::Service> ListServices(
      google::api::serviceusage::v1::ListServicesRequest request) override;

  future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
  BatchEnableServices(
      google::api::serviceusage::v1::BatchEnableServicesRequest const& request)
      override;

  StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
  BatchGetServices(google::api::serviceusage::v1::BatchGetServicesRequest const&
                       request) override;

 private:
  std::unique_ptr<serviceusage::ServiceUsageRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<serviceusage::ServiceUsageRetryPolicyOption>()) {
      return options.get<serviceusage::ServiceUsageRetryPolicyOption>()
          ->clone();
    }
    return options_.get<serviceusage::ServiceUsageRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<serviceusage::ServiceUsageBackoffPolicyOption>()) {
      return options.get<serviceusage::ServiceUsageBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<serviceusage::ServiceUsageBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<serviceusage::ServiceUsageConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            serviceusage::ServiceUsageConnectionIdempotencyPolicyOption>()) {
      return options
          .get<serviceusage::ServiceUsageConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<serviceusage::ServiceUsageConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<serviceusage::ServiceUsagePollingPolicyOption>()) {
      return options.get<serviceusage::ServiceUsagePollingPolicyOption>()
          ->clone();
    }
    return options_.get<serviceusage::ServiceUsagePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<serviceusage_internal::ServiceUsageStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_INTERNAL_SERVICE_USAGE_CONNECTION_IMPL_H
