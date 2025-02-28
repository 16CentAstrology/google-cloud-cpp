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
// source: google/cloud/video/transcoder/v1/services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_V1_MOCKS_MOCK_TRANSCODER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_V1_MOCKS_MOCK_TRANSCODER_CONNECTION_H

#include "google/cloud/video/transcoder/v1/transcoder_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace video_transcoder_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TranscoderServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TranscoderServiceClient`. To do so,
 * construct an object of type `TranscoderServiceClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTranscoderServiceConnection
    : public video_transcoder_v1::TranscoderServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::transcoder::v1::Job>, CreateJob,
      (google::cloud::video::transcoder::v1::CreateJobRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::video::transcoder::v1::Job>),
              ListJobs,
              (google::cloud::video::transcoder::v1::ListJobsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::transcoder::v1::Job>, GetJob,
      (google::cloud::video::transcoder::v1::GetJobRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteJob,
      (google::cloud::video::transcoder::v1::DeleteJobRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::transcoder::v1::JobTemplate>,
      CreateJobTemplate,
      (google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
           request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::video::transcoder::v1::JobTemplate>),
      ListJobTemplates,
      (google::cloud::video::transcoder::v1::ListJobTemplatesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::video::transcoder::v1::JobTemplate>,
      GetJobTemplate,
      (google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
           request),
      (override));

  MOCK_METHOD(
      Status, DeleteJobTemplate,
      (google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_transcoder_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_TRANSCODER_V1_MOCKS_MOCK_TRANSCODER_CONNECTION_H
