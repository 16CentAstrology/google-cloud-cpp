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
// source: google/cloud/bigquery/v2/job.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MOCKS_MOCK_JOB_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MOCKS_MOCK_JOB_CONNECTION_H

#include "google/cloud/bigquerycontrol/v2/job_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `JobServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `JobServiceClient`. To do so,
 * construct an object of type `JobServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockJobServiceConnection
    : public bigquerycontrol_v2::JobServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::v2::JobCancelResponse>,
              CancelJob,
              (google::cloud::bigquery::v2::CancelJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::v2::Job>, GetJob,
              (google::cloud::bigquery::v2::GetJobRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::v2::Job>, InsertJob,
              (google::cloud::bigquery::v2::InsertJobRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteJob,
              (google::cloud::bigquery::v2::DeleteJobRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::bigquery::v2::ListFormatJob>),
              ListJobs, (google::cloud::bigquery::v2::ListJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::bigquery::v2::GetQueryResultsResponse>,
      GetQueryResults,
      (google::cloud::bigquery::v2::GetQueryResultsRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::bigquery::v2::QueryResponse>, Query,
              (google::cloud::bigquery::v2::PostQueryRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MOCKS_MOCK_JOB_CONNECTION_H
