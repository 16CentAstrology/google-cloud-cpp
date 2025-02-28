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
// source: google/cloud/clouddms/v1/clouddms.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_H

#include "google/cloud/datamigration/v1/data_migration_connection_idempotency_policy.h"
#include "google/cloud/datamigration/v1/internal/data_migration_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/clouddms/v1/clouddms.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datamigration_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DataMigrationServiceConnection`.
class DataMigrationServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DataMigrationServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DataMigrationServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataMigrationServiceLimitedErrorCountRetryPolicy
    : public DataMigrationServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DataMigrationServiceLimitedErrorCountRetryPolicy(
      int maximum_failures)
      : impl_(maximum_failures) {}

  DataMigrationServiceLimitedErrorCountRetryPolicy(
      DataMigrationServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DataMigrationServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}
  DataMigrationServiceLimitedErrorCountRetryPolicy(
      DataMigrationServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DataMigrationServiceLimitedErrorCountRetryPolicy(
            rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DataMigrationServiceRetryPolicy> clone() const override {
    return std::make_unique<DataMigrationServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataMigrationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      datamigration_v1_internal::DataMigrationServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `DataMigrationServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DataMigrationServiceLimitedTimeRetryPolicy
    : public DataMigrationServiceRetryPolicy {
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
  explicit DataMigrationServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DataMigrationServiceLimitedTimeRetryPolicy(
      DataMigrationServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : DataMigrationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DataMigrationServiceLimitedTimeRetryPolicy(
      DataMigrationServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : DataMigrationServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<DataMigrationServiceRetryPolicy> clone() const override {
    return std::make_unique<DataMigrationServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DataMigrationServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      datamigration_v1_internal::DataMigrationServiceRetryTraits>
      impl_;
};

/**
 * The `DataMigrationServiceConnection` object for `DataMigrationServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DataMigrationServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `DataMigrationServiceClient`.
 *
 * To create a concrete instance, see `MakeDataMigrationServiceConnection()`.
 *
 * For mocking, see
 * `datamigration_v1_mocks::MockDataMigrationServiceConnection`.
 */
class DataMigrationServiceConnection {
 public:
  virtual ~DataMigrationServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::clouddms::v1::MigrationJob>
  ListMigrationJobs(
      google::cloud::clouddms::v1::ListMigrationJobsRequest request);

  virtual StatusOr<google::cloud::clouddms::v1::MigrationJob> GetMigrationJob(
      google::cloud::clouddms::v1::GetMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  CreateMigrationJob(
      google::cloud::clouddms::v1::CreateMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::CreateMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  CreateMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  UpdateMigrationJob(
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::UpdateMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  UpdateMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteMigrationJob(
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::DeleteMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  StartMigrationJob(
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> StartMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::StartMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  StartMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  StopMigrationJob(
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> StopMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::StopMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  StopMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  ResumeMigrationJob(
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ResumeMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::ResumeMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  ResumeMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  PromoteMigrationJob(
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> PromoteMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::PromoteMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  PromoteMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  VerifyMigrationJob(
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> VerifyMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::VerifyMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  VerifyMigrationJob(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  RestartMigrationJob(
      google::cloud::clouddms::v1::RestartMigrationJobRequest const& request);

  virtual StatusOr<google::longrunning::Operation> RestartMigrationJob(
      NoAwaitTag,
      google::cloud::clouddms::v1::RestartMigrationJobRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::MigrationJob>>
  RestartMigrationJob(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::clouddms::v1::SshScript> GenerateSshScript(
      google::cloud::clouddms::v1::GenerateSshScriptRequest const& request);

  virtual StatusOr<google::cloud::clouddms::v1::TcpProxyScript>
  GenerateTcpProxyScript(
      google::cloud::clouddms::v1::GenerateTcpProxyScriptRequest const&
          request);

  virtual StreamRange<google::cloud::clouddms::v1::ConnectionProfile>
  ListConnectionProfiles(
      google::cloud::clouddms::v1::ListConnectionProfilesRequest request);

  virtual StatusOr<google::cloud::clouddms::v1::ConnectionProfile>
  GetConnectionProfile(
      google::cloud::clouddms::v1::GetConnectionProfileRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  CreateConnectionProfile(
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateConnectionProfile(
      NoAwaitTag,
      google::cloud::clouddms::v1::CreateConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  CreateConnectionProfile(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  UpdateConnectionProfile(
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateConnectionProfile(
      NoAwaitTag,
      google::cloud::clouddms::v1::UpdateConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConnectionProfile>>
  UpdateConnectionProfile(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConnectionProfile(
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteConnectionProfile(
      NoAwaitTag,
      google::cloud::clouddms::v1::DeleteConnectionProfileRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConnectionProfile(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
  CreatePrivateConnection(
      google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreatePrivateConnection(
      NoAwaitTag,
      google::cloud::clouddms::v1::CreatePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::PrivateConnection>>
  CreatePrivateConnection(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::clouddms::v1::PrivateConnection>
  GetPrivateConnection(
      google::cloud::clouddms::v1::GetPrivateConnectionRequest const& request);

  virtual StreamRange<google::cloud::clouddms::v1::PrivateConnection>
  ListPrivateConnections(
      google::cloud::clouddms::v1::ListPrivateConnectionsRequest request);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeletePrivateConnection(
      google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeletePrivateConnection(
      NoAwaitTag,
      google::cloud::clouddms::v1::DeletePrivateConnectionRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeletePrivateConnection(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>
  GetConversionWorkspace(
      google::cloud::clouddms::v1::GetConversionWorkspaceRequest const&
          request);

  virtual StreamRange<google::cloud::clouddms::v1::ConversionWorkspace>
  ListConversionWorkspaces(
      google::cloud::clouddms::v1::ListConversionWorkspacesRequest request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  CreateConversionWorkspace(
      google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CreateConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::CreateConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  CreateConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  UpdateConversionWorkspace(
      google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> UpdateConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::UpdateConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  UpdateConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConversionWorkspace(
      google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> DeleteConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::DeleteConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::OperationMetadata>>
  DeleteConversionWorkspace(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::clouddms::v1::MappingRule> CreateMappingRule(
      google::cloud::clouddms::v1::CreateMappingRuleRequest const& request);

  virtual Status DeleteMappingRule(
      google::cloud::clouddms::v1::DeleteMappingRuleRequest const& request);

  virtual StreamRange<google::cloud::clouddms::v1::MappingRule>
  ListMappingRules(
      google::cloud::clouddms::v1::ListMappingRulesRequest request);

  virtual StatusOr<google::cloud::clouddms::v1::MappingRule> GetMappingRule(
      google::cloud::clouddms::v1::GetMappingRuleRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  SeedConversionWorkspace(
      google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> SeedConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::SeedConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  SeedConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ImportMappingRules(
      google::cloud::clouddms::v1::ImportMappingRulesRequest const& request);

  virtual StatusOr<google::longrunning::Operation> ImportMappingRules(
      NoAwaitTag,
      google::cloud::clouddms::v1::ImportMappingRulesRequest const& request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ImportMappingRules(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ConvertConversionWorkspace(
      google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ConvertConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::ConvertConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ConvertConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  CommitConversionWorkspace(
      google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> CommitConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::CommitConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  CommitConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  RollbackConversionWorkspace(
      google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> RollbackConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::RollbackConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  RollbackConversionWorkspace(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ApplyConversionWorkspace(
      google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
          request);

  virtual StatusOr<google::longrunning::Operation> ApplyConversionWorkspace(
      NoAwaitTag,
      google::cloud::clouddms::v1::ApplyConversionWorkspaceRequest const&
          request);

  virtual future<StatusOr<google::cloud::clouddms::v1::ConversionWorkspace>>
  ApplyConversionWorkspace(google::longrunning::Operation const& operation);

  virtual StreamRange<google::cloud::clouddms::v1::DatabaseEntity>
  DescribeDatabaseEntities(
      google::cloud::clouddms::v1::DescribeDatabaseEntitiesRequest request);

  virtual StatusOr<google::cloud::clouddms::v1::SearchBackgroundJobsResponse>
  SearchBackgroundJobs(
      google::cloud::clouddms::v1::SearchBackgroundJobsRequest const& request);

  virtual StatusOr<
      google::cloud::clouddms::v1::DescribeConversionWorkspaceRevisionsResponse>
  DescribeConversionWorkspaceRevisions(
      google::cloud::clouddms::v1::
          DescribeConversionWorkspaceRevisionsRequest const& request);

  virtual StreamRange<std::string> FetchStaticIps(
      google::cloud::clouddms::v1::FetchStaticIpsRequest request);

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
 * A factory function to construct an object of type
 * `DataMigrationServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * DataMigrationServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DataMigrationServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datamigration_v1::DataMigrationServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DataMigrationServiceConnection`
 * created by this function.
 */
std::shared_ptr<DataMigrationServiceConnection>
MakeDataMigrationServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datamigration_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAMIGRATION_V1_DATA_MIGRATION_CONNECTION_H
