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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_KNOWLEDGE_BASES_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_KNOWLEDGE_BASES_TRACING_STUB_H

#include "google/cloud/dialogflow_es/internal/knowledge_bases_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class KnowledgeBasesTracingStub : public KnowledgeBasesStub {
 public:
  ~KnowledgeBasesTracingStub() override = default;

  explicit KnowledgeBasesTracingStub(std::shared_ptr<KnowledgeBasesStub> child);

  StatusOr<google::cloud::dialogflow::v2::ListKnowledgeBasesResponse>
  ListKnowledgeBases(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::ListKnowledgeBasesRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> GetKnowledgeBase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> CreateKnowledgeBase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request)
      override;

  Status DeleteKnowledgeBase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> UpdateKnowledgeBase(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request)
      override;

 private:
  std::shared_ptr<KnowledgeBasesStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<KnowledgeBasesStub> MakeKnowledgeBasesTracingStub(
    std::shared_ptr<KnowledgeBasesStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_KNOWLEDGE_BASES_TRACING_STUB_H
