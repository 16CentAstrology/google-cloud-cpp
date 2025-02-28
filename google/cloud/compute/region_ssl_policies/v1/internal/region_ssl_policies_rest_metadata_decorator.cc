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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSslPoliciesRestMetadata::RegionSslPoliciesRestMetadata(
    std::shared_ptr<RegionSslPoliciesRestStub> child,
    std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesRestMetadata::AsyncDeleteSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        DeleteSslPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteSslPolicy(cq, std::move(rest_context),
                                      std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSslPoliciesRestMetadata::DeleteSslPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        DeleteSslPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteSslPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::SslPolicy>
RegionSslPoliciesRestMetadata::GetSslPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        GetSslPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetSslPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesRestMetadata::AsyncInsertSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        InsertSslPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertSslPolicy(cq, std::move(rest_context),
                                      std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSslPoliciesRestMetadata::InsertSslPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        InsertSslPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertSslPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList>
RegionSslPoliciesRestMetadata::ListRegionSslPolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListRegionSslPoliciesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListRegionSslPolicies(rest_context, options, request);
}

StatusOr<
    google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
RegionSslPoliciesRestMetadata::ListAvailableFeatures(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        ListAvailableFeaturesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListAvailableFeatures(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesRestMetadata::AsyncPatchSslPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        PatchSslPolicyRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchSslPolicy(cq, std::move(rest_context),
                                     std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSslPoliciesRestMetadata::PatchSslPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::region_ssl_policies::v1::
        PatchSslPolicyRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->PatchSslPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSslPoliciesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> RegionSslPoliciesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::region_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void RegionSslPoliciesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google
