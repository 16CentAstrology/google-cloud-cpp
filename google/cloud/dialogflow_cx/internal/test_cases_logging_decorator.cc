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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/internal/test_cases_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/test_case.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TestCasesLogging::TestCasesLogging(std::shared_ptr<TestCasesStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCasesResponse>
TestCasesLogging::ListTestCases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::ListTestCasesRequest const&
                 request) {
        return child_->ListTestCases(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status TestCasesLogging::BatchDeleteTestCases(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
              request) {
        return child_->BatchDeleteTestCases(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesLogging::GetTestCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::GetTestCaseRequest const&
                 request) {
        return child_->GetTestCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesLogging::CreateTestCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const&
                 request) {
        return child_->CreateTestCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesLogging::UpdateTestCase(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const&
                 request) {
        return child_->UpdateTestCase(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesLogging::AsyncRunTestCase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::RunTestCaseRequest const&
                 request) {
        return child_->AsyncRunTestCase(cq, std::move(context), options,
                                        request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesLogging::AsyncBatchRunTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
                 request) {
        return child_->AsyncBatchRunTestCases(cq, std::move(context), options,
                                              request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesLogging::CalculateCoverage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
                 request) {
        return child_->CalculateCoverage(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesLogging::AsyncImportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const&
                 request) {
        return child_->AsyncImportTestCases(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesLogging::AsyncExportTestCases(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const&
                 request) {
        return child_->AsyncExportTestCases(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::ListTestCaseResultsResponse>
TestCasesLogging::ListTestCaseResults(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest const&
              request) {
        return child_->ListTestCaseResults(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesLogging::GetTestCaseResult(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
                 request) {
        return child_->GetTestCaseResult(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TestCasesLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> TestCasesLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
