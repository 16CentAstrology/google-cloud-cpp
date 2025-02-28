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
// source: google/cloud/language/v2/language_service.proto

#include "google/cloud/language/v2/internal/language_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace language_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LanguageServiceTracingConnection::LanguageServiceTracingConnection(
    std::shared_ptr<language_v2::LanguageServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::language::v2::AnalyzeSentimentResponse>
LanguageServiceTracingConnection::AnalyzeSentiment(
    google::cloud::language::v2::AnalyzeSentimentRequest const& request) {
  auto span = internal::MakeSpan(
      "language_v2::LanguageServiceConnection::AnalyzeSentiment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnalyzeSentiment(request));
}

StatusOr<google::cloud::language::v2::AnalyzeEntitiesResponse>
LanguageServiceTracingConnection::AnalyzeEntities(
    google::cloud::language::v2::AnalyzeEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "language_v2::LanguageServiceConnection::AnalyzeEntities");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnalyzeEntities(request));
}

StatusOr<google::cloud::language::v2::ClassifyTextResponse>
LanguageServiceTracingConnection::ClassifyText(
    google::cloud::language::v2::ClassifyTextRequest const& request) {
  auto span = internal::MakeSpan(
      "language_v2::LanguageServiceConnection::ClassifyText");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ClassifyText(request));
}

StatusOr<google::cloud::language::v2::ModerateTextResponse>
LanguageServiceTracingConnection::ModerateText(
    google::cloud::language::v2::ModerateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "language_v2::LanguageServiceConnection::ModerateText");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ModerateText(request));
}

StatusOr<google::cloud::language::v2::AnnotateTextResponse>
LanguageServiceTracingConnection::AnnotateText(
    google::cloud::language::v2::AnnotateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "language_v2::LanguageServiceConnection::AnnotateText");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnnotateText(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<language_v2::LanguageServiceConnection>
MakeLanguageServiceTracingConnection(
    std::shared_ptr<language_v2::LanguageServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<LanguageServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v2_internal
}  // namespace cloud
}  // namespace google
