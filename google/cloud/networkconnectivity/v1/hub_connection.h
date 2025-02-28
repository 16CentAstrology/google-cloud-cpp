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
// source: google/cloud/networkconnectivity/v1/hub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_HUB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_HUB_CONNECTION_H

#include "google/cloud/networkconnectivity/v1/hub_connection_idempotency_policy.h"
#include "google/cloud/networkconnectivity/v1/internal/hub_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/networkconnectivity/v1/common.pb.h>
#include <google/cloud/networkconnectivity/v1/hub.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `HubServiceConnection`.
class HubServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<HubServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `HubServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class HubServiceLimitedErrorCountRetryPolicy : public HubServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit HubServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  HubServiceLimitedErrorCountRetryPolicy(
      HubServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : HubServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  HubServiceLimitedErrorCountRetryPolicy(
      HubServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : HubServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<HubServiceRetryPolicy> clone() const override {
    return std::make_unique<HubServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = HubServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      networkconnectivity_v1_internal::HubServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `HubServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class HubServiceLimitedTimeRetryPolicy : public HubServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit HubServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  HubServiceLimitedTimeRetryPolicy(
      HubServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : HubServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  HubServiceLimitedTimeRetryPolicy(
      HubServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : HubServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<HubServiceRetryPolicy> clone() const override {
    return std::make_unique<HubServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = HubServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      networkconnectivity_v1_internal::HubServiceRetryTraits>
      impl_;
};

/**
 * The `HubServiceConnection` object for `HubServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `HubServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `HubServiceClient`.
 *
 * To create a concrete instance, see `MakeHubServiceConnection()`.
 *
 * For mocking, see `networkconnectivity_v1_mocks::MockHubServiceConnection`.
 */
class HubServiceConnection {
 public:
  virtual ~HubServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::networkconnectivity::v1::Hub> ListHubs(
      google::cloud::networkconnectivity::v1::ListHubsRequest request);

  virtual StatusOr<google::cloud::networkconnectivity::v1::Hub> GetHub(
      google::cloud::networkconnectivity::v1::GetHubRequest const& request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
  CreateHub(
      google::cloud::networkconnectivity::v1::CreateHubRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateHub(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::CreateHubRequest const& request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
  CreateHub(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
  UpdateHub(
      google::cloud::networkconnectivity::v1::UpdateHubRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateHub(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::UpdateHubRequest const& request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
  UpdateHub(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeleteHub(
      google::cloud::networkconnectivity::v1::DeleteHubRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteHub(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::DeleteHubRequest const& request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeleteHub(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::networkconnectivity::v1::Spoke>
  ListHubSpokes(
      google::cloud::networkconnectivity::v1::ListHubSpokesRequest request);

  virtual StreamRange<google::cloud::networkconnectivity::v1::HubStatusEntry>
  QueryHubStatus(
      google::cloud::networkconnectivity::v1::QueryHubStatusRequest request);

  virtual StreamRange<google::cloud::networkconnectivity::v1::Spoke> ListSpokes(
      google::cloud::networkconnectivity::v1::ListSpokesRequest request);

  virtual StatusOr<google::cloud::networkconnectivity::v1::Spoke> GetSpoke(
      google::cloud::networkconnectivity::v1::GetSpokeRequest const& request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
  CreateSpoke(google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
                  request);

  virtual StatusOr<google::longrunning::Operation> CreateSpoke(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
  CreateSpoke(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
  UpdateSpoke(google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
                  request);

  virtual StatusOr<google::longrunning::Operation> UpdateSpoke(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
  UpdateSpoke(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
  RejectHubSpoke(
      google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> RejectHubSpoke(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
  RejectHubSpoke(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
  AcceptHubSpoke(
      google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> AcceptHubSpoke(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
  AcceptHubSpoke(google::longrunning::Operation const& operation);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeleteSpoke(google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
                  request);

  virtual StatusOr<google::longrunning::Operation> DeleteSpoke(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
          request);

  virtual future<
      StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
  DeleteSpoke(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
  GetRouteTable(
      google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
          request);

  virtual StatusOr<google::cloud::networkconnectivity::v1::Route> GetRoute(
      google::cloud::networkconnectivity::v1::GetRouteRequest const& request);

  virtual StreamRange<google::cloud::networkconnectivity::v1::Route> ListRoutes(
      google::cloud::networkconnectivity::v1::ListRoutesRequest request);

  virtual StreamRange<google::cloud::networkconnectivity::v1::RouteTable>
  ListRouteTables(
      google::cloud::networkconnectivity::v1::ListRouteTablesRequest request);

  virtual StatusOr<google::cloud::networkconnectivity::v1::Group> GetGroup(
      google::cloud::networkconnectivity::v1::GetGroupRequest const& request);

  virtual StreamRange<google::cloud::networkconnectivity::v1::Group> ListGroups(
      google::cloud::networkconnectivity::v1::ListGroupsRequest request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Group>>
  UpdateGroup(google::cloud::networkconnectivity::v1::UpdateGroupRequest const&
                  request);

  virtual StatusOr<google::longrunning::Operation> UpdateGroup(
      NoAwaitTag,
      google::cloud::networkconnectivity::v1::UpdateGroupRequest const&
          request);

  virtual future<StatusOr<google::cloud::networkconnectivity::v1::Group>>
  UpdateGroup(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `HubServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of HubServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `HubServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::networkconnectivity_v1::HubServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `HubServiceConnection` created by
 * this function.
 */
std::shared_ptr<HubServiceConnection> MakeHubServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NETWORKCONNECTIVITY_V1_HUB_CONNECTION_H
