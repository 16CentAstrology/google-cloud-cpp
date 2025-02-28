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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_NOTEBOOK_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_NOTEBOOK_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/notebooks/v1/service.grpc.pb.h>
#include <google/cloud/notebooks/v1/service.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace notebooks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NotebookServiceStub {
 public:
  virtual ~NotebookServiceStub() = 0;

  virtual StatusOr<google::cloud::notebooks::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRegisterInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> RegisterInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncSetInstanceAccelerator(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> SetInstanceAccelerator(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncSetInstanceMachineType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> SetInstanceMachineType(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateInstanceConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateShieldedInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateShieldedInstanceConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncSetInstanceLabels(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> SetInstanceLabels(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
  UpdateInstanceMetadataItems(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StartInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> StartInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StartInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StopInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> StopInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StopInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ResetInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> ResetInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ResetInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncReportInstanceInfo(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> ReportInstanceInfo(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
  IsInstanceUpgradeable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
  GetInstanceHealth(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetInstanceHealthRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpgradeInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncRollbackInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> RollbackInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDiagnoseInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DiagnoseInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpgradeInstanceInternal(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpgradeInstanceInternal(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
  ListEnvironments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListEnvironmentsRequest const& request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetEnvironmentRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateEnvironmentRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse>
  ListSchedules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListSchedulesRequest const& request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::Schedule> GetSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetScheduleRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateScheduleRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateScheduleRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncTriggerSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> TriggerSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse>
  ListExecutions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListExecutionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::notebooks::v1::Execution> GetExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetExecutionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteExecution(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateExecutionRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateExecution(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateExecutionRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultNotebookServiceStub : public NotebookServiceStub {
 public:
  DefaultNotebookServiceStub(
      std::unique_ptr<
          google::cloud::notebooks::v1::NotebookService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  StatusOr<google::cloud::notebooks::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListInstancesRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRegisterInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RegisterInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::RegisterInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncSetInstanceAccelerator(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> SetInstanceAccelerator(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceAcceleratorRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSetInstanceMachineType(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> SetInstanceMachineType(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceMachineTypeRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateInstanceConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpdateInstanceConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateShieldedInstanceConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateShieldedInstanceConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpdateShieldedInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSetInstanceLabels(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> SetInstanceLabels(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::SetInstanceLabelsRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::UpdateInstanceMetadataItemsResponse>
  UpdateInstanceMetadataItems(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::UpdateInstanceMetadataItemsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StartInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StartInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StartInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::StopInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> StopInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::StopInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncResetInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ResetInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ResetInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ResetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncReportInstanceInfo(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ReportInstanceInfo(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::ReportInstanceInfoRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::IsInstanceUpgradeableResponse>
  IsInstanceUpgradeable(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::IsInstanceUpgradeableRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::GetInstanceHealthResponse>
  GetInstanceHealth(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetInstanceHealthRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpgradeInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpgradeInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRollbackInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> RollbackInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::RollbackInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDiagnoseInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DiagnoseInstance(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DiagnoseInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstanceInternal(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpgradeInstanceInternal(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::UpgradeInstanceInternalRequest const&
          request) override;

  StatusOr<google::cloud::notebooks::v1::ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context, Options const& options,
                   google::cloud::notebooks::v1::ListEnvironmentsRequest const&
                       request) override;

  StatusOr<google::cloud::notebooks::v1::Environment> GetEnvironment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteEnvironment(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::ListSchedulesResponse> ListSchedules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListSchedulesRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::Schedule> GetSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetScheduleRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteScheduleRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateScheduleRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateScheduleRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncTriggerSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> TriggerSchedule(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::TriggerScheduleRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::ListExecutionsResponse> ListExecutions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::ListExecutionsRequest const& request)
      override;

  StatusOr<google::cloud::notebooks::v1::Execution> GetExecution(
      grpc::ClientContext& context, Options const& options,
      google::cloud::notebooks::v1::GetExecutionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteExecution(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::DeleteExecutionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::notebooks::v1::CreateExecutionRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateExecution(
      grpc::ClientContext& context, Options options,
      google::cloud::notebooks::v1::CreateExecutionRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::notebooks::v1::NotebookService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_V1_INTERNAL_NOTEBOOK_STUB_H
