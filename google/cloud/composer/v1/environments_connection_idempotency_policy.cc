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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/v1/environments_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EnvironmentsConnectionIdempotencyPolicy::
    ~EnvironmentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy>
EnvironmentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<EnvironmentsConnectionIdempotencyPolicy>(*this);
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::CreateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::GetEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::ListEnvironments(
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::UpdateEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::DeleteEnvironment(
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::ExecuteAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        ExecuteAirflowCommandRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::StopAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        StopAirflowCommandRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::PollAirflowCommand(
    google::cloud::orchestration::airflow::service::v1::
        PollAirflowCommandRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::ListWorkloads(
    google::cloud::orchestration::airflow::service::v1::
        ListWorkloadsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::CheckUpgrade(
    google::cloud::orchestration::airflow::service::v1::
        CheckUpgradeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::CreateUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsSecretRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::GetUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsSecretRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::ListUserWorkloadsSecrets(
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsSecretsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::UpdateUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsSecretRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::DeleteUserWorkloadsSecret(
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsSecretRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
EnvironmentsConnectionIdempotencyPolicy::CreateUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        CreateUserWorkloadsConfigMapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::GetUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        GetUserWorkloadsConfigMapRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
EnvironmentsConnectionIdempotencyPolicy::ListUserWorkloadsConfigMaps(
    google::cloud::orchestration::airflow::service::v1::
        ListUserWorkloadsConfigMapsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
EnvironmentsConnectionIdempotencyPolicy::UpdateUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        UpdateUserWorkloadsConfigMapRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
EnvironmentsConnectionIdempotencyPolicy::DeleteUserWorkloadsConfigMap(
    google::cloud::orchestration::airflow::service::v1::
        DeleteUserWorkloadsConfigMapRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::SaveSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::LoadSnapshot(
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::DatabaseFailover(
    google::cloud::orchestration::airflow::service::v1::
        DatabaseFailoverRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::FetchDatabaseProperties(
    google::cloud::orchestration::airflow::service::v1::
        FetchDatabasePropertiesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency EnvironmentsConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<EnvironmentsConnectionIdempotencyPolicy>
MakeDefaultEnvironmentsConnectionIdempotencyPolicy() {
  return std::make_unique<EnvironmentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1
}  // namespace cloud
}  // namespace google
