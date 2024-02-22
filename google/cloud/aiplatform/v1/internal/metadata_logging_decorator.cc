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
// source: google/cloud/aiplatform/v1/metadata_service.proto

#include "google/cloud/aiplatform/v1/internal/metadata_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/metadata_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MetadataServiceLogging::MetadataServiceLogging(
    std::shared_ptr<MetadataServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncCreateMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::CreateMetadataStoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::aiplatform::v1::CreateMetadataStoreRequest const&
                 request) {
        return child_->AsyncCreateMetadataStore(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::MetadataStore>
MetadataServiceLogging::GetMetadataStore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetMetadataStoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetMetadataStoreRequest const&
                 request) {
        return child_->GetMetadataStore(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataStoresResponse>
MetadataServiceLogging::ListMetadataStores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListMetadataStoresRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListMetadataStoresRequest const&
                 request) {
        return child_->ListMetadataStores(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncDeleteMetadataStore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::aiplatform::v1::DeleteMetadataStoreRequest const&
                 request) {
        return child_->AsyncDeleteMetadataStore(cq, std::move(context), options,
                                                request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceLogging::CreateArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateArtifactRequest const& request) {
        return child_->CreateArtifact(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceLogging::GetArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetArtifactRequest const& request) {
        return child_->GetArtifact(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListArtifactsResponse>
MetadataServiceLogging::ListArtifacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListArtifactsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListArtifactsRequest const& request) {
        return child_->ListArtifacts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Artifact>
MetadataServiceLogging::UpdateArtifact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateArtifactRequest const& request) {
        return child_->UpdateArtifact(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncDeleteArtifact(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteArtifactRequest const& request) {
        return child_->AsyncDeleteArtifact(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncPurgeArtifacts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::PurgeArtifactsRequest const& request) {
        return child_->AsyncPurgeArtifacts(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceLogging::CreateContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateContextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::CreateContextRequest const& request) {
        return child_->CreateContext(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceLogging::GetContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetContextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetContextRequest const& request) {
        return child_->GetContext(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListContextsResponse>
MetadataServiceLogging::ListContexts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListContextsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListContextsRequest const& request) {
        return child_->ListContexts(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Context>
MetadataServiceLogging::UpdateContext(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::UpdateContextRequest const& request) {
        return child_->UpdateContext(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncDeleteContext(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteContextRequest const& request) {
        return child_->AsyncDeleteContext(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncPurgeContexts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::PurgeContextsRequest const& request) {
        return child_->AsyncPurgeContexts(cq, std::move(context), options,
                                          request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::aiplatform::v1::AddContextArtifactsAndExecutionsResponse>
MetadataServiceLogging::AddContextArtifactsAndExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::
        AddContextArtifactsAndExecutionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 AddContextArtifactsAndExecutionsRequest const& request) {
        return child_->AddContextArtifactsAndExecutions(context, options,
                                                        request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::AddContextChildrenResponse>
MetadataServiceLogging::AddContextChildren(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::AddContextChildrenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::AddContextChildrenRequest const&
                 request) {
        return child_->AddContextChildren(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::RemoveContextChildrenResponse>
MetadataServiceLogging::RemoveContextChildren(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::RemoveContextChildrenRequest const&
                 request) {
        return child_->RemoveContextChildren(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceLogging::QueryContextLineageSubgraph(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryContextLineageSubgraphRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 QueryContextLineageSubgraphRequest const& request) {
        return child_->QueryContextLineageSubgraph(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceLogging::CreateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateExecutionRequest const&
                 request) {
        return child_->CreateExecution(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceLogging::GetExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::GetExecutionRequest const& request) {
        return child_->GetExecution(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListExecutionsResponse>
MetadataServiceLogging::ListExecutions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListExecutionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::aiplatform::v1::ListExecutionsRequest const& request) {
        return child_->ListExecutions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::Execution>
MetadataServiceLogging::UpdateExecution(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::UpdateExecutionRequest const&
                 request) {
        return child_->UpdateExecution(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncDeleteExecution(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::DeleteExecutionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::aiplatform::v1::DeleteExecutionRequest const&
                 request) {
        return child_->AsyncDeleteExecution(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncPurgeExecutions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::aiplatform::v1::PurgeExecutionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::aiplatform::v1::PurgeExecutionsRequest const&
                 request) {
        return child_->AsyncPurgeExecutions(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::AddExecutionEventsResponse>
MetadataServiceLogging::AddExecutionEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::AddExecutionEventsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::AddExecutionEventsRequest const&
                 request) {
        return child_->AddExecutionEvents(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceLogging::QueryExecutionInputsAndOutputs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryExecutionInputsAndOutputsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 QueryExecutionInputsAndOutputsRequest const& request) {
        return child_->QueryExecutionInputsAndOutputs(context, options,
                                                      request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceLogging::CreateMetadataSchema(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::CreateMetadataSchemaRequest const&
                 request) {
        return child_->CreateMetadataSchema(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::MetadataSchema>
MetadataServiceLogging::GetMetadataSchema(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetMetadataSchemaRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetMetadataSchemaRequest const&
                 request) {
        return child_->GetMetadataSchema(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::ListMetadataSchemasResponse>
MetadataServiceLogging::ListMetadataSchemas(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListMetadataSchemasRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::ListMetadataSchemasRequest const&
                 request) {
        return child_->ListMetadataSchemas(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::aiplatform::v1::LineageSubgraph>
MetadataServiceLogging::QueryArtifactLineageSubgraph(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::QueryArtifactLineageSubgraphRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::
                 QueryArtifactLineageSubgraphRequest const& request) {
        return child_->QueryArtifactLineageSubgraph(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
MetadataServiceLogging::AsyncGetOperation(
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

future<Status> MetadataServiceLogging::AsyncCancelOperation(
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
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
