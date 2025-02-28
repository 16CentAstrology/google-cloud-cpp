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
// source: google/cloud/eventarc/v1/eventarc.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/eventarc/v1/eventarc.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace eventarc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EventarcConnectionIdempotencyPolicy {
 public:
  virtual ~EventarcConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<EventarcConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetTrigger(
      google::cloud::eventarc::v1::GetTriggerRequest const& request);

  virtual google::cloud::Idempotency ListTriggers(
      google::cloud::eventarc::v1::ListTriggersRequest request);

  virtual google::cloud::Idempotency CreateTrigger(
      google::cloud::eventarc::v1::CreateTriggerRequest const& request);

  virtual google::cloud::Idempotency UpdateTrigger(
      google::cloud::eventarc::v1::UpdateTriggerRequest const& request);

  virtual google::cloud::Idempotency DeleteTrigger(
      google::cloud::eventarc::v1::DeleteTriggerRequest const& request);

  virtual google::cloud::Idempotency GetChannel(
      google::cloud::eventarc::v1::GetChannelRequest const& request);

  virtual google::cloud::Idempotency ListChannels(
      google::cloud::eventarc::v1::ListChannelsRequest request);

  virtual google::cloud::Idempotency CreateChannel(
      google::cloud::eventarc::v1::CreateChannelRequest const& request);

  virtual google::cloud::Idempotency UpdateChannel(
      google::cloud::eventarc::v1::UpdateChannelRequest const& request);

  virtual google::cloud::Idempotency DeleteChannel(
      google::cloud::eventarc::v1::DeleteChannelRequest const& request);

  virtual google::cloud::Idempotency GetProvider(
      google::cloud::eventarc::v1::GetProviderRequest const& request);

  virtual google::cloud::Idempotency ListProviders(
      google::cloud::eventarc::v1::ListProvidersRequest request);

  virtual google::cloud::Idempotency GetChannelConnection(
      google::cloud::eventarc::v1::GetChannelConnectionRequest const& request);

  virtual google::cloud::Idempotency ListChannelConnections(
      google::cloud::eventarc::v1::ListChannelConnectionsRequest request);

  virtual google::cloud::Idempotency CreateChannelConnection(
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&
          request);

  virtual google::cloud::Idempotency DeleteChannelConnection(
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&
          request);

  virtual google::cloud::Idempotency GetGoogleChannelConfig(
      google::cloud::eventarc::v1::GetGoogleChannelConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateGoogleChannelConfig(
      google::cloud::eventarc::v1::UpdateGoogleChannelConfigRequest const&
          request);

  virtual google::cloud::Idempotency GetMessageBus(
      google::cloud::eventarc::v1::GetMessageBusRequest const& request);

  virtual google::cloud::Idempotency ListMessageBuses(
      google::cloud::eventarc::v1::ListMessageBusesRequest request);

  virtual google::cloud::Idempotency ListMessageBusEnrollments(
      google::cloud::eventarc::v1::ListMessageBusEnrollmentsRequest const&
          request);

  virtual google::cloud::Idempotency CreateMessageBus(
      google::cloud::eventarc::v1::CreateMessageBusRequest const& request);

  virtual google::cloud::Idempotency UpdateMessageBus(
      google::cloud::eventarc::v1::UpdateMessageBusRequest const& request);

  virtual google::cloud::Idempotency DeleteMessageBus(
      google::cloud::eventarc::v1::DeleteMessageBusRequest const& request);

  virtual google::cloud::Idempotency GetEnrollment(
      google::cloud::eventarc::v1::GetEnrollmentRequest const& request);

  virtual google::cloud::Idempotency ListEnrollments(
      google::cloud::eventarc::v1::ListEnrollmentsRequest request);

  virtual google::cloud::Idempotency CreateEnrollment(
      google::cloud::eventarc::v1::CreateEnrollmentRequest const& request);

  virtual google::cloud::Idempotency UpdateEnrollment(
      google::cloud::eventarc::v1::UpdateEnrollmentRequest const& request);

  virtual google::cloud::Idempotency DeleteEnrollment(
      google::cloud::eventarc::v1::DeleteEnrollmentRequest const& request);

  virtual google::cloud::Idempotency GetPipeline(
      google::cloud::eventarc::v1::GetPipelineRequest const& request);

  virtual google::cloud::Idempotency ListPipelines(
      google::cloud::eventarc::v1::ListPipelinesRequest request);

  virtual google::cloud::Idempotency CreatePipeline(
      google::cloud::eventarc::v1::CreatePipelineRequest const& request);

  virtual google::cloud::Idempotency UpdatePipeline(
      google::cloud::eventarc::v1::UpdatePipelineRequest const& request);

  virtual google::cloud::Idempotency DeletePipeline(
      google::cloud::eventarc::v1::DeletePipelineRequest const& request);

  virtual google::cloud::Idempotency GetGoogleApiSource(
      google::cloud::eventarc::v1::GetGoogleApiSourceRequest const& request);

  virtual google::cloud::Idempotency ListGoogleApiSources(
      google::cloud::eventarc::v1::ListGoogleApiSourcesRequest request);

  virtual google::cloud::Idempotency CreateGoogleApiSource(
      google::cloud::eventarc::v1::CreateGoogleApiSourceRequest const& request);

  virtual google::cloud::Idempotency UpdateGoogleApiSource(
      google::cloud::eventarc::v1::UpdateGoogleApiSourceRequest const& request);

  virtual google::cloud::Idempotency DeleteGoogleApiSource(
      google::cloud::eventarc::v1::DeleteGoogleApiSourceRequest const& request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual google::cloud::Idempotency DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual google::cloud::Idempotency CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

std::unique_ptr<EventarcConnectionIdempotencyPolicy>
MakeDefaultEventarcConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_EVENTARC_V1_EVENTARC_CONNECTION_IDEMPOTENCY_POLICY_H
