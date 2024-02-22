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

#include "google/cloud/translate/v3/internal/translation_auth_decorator.h"
#include <google/cloud/translate/v3/translation_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceAuth::TranslationServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TranslationServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceAuth::TranslateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TranslateText(context, options, request);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceAuth::DetectLanguage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DetectLanguage(context, options, request);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceAuth::GetSupportedLanguages(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSupportedLanguages(context, options, request);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceAuth::TranslateDocument(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TranslateDocument(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceAuth::AsyncBatchTranslateText(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchTranslateText(cq, *std::move(context), options,
                                              request);
      });
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceAuth::AsyncBatchTranslateDocument(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncBatchTranslateDocument(cq, *std::move(context),
                                                  options, request);
      });
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceAuth::AsyncCreateGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateGlossary(cq, *std::move(context), options,
                                          request);
      });
}

StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
TranslationServiceAuth::ListGlossaries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListGlossariesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListGlossaries(context, options, request);
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceAuth::GetGlossary(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGlossary(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceAuth::AsyncDeleteGlossary(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteGlossary(cq, *std::move(context), options,
                                          request);
      });
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceAuth::CreateAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::CreateAdaptiveMtDatasetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAdaptiveMtDataset(context, options, request);
}

Status TranslationServiceAuth::DeleteAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtDatasetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtDataset>
TranslationServiceAuth::GetAdaptiveMtDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtDatasetRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAdaptiveMtDataset(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtDatasetsResponse>
TranslationServiceAuth::ListAdaptiveMtDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtDatasetsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAdaptiveMtDatasets(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtTranslateResponse>
TranslationServiceAuth::AdaptiveMtTranslate(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::AdaptiveMtTranslateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AdaptiveMtTranslate(context, options, request);
}

StatusOr<google::cloud::translation::v3::AdaptiveMtFile>
TranslationServiceAuth::GetAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::GetAdaptiveMtFileRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAdaptiveMtFile(context, options, request);
}

Status TranslationServiceAuth::DeleteAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::DeleteAdaptiveMtFileRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ImportAdaptiveMtFileResponse>
TranslationServiceAuth::ImportAdaptiveMtFile(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ImportAdaptiveMtFileRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportAdaptiveMtFile(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtFilesResponse>
TranslationServiceAuth::ListAdaptiveMtFiles(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtFilesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAdaptiveMtFiles(context, options, request);
}

StatusOr<google::cloud::translation::v3::ListAdaptiveMtSentencesResponse>
TranslationServiceAuth::ListAdaptiveMtSentences(
    grpc::ClientContext& context, Options const& options,
    google::cloud::translation::v3::ListAdaptiveMtSentencesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAdaptiveMtSentences(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
TranslationServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), options,
                                        request);
      });
}

future<Status> TranslationServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), options,
                                           request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google
