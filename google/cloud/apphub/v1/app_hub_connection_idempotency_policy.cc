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
// source: google/cloud/apphub/v1/apphub_service.proto

#include "google/cloud/apphub/v1/app_hub_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace apphub_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AppHubConnectionIdempotencyPolicy::~AppHubConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<AppHubConnectionIdempotencyPolicy>
AppHubConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<AppHubConnectionIdempotencyPolicy>(*this);
}

Idempotency AppHubConnectionIdempotencyPolicy::LookupServiceProjectAttachment(
    google::cloud::apphub::v1::LookupServiceProjectAttachmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListServiceProjectAttachments(
    google::cloud::apphub::v1::
        ListServiceProjectAttachmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::CreateServiceProjectAttachment(
    google::cloud::apphub::v1::CreateServiceProjectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetServiceProjectAttachment(
    google::cloud::apphub::v1::GetServiceProjectAttachmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DeleteServiceProjectAttachment(
    google::cloud::apphub::v1::DeleteServiceProjectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DetachServiceProjectAttachment(
    google::cloud::apphub::v1::DetachServiceProjectAttachmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListDiscoveredServices(
    google::cloud::apphub::v1::ListDiscoveredServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetDiscoveredService(
    google::cloud::apphub::v1::GetDiscoveredServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::LookupDiscoveredService(
    google::cloud::apphub::v1::LookupDiscoveredServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListServices(
    google::cloud::apphub::v1::ListServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::CreateService(
    google::cloud::apphub::v1::CreateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetService(
    google::cloud::apphub::v1::GetServiceRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::UpdateService(
    google::cloud::apphub::v1::UpdateServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DeleteService(
    google::cloud::apphub::v1::DeleteServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListDiscoveredWorkloads(
    google::cloud::apphub::v1::ListDiscoveredWorkloadsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetDiscoveredWorkload(
    google::cloud::apphub::v1::GetDiscoveredWorkloadRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::LookupDiscoveredWorkload(
    google::cloud::apphub::v1::LookupDiscoveredWorkloadRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListWorkloads(
    google::cloud::apphub::v1::ListWorkloadsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::CreateWorkload(
    google::cloud::apphub::v1::CreateWorkloadRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetWorkload(
    google::cloud::apphub::v1::GetWorkloadRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::UpdateWorkload(
    google::cloud::apphub::v1::UpdateWorkloadRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DeleteWorkload(
    google::cloud::apphub::v1::DeleteWorkloadRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListApplications(
    google::cloud::apphub::v1::ListApplicationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::CreateApplication(
    google::cloud::apphub::v1::CreateApplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetApplication(
    google::cloud::apphub::v1::GetApplicationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::UpdateApplication(
    google::cloud::apphub::v1::UpdateApplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DeleteApplication(
    google::cloud::apphub::v1::DeleteApplicationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppHubConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<AppHubConnectionIdempotencyPolicy>
MakeDefaultAppHubConnectionIdempotencyPolicy() {
  return std::make_unique<AppHubConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apphub_v1
}  // namespace cloud
}  // namespace google
