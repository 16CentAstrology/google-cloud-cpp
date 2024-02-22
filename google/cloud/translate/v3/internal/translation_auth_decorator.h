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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_AUTH_DECORATOR_H

#include "google/cloud/translate/v3/internal/translation_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranslationServiceAuth : public TranslationServiceStub {
 public:
  ~TranslationServiceAuth() override = default;
  TranslationServiceAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<TranslationServiceStub> child);

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateText(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
  ListGlossaries(grpc::ClientContext& context, Options const& options,
                 google::cloud::translation::v3::ListGlossariesRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  CreateAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
          request) override;

  Status DeleteAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
  GetAdaptiveMtDataset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
  ListAdaptiveMtDatasets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
  AdaptiveMtTranslate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::AdaptiveMtFile> GetAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request)
      override;

  Status DeleteAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
  ImportAdaptiveMtFile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
  ListAdaptiveMtFiles(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
  ListAdaptiveMtSentences(
      grpc::ClientContext& context, Options const& options,
      google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
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
  std::shared_ptr<TranslationServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_AUTH_DECORATOR_H
