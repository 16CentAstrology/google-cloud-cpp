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

#include "google/cloud/aiplatform/v1/internal/llm_utility_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/aiplatform/v1/llm_utility_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LlmUtilityServiceMetadata::LlmUtilityServiceMetadata(
    std::shared_ptr<LlmUtilityServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::aiplatform::v1::CountTokensResponse>
LlmUtilityServiceMetadata::CountTokens(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::CountTokensRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("endpoint=", internal::UrlEncode(request.endpoint())));
  return child_->CountTokens(context, options, request);
}

StatusOr<google::cloud::aiplatform::v1::ComputeTokensResponse>
LlmUtilityServiceMetadata::ComputeTokens(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ComputeTokensRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("endpoint=", internal::UrlEncode(request.endpoint())));
  return child_->ComputeTokens(context, options, request);
}

void LlmUtilityServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void LlmUtilityServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
