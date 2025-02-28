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
// source: google/cloud/bigquery/migration/v2/migration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_CONNECTION_IMPL_H

#include "google/cloud/bigquery/internal/migration_retry_traits.h"
#include "google/cloud/bigquery/internal/migration_stub.h"
#include "google/cloud/bigquery/migration_connection.h"
#include "google/cloud/bigquery/migration_connection_idempotency_policy.h"
#include "google/cloud/bigquery/migration_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MigrationServiceConnectionImpl
    : public bigquery::MigrationServiceConnection {
 public:
  ~MigrationServiceConnectionImpl() override = default;

  MigrationServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<bigquery_internal::MigrationServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  CreateMigrationWorkflow(
      google::cloud::bigquery::migration::v2::
          CreateMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  GetMigrationWorkflow(
      google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
          request) override;

  StreamRange<google::cloud::bigquery::migration::v2::MigrationWorkflow>
  ListMigrationWorkflows(
      google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest
          request) override;

  Status DeleteMigrationWorkflow(
      google::cloud::bigquery::migration::v2::
          DeleteMigrationWorkflowRequest const& request) override;

  Status StartMigrationWorkflow(
      google::cloud::bigquery::migration::v2::
          StartMigrationWorkflowRequest const& request) override;

  StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
  GetMigrationSubtask(
      google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
          request) override;

  StreamRange<google::cloud::bigquery::migration::v2::MigrationSubtask>
  ListMigrationSubtasks(
      google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest
          request) override;

 private:
  std::unique_ptr<bigquery::MigrationServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigquery::MigrationServiceRetryPolicyOption>()) {
      return options.get<bigquery::MigrationServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<bigquery::MigrationServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<bigquery::MigrationServiceBackoffPolicyOption>()) {
      return options.get<bigquery::MigrationServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<bigquery::MigrationServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<bigquery::MigrationServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            bigquery::MigrationServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<bigquery::MigrationServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<bigquery::MigrationServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigquery_internal::MigrationServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_INTERNAL_MIGRATION_CONNECTION_IMPL_H
