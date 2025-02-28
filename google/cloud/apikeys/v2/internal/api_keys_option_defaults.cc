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
// source: google/api/apikeys/v2/apikeys.proto

#include "google/cloud/apikeys/v2/internal/api_keys_option_defaults.h"
#include "google/cloud/apikeys/v2/api_keys_connection.h"
#include "google/cloud/apikeys/v2/api_keys_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace apikeys_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options ApiKeysDefaultOptions(Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_API_KEYS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_API_KEYS_AUTHORITY", "apikeys.googleapis.com");
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<apikeys_v2::ApiKeysRetryPolicyOption>()) {
    options.set<apikeys_v2::ApiKeysRetryPolicyOption>(
        apikeys_v2::ApiKeysLimitedTimeRetryPolicy(std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<apikeys_v2::ApiKeysBackoffPolicyOption>()) {
    options.set<apikeys_v2::ApiKeysBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<apikeys_v2::ApiKeysPollingPolicyOption>()) {
    options.set<apikeys_v2::ApiKeysPollingPolicyOption>(
        GenericPollingPolicy<apikeys_v2::ApiKeysRetryPolicyOption::Type,
                             apikeys_v2::ApiKeysBackoffPolicyOption::Type>(
            options.get<apikeys_v2::ApiKeysRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<apikeys_v2::ApiKeysConnectionIdempotencyPolicyOption>()) {
    options.set<apikeys_v2::ApiKeysConnectionIdempotencyPolicyOption>(
        apikeys_v2::MakeDefaultApiKeysConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apikeys_v2_internal
}  // namespace cloud
}  // namespace google
