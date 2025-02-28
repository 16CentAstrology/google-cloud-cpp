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
// source: google/cloud/notebooks/v1/service.proto

#include "google/cloud/notebooks/v1/notebook_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace notebooks_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NotebookServiceConnectionIdempotencyPolicy::
    ~NotebookServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
NotebookServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NotebookServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListInstances(
    google::cloud::notebooks::v1::ListInstancesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetInstance(
    google::cloud::notebooks::v1::GetInstanceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::CreateInstance(
    google::cloud::notebooks::v1::CreateInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::RegisterInstance(
    google::cloud::notebooks::v1::RegisterInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::SetInstanceAccelerator(
    google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::SetInstanceMachineType(
    google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::UpdateInstanceConfig(
    google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::UpdateShieldedInstanceConfig(
    google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::SetInstanceLabels(
    google::cloud::notebooks::v1::SetInstanceLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::UpdateInstanceMetadataItems(
    google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteInstance(
    google::cloud::notebooks::v1::DeleteInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::StartInstance(
    google::cloud::notebooks::v1::StartInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::StopInstance(
    google::cloud::notebooks::v1::StopInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ResetInstance(
    google::cloud::notebooks::v1::ResetInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ReportInstanceInfo(
    google::cloud::notebooks::v1::ReportInstanceInfoRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::IsInstanceUpgradeable(
    google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetInstanceHealth(
    google::cloud::notebooks::v1::GetInstanceHealthRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::UpgradeInstance(
    google::cloud::notebooks::v1::UpgradeInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::RollbackInstance(
    google::cloud::notebooks::v1::RollbackInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DiagnoseInstance(
    google::cloud::notebooks::v1::DiagnoseInstanceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::UpgradeInstanceInternal(
    google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListEnvironments(
    google::cloud::notebooks::v1::ListEnvironmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetEnvironment(
    google::cloud::notebooks::v1::GetEnvironmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::CreateEnvironment(
    google::cloud::notebooks::v1::CreateEnvironmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteEnvironment(
    google::cloud::notebooks::v1::DeleteEnvironmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListSchedules(
    google::cloud::notebooks::v1::ListSchedulesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetSchedule(
    google::cloud::notebooks::v1::GetScheduleRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteSchedule(
    google::cloud::notebooks::v1::DeleteScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::CreateSchedule(
    google::cloud::notebooks::v1::CreateScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::TriggerSchedule(
    google::cloud::notebooks::v1::TriggerScheduleRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListExecutions(
    google::cloud::notebooks::v1::ListExecutionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetExecution(
    google::cloud::notebooks::v1::GetExecutionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteExecution(
    google::cloud::notebooks::v1::DeleteExecutionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::CreateExecution(
    google::cloud::notebooks::v1::CreateExecutionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
MakeDefaultNotebookServiceConnectionIdempotencyPolicy() {
  return std::make_unique<NotebookServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1
}  // namespace cloud
}  // namespace google
