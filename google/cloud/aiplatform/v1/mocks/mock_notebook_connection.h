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
// source: google/cloud/aiplatform/v1/notebook_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_NOTEBOOK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_NOTEBOOK_CONNECTION_H

#include "google/cloud/aiplatform/v1/notebook_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `NotebookServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `NotebookServiceClient`. To do so,
 * construct an object of type `NotebookServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockNotebookServiceConnection
    : public aiplatform_v1::NotebookServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateNotebookRuntimeTemplate(Matcher<google::cloud::aiplatform::v1::CreateNotebookRuntimeTemplateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>>,
      CreateNotebookRuntimeTemplate,
      (google::cloud::aiplatform::v1::
           CreateNotebookRuntimeTemplateRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateNotebookRuntimeTemplate(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              CreateNotebookRuntimeTemplate,
              (NoAwaitTag,
               google::cloud::aiplatform::v1::
                   CreateNotebookRuntimeTemplateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateNotebookRuntimeTemplate(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>>,
      CreateNotebookRuntimeTemplate,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>,
      GetNotebookRuntimeTemplate,
      (google::cloud::aiplatform::v1::GetNotebookRuntimeTemplateRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>),
      ListNotebookRuntimeTemplates,
      (google::cloud::aiplatform::v1::ListNotebookRuntimeTemplatesRequest
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookRuntimeTemplate(Matcher<google::cloud::aiplatform::v1::DeleteNotebookRuntimeTemplateRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookRuntimeTemplate,
      (google::cloud::aiplatform::v1::
           DeleteNotebookRuntimeTemplateRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteNotebookRuntimeTemplate(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              DeleteNotebookRuntimeTemplate,
              (NoAwaitTag,
               google::cloud::aiplatform::v1::
                   DeleteNotebookRuntimeTemplateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookRuntimeTemplate(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookRuntimeTemplate,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::NotebookRuntimeTemplate>,
              UpdateNotebookRuntimeTemplate,
              (google::cloud::aiplatform::v1::
                   UpdateNotebookRuntimeTemplateRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AssignNotebookRuntime(Matcher<google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::NotebookRuntime>>,
      AssignNotebookRuntime,
      (google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AssignNotebookRuntime(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, AssignNotebookRuntime,
      (NoAwaitTag,
       google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AssignNotebookRuntime(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::NotebookRuntime>>,
              AssignNotebookRuntime,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::NotebookRuntime>,
      GetNotebookRuntime,
      (google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::NotebookRuntime>),
      ListNotebookRuntimes,
      (google::cloud::aiplatform::v1::ListNotebookRuntimesRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookRuntime(Matcher<google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookRuntime,
      (google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteNotebookRuntime(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteNotebookRuntime,
      (NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookRuntime(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookRuntime, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpgradeNotebookRuntime(Matcher<google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::UpgradeNotebookRuntimeResponse>>,
      UpgradeNotebookRuntime,
      (google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpgradeNotebookRuntime(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UpgradeNotebookRuntime,
      (NoAwaitTag,
       google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpgradeNotebookRuntime(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<
          google::cloud::aiplatform::v1::UpgradeNotebookRuntimeResponse>>,
      UpgradeNotebookRuntime, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartNotebookRuntime(Matcher<google::cloud::aiplatform::v1::StartNotebookRuntimeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<
                  google::cloud::aiplatform::v1::StartNotebookRuntimeResponse>>,
              StartNotebookRuntime,
              (google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StartNotebookRuntime(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StartNotebookRuntime,
              (NoAwaitTag,
               google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StartNotebookRuntime(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<
                  google::cloud::aiplatform::v1::StartNotebookRuntimeResponse>>,
              StartNotebookRuntime,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StopNotebookRuntime(Matcher<google::cloud::aiplatform::v1::StopNotebookRuntimeRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::StopNotebookRuntimeResponse>>,
      StopNotebookRuntime,
      (google::cloud::aiplatform::v1::StopNotebookRuntimeRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, StopNotebookRuntime(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, StopNotebookRuntime,
              (NoAwaitTag,
               google::cloud::aiplatform::v1::StopNotebookRuntimeRequest const&
                   request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// StopNotebookRuntime(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::aiplatform::v1::StopNotebookRuntimeResponse>>,
      StopNotebookRuntime, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateNotebookExecutionJob(Matcher<google::cloud::aiplatform::v1::CreateNotebookExecutionJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::NotebookExecutionJob>>,
      CreateNotebookExecutionJob,
      (google::cloud::aiplatform::v1::CreateNotebookExecutionJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateNotebookExecutionJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateNotebookExecutionJob,
      (NoAwaitTag,
       google::cloud::aiplatform::v1::CreateNotebookExecutionJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateNotebookExecutionJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::NotebookExecutionJob>>,
      CreateNotebookExecutionJob,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::NotebookExecutionJob>,
      GetNotebookExecutionJob,
      (google::cloud::aiplatform::v1::GetNotebookExecutionJobRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::NotebookExecutionJob>),
      ListNotebookExecutionJobs,
      (google::cloud::aiplatform::v1::ListNotebookExecutionJobsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookExecutionJob(Matcher<google::cloud::aiplatform::v1::DeleteNotebookExecutionJobRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookExecutionJob,
      (google::cloud::aiplatform::v1::DeleteNotebookExecutionJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteNotebookExecutionJob(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteNotebookExecutionJob,
      (NoAwaitTag,
       google::cloud::aiplatform::v1::DeleteNotebookExecutionJobRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteNotebookExecutionJob(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteNotebookExecutionJob,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteOperation,
              (google::longrunning::DeleteOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, WaitOperation,
              (google::longrunning::WaitOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_NOTEBOOK_CONNECTION_H
