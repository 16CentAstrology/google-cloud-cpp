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
// source:
// google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests.proto

#include "google/cloud/compute/instance_group_manager_resize_requests/v1/internal/instance_group_manager_resize_requests_option_defaults.h"
#include "google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests_connection.h"
#include "google/cloud/compute/instance_group_manager_resize_requests/v1/instance_group_manager_resize_requests_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instance_group_manager_resize_requests_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options InstanceGroupManagerResizeRequestsDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options),
      "GOOGLE_CLOUD_CPP_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_INSTANCE_GROUP_MANAGER_RESIZE_REQUESTS_AUTHORITY",
      "compute.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<compute_instance_group_manager_resize_requests_v1::
                       InstanceGroupManagerResizeRequestsRetryPolicyOption>()) {
    options.set<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsRetryPolicyOption>(
        compute_instance_group_manager_resize_requests_v1::
            InstanceGroupManagerResizeRequestsLimitedTimeRetryPolicy(
                std::chrono::minutes(30))
                .clone());
  }
  if (!options
           .has<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsBackoffPolicyOption>()) {
    options.set<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsPollingPolicyOption>()) {
    options.set<compute_instance_group_manager_resize_requests_v1::
                    InstanceGroupManagerResizeRequestsPollingPolicyOption>(
        GenericPollingPolicy<
            compute_instance_group_manager_resize_requests_v1::
                InstanceGroupManagerResizeRequestsRetryPolicyOption::Type,
            compute_instance_group_manager_resize_requests_v1::
                InstanceGroupManagerResizeRequestsBackoffPolicyOption::Type>(
            options
                .get<compute_instance_group_manager_resize_requests_v1::
                         InstanceGroupManagerResizeRequestsRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<
          compute_instance_group_manager_resize_requests_v1::
              InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicyOption>()) {
    options.set<
        compute_instance_group_manager_resize_requests_v1::
            InstanceGroupManagerResizeRequestsConnectionIdempotencyPolicyOption>(
        compute_instance_group_manager_resize_requests_v1::
            MakeDefaultInstanceGroupManagerResizeRequestsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_group_manager_resize_requests_v1_internal
}  // namespace cloud
}  // namespace google
