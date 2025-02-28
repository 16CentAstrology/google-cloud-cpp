// Copyright 2023 Google LLC
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
// source: google/cloud/datafusion/v1/datafusion.proto

#include "google/cloud/datafusion/v1/internal/data_fusion_option_defaults.h"
#include "google/cloud/datafusion/v1/data_fusion_connection.h"
#include "google/cloud/datafusion/v1/data_fusion_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datafusion_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DataFusionDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_DATA_FUSION_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_DATA_FUSION_AUTHORITY", "datafusion.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<datafusion_v1::DataFusionRetryPolicyOption>()) {
    options.set<datafusion_v1::DataFusionRetryPolicyOption>(
        datafusion_v1::DataFusionLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<datafusion_v1::DataFusionBackoffPolicyOption>()) {
    options.set<datafusion_v1::DataFusionBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<datafusion_v1::DataFusionPollingPolicyOption>()) {
    options.set<datafusion_v1::DataFusionPollingPolicyOption>(
        GenericPollingPolicy<
            datafusion_v1::DataFusionRetryPolicyOption::Type,
            datafusion_v1::DataFusionBackoffPolicyOption::Type>(
            options.get<datafusion_v1::DataFusionRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<datafusion_v1::DataFusionConnectionIdempotencyPolicyOption>()) {
    options.set<datafusion_v1::DataFusionConnectionIdempotencyPolicyOption>(
        datafusion_v1::MakeDefaultDataFusionConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datafusion_v1_internal
}  // namespace cloud
}  // namespace google
