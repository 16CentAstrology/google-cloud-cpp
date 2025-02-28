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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/instances_option_defaults.h"
#include "google/cloud/appengine/v1/instances_connection.h"
#include "google/cloud/appengine/v1/instances_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options InstancesDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_INSTANCES_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_INSTANCES_AUTHORITY", "appengine.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<appengine_v1::InstancesRetryPolicyOption>()) {
    options.set<appengine_v1::InstancesRetryPolicyOption>(
        appengine_v1::InstancesLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<appengine_v1::InstancesBackoffPolicyOption>()) {
    options.set<appengine_v1::InstancesBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<appengine_v1::InstancesPollingPolicyOption>()) {
    options.set<appengine_v1::InstancesPollingPolicyOption>(
        GenericPollingPolicy<appengine_v1::InstancesRetryPolicyOption::Type,
                             appengine_v1::InstancesBackoffPolicyOption::Type>(
            options.get<appengine_v1::InstancesRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<appengine_v1::InstancesConnectionIdempotencyPolicyOption>()) {
    options.set<appengine_v1::InstancesConnectionIdempotencyPolicyOption>(
        appengine_v1::MakeDefaultInstancesConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
