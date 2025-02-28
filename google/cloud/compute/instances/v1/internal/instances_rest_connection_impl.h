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
// source: google/cloud/compute/instances/v1/instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/instances/v1/instances_connection.h"
#include "google/cloud/compute/instances/v1/instances_connection_idempotency_policy.h"
#include "google/cloud/compute/instances/v1/instances_options.h"
#include "google/cloud/compute/instances/v1/internal/instances_rest_stub.h"
#include "google/cloud/compute/instances/v1/internal/instances_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instances_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstancesRestConnectionImpl
    : public compute_instances_v1::InstancesConnection {
 public:
  ~InstancesRestConnectionImpl() override = default;

  InstancesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_instances_v1_internal::InstancesRestStub> stub,
      Options options);

  Options options() override { return options_; }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddAccessConfig(
      google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddAccessConfig(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::AddAccessConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddAccessConfig(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(google::cloud::cpp::compute::instances::v1::
                          AddResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AddResourcePolicies(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      AddResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AddResourcePolicies(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<std::pair<std::string,
                        google::cloud::cpp::compute::v1::InstancesScopedList>>
  AggregatedListInstances(
      google::cloud::cpp::compute::instances::v1::AggregatedListInstancesRequest
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AttachDisk(
      google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> AttachDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::AttachDiskRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AttachDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> BulkInsert(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::BulkInsertRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> BulkInsert(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteInstance(
      google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteInstance(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::DeleteInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteInstance(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteAccessConfig(google::cloud::cpp::compute::instances::v1::
                         DeleteAccessConfigRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DeleteAccessConfig(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      DeleteAccessConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteAccessConfig(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DetachDisk(
      google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> DetachDisk(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::DetachDiskRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DetachDisk(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Instance> GetInstance(
      google::cloud::cpp::compute::instances::v1::GetInstanceRequest const&
          request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::InstancesGetEffectiveFirewallsResponse>
  GetEffectiveFirewalls(
      google::cloud::cpp::compute::instances::v1::
          GetEffectiveFirewallsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::GuestAttributes> GetGuestAttributes(
      google::cloud::cpp::compute::instances::v1::
          GetGuestAttributesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::instances::v1::GetIamPolicyRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Screenshot> GetScreenshot(
      google::cloud::cpp::compute::instances::v1::GetScreenshotRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::SerialPortOutput>
  GetSerialPortOutput(google::cloud::cpp::compute::instances::v1::
                          GetSerialPortOutputRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ShieldedInstanceIdentity>
  GetShieldedInstanceIdentity(
      google::cloud::cpp::compute::instances::v1::
          GetShieldedInstanceIdentityRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertInstance(
      google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> InsertInstance(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::InsertInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertInstance(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StreamRange<google::cloud::cpp::compute::v1::Instance> ListInstances(
      google::cloud::cpp::compute::instances::v1::ListInstancesRequest request)
      override;

  StreamRange<google::cloud::cpp::compute::v1::Reference> ListReferrers(
      google::cloud::cpp::compute::instances::v1::ListReferrersRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PerformMaintenance(google::cloud::cpp::compute::instances::v1::
                         PerformMaintenanceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> PerformMaintenance(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      PerformMaintenanceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PerformMaintenance(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      google::cloud::cpp::compute::instances::v1::
          RemoveResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> RemoveResourcePolicies(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      RemoveResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  RemoveResourcePolicies(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Reset(
      google::cloud::cpp::compute::instances::v1::ResetRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Reset(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::ResetRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Reset(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resume(
      google::cloud::cpp::compute::instances::v1::ResumeRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Resume(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::ResumeRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Resume(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  Status SendDiagnosticInterrupt(
      google::cloud::cpp::compute::instances::v1::
          SendDiagnosticInterruptRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDeletionProtection(
      google::cloud::cpp::compute::instances::v1::
          SetDeletionProtectionRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetDeletionProtection(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetDeletionProtectionRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDeletionProtection(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDiskAutoDelete(google::cloud::cpp::compute::instances::v1::
                        SetDiskAutoDeleteRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetDiskAutoDelete(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetDiskAutoDeleteRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetDiskAutoDelete(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::instances::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetLabelsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineResources(google::cloud::cpp::compute::instances::v1::
                          SetMachineResourcesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetMachineResources(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetMachineResourcesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMachineResources(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetMachineType(
      google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetMachineType(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetMachineTypeRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetMachineType(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetMetadata(
      google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetMetadata(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetMetadataRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetMetadata(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMinCpuPlatform(google::cloud::cpp::compute::instances::v1::
                        SetMinCpuPlatformRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetMinCpuPlatform(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetMinCpuPlatformRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetMinCpuPlatform(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetName(
      google::cloud::cpp::compute::instances::v1::SetNameRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetName(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetNameRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetName(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetScheduling(
      google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetScheduling(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetSchedulingRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetScheduling(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(google::cloud::cpp::compute::instances::v1::
                        SetSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetSecurityPolicy(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetSecurityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetServiceAccount(google::cloud::cpp::compute::instances::v1::
                        SetServiceAccountRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetServiceAccount(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SetServiceAccountRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetServiceAccount(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetShieldedInstanceIntegrityPolicy(
      google::cloud::cpp::compute::instances::v1::
          SetShieldedInstanceIntegrityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  SetShieldedInstanceIntegrityPolicy(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::
          SetShieldedInstanceIntegrityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetShieldedInstanceIntegrityPolicy(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTags(
      google::cloud::cpp::compute::instances::v1::SetTagsRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetTags(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SetTagsRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetTags(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(
      google::cloud::cpp::compute::instances::v1::
          SimulateMaintenanceEventRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SimulateMaintenanceEvent(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      SimulateMaintenanceEventRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SimulateMaintenanceEvent(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Start(
      google::cloud::cpp::compute::instances::v1::StartRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Start(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::StartRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Start(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartWithEncryptionKey(
      google::cloud::cpp::compute::instances::v1::
          StartWithEncryptionKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> StartWithEncryptionKey(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      StartWithEncryptionKeyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  StartWithEncryptionKey(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Stop(
      google::cloud::cpp::compute::instances::v1::StopRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Stop(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::StopRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Stop(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Suspend(
      google::cloud::cpp::compute::instances::v1::SuspendRequest const& request)
      override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Suspend(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::SuspendRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> Suspend(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::instances::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateInstance(
      google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateInstance(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::UpdateInstanceRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> UpdateInstance(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateAccessConfig(google::cloud::cpp::compute::instances::v1::
                         UpdateAccessConfigRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateAccessConfig(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      UpdateAccessConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateAccessConfig(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateDisplayDevice(google::cloud::cpp::compute::instances::v1::
                          UpdateDisplayDeviceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateDisplayDevice(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      UpdateDisplayDeviceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateDisplayDevice(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateNetworkInterface(
      google::cloud::cpp::compute::instances::v1::
          UpdateNetworkInterfaceRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> UpdateNetworkInterface(
      NoAwaitTag, google::cloud::cpp::compute::instances::v1::
                      UpdateNetworkInterfaceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateNetworkInterface(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateShieldedInstanceConfig(
      google::cloud::cpp::compute::instances::v1::
          UpdateShieldedInstanceConfigRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  UpdateShieldedInstanceConfig(
      NoAwaitTag,
      google::cloud::cpp::compute::instances::v1::
          UpdateShieldedInstanceConfigRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateShieldedInstanceConfig(
      google::cloud::cpp::compute::v1::Operation const& operation) override;

 private:
  static std::unique_ptr<compute_instances_v1::InstancesRetryPolicy>
  retry_policy(Options const& options) {
    return options.get<compute_instances_v1::InstancesRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options.get<compute_instances_v1::InstancesBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_instances_v1::InstancesConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_instances_v1::InstancesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options.get<compute_instances_v1::InstancesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_instances_v1_internal::InstancesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INTERNAL_INSTANCES_REST_CONNECTION_IMPL_H
