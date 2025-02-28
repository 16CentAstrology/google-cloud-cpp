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
// source: google/cloud/functions/v2/functions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_FUNCTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_FUNCTION_CONNECTION_H

#include "google/cloud/functions/v2/function_connection_idempotency_policy.h"
#include "google/cloud/functions/v2/internal/function_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/functions/v2/functions.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace functions_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `FunctionServiceConnection`.
class FunctionServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<FunctionServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `FunctionServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FunctionServiceLimitedErrorCountRetryPolicy
    : public FunctionServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit FunctionServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  FunctionServiceLimitedErrorCountRetryPolicy(
      FunctionServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : FunctionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  FunctionServiceLimitedErrorCountRetryPolicy(
      FunctionServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : FunctionServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<FunctionServiceRetryPolicy> clone() const override {
    return std::make_unique<FunctionServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FunctionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      functions_v2_internal::FunctionServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `FunctionServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class FunctionServiceLimitedTimeRetryPolicy
    : public FunctionServiceRetryPolicy {
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
  explicit FunctionServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  FunctionServiceLimitedTimeRetryPolicy(
      FunctionServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : FunctionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  FunctionServiceLimitedTimeRetryPolicy(
      FunctionServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : FunctionServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<FunctionServiceRetryPolicy> clone() const override {
    return std::make_unique<FunctionServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = FunctionServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      functions_v2_internal::FunctionServiceRetryTraits>
      impl_;
};

/**
 * The `FunctionServiceConnection` object for `FunctionServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `FunctionServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `FunctionServiceClient`.
 *
 * To create a concrete instance, see `MakeFunctionServiceConnection()`.
 *
 * For mocking, see `functions_v2_mocks::MockFunctionServiceConnection`.
 */
class FunctionServiceConnection {
 public:
  virtual ~FunctionServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::functions::v2::Function> GetFunction(
      google::cloud::functions::v2::GetFunctionRequest const& request);

  virtual StreamRange<google::cloud::functions::v2::Function> ListFunctions(
      google::cloud::functions::v2::ListFunctionsRequest request);

  virtual future<StatusOr<google::cloud::functions::v2::Function>>
  CreateFunction(
      google::cloud::functions::v2::CreateFunctionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateFunction(
      NoAwaitTag,
      google::cloud::functions::v2::CreateFunctionRequest const& request);

  virtual future<StatusOr<google::cloud::functions::v2::Function>>
  CreateFunction(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::functions::v2::Function>>
  UpdateFunction(
      google::cloud::functions::v2::UpdateFunctionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateFunction(
      NoAwaitTag,
      google::cloud::functions::v2::UpdateFunctionRequest const& request);

  virtual future<StatusOr<google::cloud::functions::v2::Function>>
  UpdateFunction(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::functions::v2::OperationMetadata>>
  DeleteFunction(
      google::cloud::functions::v2::DeleteFunctionRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteFunction(
      NoAwaitTag,
      google::cloud::functions::v2::DeleteFunctionRequest const& request);

  virtual future<StatusOr<google::cloud::functions::v2::OperationMetadata>>
  DeleteFunction(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::functions::v2::GenerateUploadUrlResponse>
  GenerateUploadUrl(
      google::cloud::functions::v2::GenerateUploadUrlRequest const& request);

  virtual StatusOr<google::cloud::functions::v2::GenerateDownloadUrlResponse>
  GenerateDownloadUrl(
      google::cloud::functions::v2::GenerateDownloadUrlRequest const& request);

  virtual StatusOr<google::cloud::functions::v2::ListRuntimesResponse>
  ListRuntimes(
      google::cloud::functions::v2::ListRuntimesRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

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
};

/**
 * A factory function to construct an object of type
 * `FunctionServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of FunctionServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `FunctionServiceConnection`. Expected options are any of the types
 * in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::functions_v2::FunctionServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `FunctionServiceConnection` created
 * by this function.
 */
std::shared_ptr<FunctionServiceConnection> MakeFunctionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_FUNCTIONS_V2_FUNCTION_CONNECTION_H
