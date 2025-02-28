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
// source: google/cloud/sql/v1/cloud_sql_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_OPERATIONS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_OPERATIONS_REST_CONNECTION_IMPL_H

#include "google/cloud/sql/v1/internal/sql_operations_rest_stub.h"
#include "google/cloud/sql/v1/internal/sql_operations_retry_traits.h"
#include "google/cloud/sql/v1/sql_operations_connection.h"
#include "google/cloud/sql/v1/sql_operations_connection_idempotency_policy.h"
#include "google/cloud/sql/v1/sql_operations_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlOperationsServiceRestConnectionImpl
    : public sql_v1::SqlOperationsServiceConnection {
 public:
  ~SqlOperationsServiceRestConnectionImpl() override = default;

  SqlOperationsServiceRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<sql_v1_internal::SqlOperationsServiceRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::sql::v1::Operation> Get(
      google::cloud::sql::v1::SqlOperationsGetRequest const& request) override;

  StreamRange<google::cloud::sql::v1::Operation> List(
      google::cloud::sql::v1::SqlOperationsListRequest request) override;

  Status Cancel(google::cloud::sql::v1::SqlOperationsCancelRequest const&
                    request) override;

 private:
  static std::unique_ptr<sql_v1::SqlOperationsServiceRetryPolicy> retry_policy(
      Options const& options) {
    return options.get<sql_v1::SqlOperationsServiceRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<sql_v1::SqlOperationsServiceBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      sql_v1::SqlOperationsServiceConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<sql_v1::SqlOperationsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<sql_v1_internal::SqlOperationsServiceRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_OPERATIONS_REST_CONNECTION_IMPL_H
