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
// source: google/cloud/dialogflow/v2/encryption_spec.proto

#include "google/cloud/dialogflow_es/internal/encryption_spec_option_defaults.h"
#include "google/cloud/dialogflow_es/encryption_spec_connection.h"
#include "google/cloud/dialogflow_es/encryption_spec_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options EncryptionSpecServiceDefaultOptions(std::string const& location,
                                            Options options) {
  options = internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_ENCRYPTION_SPEC_SERVICE_ENDPOINT",
      "", "GOOGLE_CLOUD_CPP_ENCRYPTION_SPEC_SERVICE_AUTHORITY",
      absl::StrCat(location, location.empty() ? "" : "-",
                   "dialogflow.googleapis.com"));
  options = internal::PopulateGrpcOptions(std::move(options));
  if (!options.has<dialogflow_es::EncryptionSpecServiceRetryPolicyOption>()) {
    options.set<dialogflow_es::EncryptionSpecServiceRetryPolicyOption>(
        dialogflow_es::EncryptionSpecServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dialogflow_es::EncryptionSpecServiceBackoffPolicyOption>()) {
    options.set<dialogflow_es::EncryptionSpecServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<dialogflow_es::EncryptionSpecServicePollingPolicyOption>()) {
    options.set<dialogflow_es::EncryptionSpecServicePollingPolicyOption>(
        GenericPollingPolicy<
            dialogflow_es::EncryptionSpecServiceRetryPolicyOption::Type,
            dialogflow_es::EncryptionSpecServiceBackoffPolicyOption::Type>(
            options
                .get<dialogflow_es::EncryptionSpecServiceRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<dialogflow_es::
                    EncryptionSpecServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        dialogflow_es::EncryptionSpecServiceConnectionIdempotencyPolicyOption>(
        dialogflow_es::
            MakeDefaultEncryptionSpecServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
