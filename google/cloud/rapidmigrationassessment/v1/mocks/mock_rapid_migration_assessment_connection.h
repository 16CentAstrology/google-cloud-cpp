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
// source:
// google/cloud/rapidmigrationassessment/v1/rapidmigrationassessment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_MOCKS_MOCK_RAPID_MIGRATION_ASSESSMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_MOCKS_MOCK_RAPID_MIGRATION_ASSESSMENT_CONNECTION_H

#include "google/cloud/rapidmigrationassessment/v1/rapid_migration_assessment_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace rapidmigrationassessment_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RapidMigrationAssessmentConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RapidMigrationAssessmentClient`. To
 * do so, construct an object of type `RapidMigrationAssessmentClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRapidMigrationAssessmentConnection
    : public rapidmigrationassessment_v1::RapidMigrationAssessmentConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateCollector(Matcher<google::cloud::rapidmigrationassessment::v1::CreateCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      CreateCollector,
      (google::cloud::rapidmigrationassessment::v1::
           CreateCollectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateCollector(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateCollector,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               CreateCollectorRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateCollector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      CreateCollector, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateAnnotation(Matcher<google::cloud::rapidmigrationassessment::v1::CreateAnnotationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>,
      CreateAnnotation,
      (google::cloud::rapidmigrationassessment::v1::
           CreateAnnotationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateAnnotation(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, CreateAnnotation,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               CreateAnnotationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, CreateAnnotation(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>>,
      CreateAnnotation, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::rapidmigrationassessment::v1::Annotation>,
      GetAnnotation,
      (google::cloud::rapidmigrationassessment::v1::GetAnnotationRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::rapidmigrationassessment::v1::Collector>),
      ListCollectors,
      (google::cloud::rapidmigrationassessment::v1::ListCollectorsRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>,
      GetCollector,
      (google::cloud::rapidmigrationassessment::v1::GetCollectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UpdateCollector(Matcher<google::cloud::rapidmigrationassessment::v1::UpdateCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      UpdateCollector,
      (google::cloud::rapidmigrationassessment::v1::
           UpdateCollectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UpdateCollector(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, UpdateCollector,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               UpdateCollectorRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, UpdateCollector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      UpdateCollector, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteCollector(Matcher<google::cloud::rapidmigrationassessment::v1::DeleteCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      DeleteCollector,
      (google::cloud::rapidmigrationassessment::v1::
           DeleteCollectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteCollector(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, DeleteCollector,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               DeleteCollectorRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, DeleteCollector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      DeleteCollector, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// ResumeCollector(Matcher<google::cloud::rapidmigrationassessment::v1::ResumeCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      ResumeCollector,
      (google::cloud::rapidmigrationassessment::v1::
           ResumeCollectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, ResumeCollector(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, ResumeCollector,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               ResumeCollectorRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, ResumeCollector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      ResumeCollector, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RegisterCollector(Matcher<google::cloud::rapidmigrationassessment::v1::RegisterCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      RegisterCollector,
      (google::cloud::rapidmigrationassessment::v1::
           RegisterCollectorRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RegisterCollector(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>, RegisterCollector,
              (NoAwaitTag, google::cloud::rapidmigrationassessment::v1::
                               RegisterCollectorRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RegisterCollector(Matcher<google::longrunning::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      RegisterCollector, (google::longrunning::Operation const& operation),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PauseCollector(Matcher<google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      PauseCollector,
      (google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PauseCollector(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, PauseCollector,
      (NoAwaitTag,
       google::cloud::rapidmigrationassessment::v1::PauseCollectorRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock, PauseCollector(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::rapidmigrationassessment::v1::Collector>>,
      PauseCollector, (google::longrunning::Operation const& operation),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
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
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rapidmigrationassessment_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RAPIDMIGRATIONASSESSMENT_V1_MOCKS_MOCK_RAPID_MIGRATION_ASSESSMENT_CONNECTION_H
