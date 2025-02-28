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
// source: google/cloud/aiplatform/v1/llm_utility_service.proto

#include "google/cloud/aiplatform/v1/internal/llm_utility_stub_factory.h"
#include "google/cloud/aiplatform/v1/internal/llm_utility_auth_decorator.h"
#include "google/cloud/aiplatform/v1/internal/llm_utility_logging_decorator.h"
#include "google/cloud/aiplatform/v1/internal/llm_utility_metadata_decorator.h"
#include "google/cloud/aiplatform/v1/internal/llm_utility_stub.h"
#include "google/cloud/aiplatform/v1/internal/llm_utility_tracing_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include <google/cloud/aiplatform/v1/llm_utility_service.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<LlmUtilityServiceStub> CreateDefaultLlmUtilityServiceStub(
    std::shared_ptr<internal::GrpcAuthenticationStrategy> auth,
    Options const& options) {
  auto channel = auth->CreateChannel(options.get<EndpointOption>(),
                                     internal::MakeChannelArguments(options));
  auto service_grpc_stub =
      google::cloud::aiplatform::v1::LlmUtilityService::NewStub(channel);
  auto service_operations_stub =
      google::longrunning::Operations::NewStub(channel);
  auto service_iampolicy_stub = google::iam::v1::IAMPolicy::NewStub(channel);
  auto service_locations_stub =
      google::cloud::location::Locations::NewStub(channel);
  std::shared_ptr<LlmUtilityServiceStub> stub =
      std::make_shared<DefaultLlmUtilityServiceStub>(
          std::move(service_grpc_stub), std::move(service_operations_stub),
          std::move(service_iampolicy_stub), std::move(service_locations_stub));

  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<LlmUtilityServiceAuth>(std::move(auth),
                                                   std::move(stub));
  }
  stub = std::make_shared<LlmUtilityServiceMetadata>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(options.get<LoggingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<LlmUtilityServiceLogging>(
        std::move(stub), options.get<GrpcTracingOptionsOption>(),
        options.get<LoggingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = MakeLlmUtilityServiceTracingStub(std::move(stub));
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
