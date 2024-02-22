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
// source: google/cloud/aiplatform/v1/vizier_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_VIZIER_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_VIZIER_LOGGING_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/vizier_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VizierServiceLogging : public VizierServiceStub {
 public:
  ~VizierServiceLogging() override = default;
  VizierServiceLogging(std::shared_ptr<VizierServiceStub> child,
                       TracingOptions tracing_options,
                       std::set<std::string> const& components);

  StatusOr<google::cloud::aiplatform::v1::Study> CreateStudy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateStudyRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Study> GetStudy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetStudyRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListStudiesResponse> ListStudies(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListStudiesRequest const& request)
      override;

  Status DeleteStudy(grpc::ClientContext& context, Options const& options,
                     google::cloud::aiplatform::v1::DeleteStudyRequest const&
                         request) override;

  StatusOr<google::cloud::aiplatform::v1::Study> LookupStudy(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::LookupStudyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncSuggestTrials(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::SuggestTrialsRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Trial> CreateTrial(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTrialRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Trial> GetTrial(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTrialRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListTrialsResponse> ListTrials(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTrialsRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::Trial> AddTrialMeasurement(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::AddTrialMeasurementRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Trial> CompleteTrial(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CompleteTrialRequest const& request)
      override;

  Status DeleteTrial(grpc::ClientContext& context, Options const& options,
                     google::cloud::aiplatform::v1::DeleteTrialRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCheckTrialEarlyStoppingState(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::CheckTrialEarlyStoppingStateRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::Trial> StopTrial(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::StopTrialRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ListOptimalTrialsResponse>
  ListOptimalTrials(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListOptimalTrialsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<VizierServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // VizierServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_VIZIER_LOGGING_DECORATOR_H
