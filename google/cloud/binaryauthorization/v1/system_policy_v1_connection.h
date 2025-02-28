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
// source: google/cloud/binaryauthorization/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H

#include "google/cloud/binaryauthorization/v1/internal/system_policy_v1_retry_traits.h"
#include "google/cloud/binaryauthorization/v1/system_policy_v1_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/binaryauthorization/v1/service.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace binaryauthorization_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `SystemPolicyV1Connection`.
class SystemPolicyV1RetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<SystemPolicyV1RetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `SystemPolicyV1Connection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SystemPolicyV1LimitedErrorCountRetryPolicy
    : public SystemPolicyV1RetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit SystemPolicyV1LimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  SystemPolicyV1LimitedErrorCountRetryPolicy(
      SystemPolicyV1LimitedErrorCountRetryPolicy&& rhs) noexcept
      : SystemPolicyV1LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  SystemPolicyV1LimitedErrorCountRetryPolicy(
      SystemPolicyV1LimitedErrorCountRetryPolicy const& rhs) noexcept
      : SystemPolicyV1LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<SystemPolicyV1RetryPolicy> clone() const override {
    return std::make_unique<SystemPolicyV1LimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SystemPolicyV1RetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      binaryauthorization_v1_internal::SystemPolicyV1RetryTraits>
      impl_;
};

/**
 * A retry policy for `SystemPolicyV1Connection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class SystemPolicyV1LimitedTimeRetryPolicy : public SystemPolicyV1RetryPolicy {
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
  explicit SystemPolicyV1LimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  SystemPolicyV1LimitedTimeRetryPolicy(
      SystemPolicyV1LimitedTimeRetryPolicy&& rhs) noexcept
      : SystemPolicyV1LimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  SystemPolicyV1LimitedTimeRetryPolicy(
      SystemPolicyV1LimitedTimeRetryPolicy const& rhs) noexcept
      : SystemPolicyV1LimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<SystemPolicyV1RetryPolicy> clone() const override {
    return std::make_unique<SystemPolicyV1LimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = SystemPolicyV1RetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      binaryauthorization_v1_internal::SystemPolicyV1RetryTraits>
      impl_;
};

/**
 * The `SystemPolicyV1Connection` object for `SystemPolicyV1Client`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `SystemPolicyV1Client`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `SystemPolicyV1Client`.
 *
 * To create a concrete instance, see `MakeSystemPolicyV1Connection()`.
 *
 * For mocking, see
 * `binaryauthorization_v1_mocks::MockSystemPolicyV1Connection`.
 */
class SystemPolicyV1Connection {
 public:
  virtual ~SystemPolicyV1Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::binaryauthorization::v1::Policy>
  GetSystemPolicy(
      google::cloud::binaryauthorization::v1::GetSystemPolicyRequest const&
          request);
};

/**
 * A factory function to construct an object of type `SystemPolicyV1Connection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of SystemPolicyV1Client.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `SystemPolicyV1Connection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::binaryauthorization_v1::SystemPolicyV1PolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `SystemPolicyV1Connection` created by
 * this function.
 */
std::shared_ptr<SystemPolicyV1Connection> MakeSystemPolicyV1Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_SYSTEM_POLICY_V1_CONNECTION_H
