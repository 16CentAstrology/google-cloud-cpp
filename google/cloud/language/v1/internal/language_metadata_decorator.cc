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
// source: google/cloud/language/v1/language_service.proto

#include "google/cloud/language/v1/internal/language_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/language/v1/language_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace language_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceMetadata::LanguageServiceMetadata(
    std::shared_ptr<LanguageServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
LanguageServiceMetadata::AnalyzeSentiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
  SetMetadata(context, options);
  return child_->AnalyzeSentiment(context, options, request);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
LanguageServiceMetadata::AnalyzeEntities(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
  SetMetadata(context, options);
  return child_->AnalyzeEntities(context, options, request);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
LanguageServiceMetadata::AnalyzeEntitySentiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request) {
  SetMetadata(context, options);
  return child_->AnalyzeEntitySentiment(context, options, request);
}

StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>
LanguageServiceMetadata::AnalyzeSyntax(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
  SetMetadata(context, options);
  return child_->AnalyzeSyntax(context, options, request);
}

StatusOr<google::cloud::language::v1::ClassifyTextResponse>
LanguageServiceMetadata::ClassifyText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::ClassifyTextRequest const& request) {
  SetMetadata(context, options);
  return child_->ClassifyText(context, options, request);
}

StatusOr<google::cloud::language::v1::ModerateTextResponse>
LanguageServiceMetadata::ModerateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::ModerateTextRequest const& request) {
  SetMetadata(context, options);
  return child_->ModerateText(context, options, request);
}

StatusOr<google::cloud::language::v1::AnnotateTextResponse>
LanguageServiceMetadata::AnnotateText(
    grpc::ClientContext& context, Options const& options,
    google::cloud::language::v1::AnnotateTextRequest const& request) {
  SetMetadata(context, options);
  return child_->AnnotateText(context, options, request);
}

void LanguageServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void LanguageServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_internal
}  // namespace cloud
}  // namespace google
