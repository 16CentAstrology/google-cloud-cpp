// Copyright 2024 Google LLC
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
// source: google/cloud/dialogflow/v2/generator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_GENERATORS_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_GENERATORS_AUTH_DECORATOR_H

#include "google/cloud/dialogflow_es/internal/generators_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GeneratorsAuth : public GeneratorsStub {
 public:
  ~GeneratorsAuth() override = default;
  GeneratorsAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<GeneratorsStub> child);

  StatusOr<google::cloud::dialogflow::v2::Generator> CreateGenerator(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::CreateGeneratorRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Generator> GetGenerator(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::GetGeneratorRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::ListGeneratorsResponse>
  ListGenerators(grpc::ClientContext& context, Options const& options,
                 google::cloud::dialogflow::v2::ListGeneratorsRequest const&
                     request) override;

  Status DeleteGenerator(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::DeleteGeneratorRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::v2::Generator> UpdateGenerator(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::v2::UpdateGeneratorRequest const& request)
      override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<GeneratorsStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTERNAL_GENERATORS_AUTH_DECORATOR_H
