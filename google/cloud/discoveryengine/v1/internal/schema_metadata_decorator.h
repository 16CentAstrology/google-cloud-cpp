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
// source: google/cloud/discoveryengine/v1/schema_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_METADATA_DECORATOR_H

#include "google/cloud/discoveryengine/v1/internal/schema_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SchemaServiceMetadata : public SchemaServiceStub {
 public:
  ~SchemaServiceMetadata() override = default;
  SchemaServiceMetadata(std::shared_ptr<SchemaServiceStub> child,
                        std::multimap<std::string, std::string> fixed_metadata,
                        std::string api_client_header = "");

  StatusOr<google::cloud::discoveryengine::v1::Schema> GetSchema(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::GetSchemaRequest const& request)
      override;

  StatusOr<google::cloud::discoveryengine::v1::ListSchemasResponse> ListSchemas(
      grpc::ClientContext& context, Options const& options,
      google::cloud::discoveryengine::v1::ListSchemasRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSchema(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::discoveryengine::v1::CreateSchemaRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSchema(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::discoveryengine::v1::UpdateSchemaRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSchema(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::discoveryengine::v1::DeleteSchemaRequest const& request)
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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<SchemaServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_INTERNAL_SCHEMA_METADATA_DECORATOR_H
