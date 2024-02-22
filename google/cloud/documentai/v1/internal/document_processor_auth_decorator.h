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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_AUTH_DECORATOR_H

#include "google/cloud/documentai/v1/internal/document_processor_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DocumentProcessorServiceAuth : public DocumentProcessorServiceStub {
 public:
  ~DocumentProcessorServiceAuth() override = default;
  DocumentProcessorServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<DocumentProcessorServiceStub> child);

  StatusOr<google::cloud::documentai::v1::ProcessResponse> ProcessDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ProcessRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchProcessDocuments(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::BatchProcessRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
  FetchProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::FetchProcessorTypesRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
  ListProcessorTypes(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorTypesRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ProcessorType> GetProcessorType(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorTypeRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
  ListProcessors(grpc::ClientContext& context, Options const& options,
                 google::cloud::documentai::v1::ListProcessorsRequest const&
                     request) override;

  StatusOr<google::cloud::documentai::v1::Processor> GetProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncTrainProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::TrainProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::ProcessorVersion> GetProcessorVersion(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetProcessorVersionRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
  ListProcessorVersions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::ListProcessorVersionsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::DeployProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUndeployProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Processor> CreateProcessor(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::CreateProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::DeleteProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncEnableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::EnableProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDisableProcessor(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::DisableProcessorRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncSetDefaultProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReviewDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::ReviewDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncEvaluateProcessorVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
          request) override;

  StatusOr<google::cloud::documentai::v1::Evaluation> GetEvaluation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::documentai::v1::GetEvaluationRequest const& request)
      override;

  StatusOr<google::cloud::documentai::v1::ListEvaluationsResponse>
  ListEvaluations(grpc::ClientContext& context, Options const& options,
                  google::cloud::documentai::v1::ListEvaluationsRequest const&
                      request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<DocumentProcessorServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_INTERNAL_DOCUMENT_PROCESSOR_AUTH_DECORATOR_H
