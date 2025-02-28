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
// source: google/cloud/compute/health_checks/v1/health_checks.proto

#include "google/cloud/compute/health_checks/v1/internal/health_checks_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HealthChecksRestMetadata::HealthChecksRestMetadata(
    std::shared_ptr<HealthChecksRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::cpp::compute::v1::HealthChecksAggregatedList>
HealthChecksRestMetadata::AggregatedListHealthChecks(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        AggregatedListHealthChecksRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->AggregatedListHealthChecks(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncDeleteHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::health_checks::v1::
        DeleteHealthCheckRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteHealthCheck(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksRestMetadata::DeleteHealthCheck(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        DeleteHealthCheckRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteHealthCheck(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
HealthChecksRestMetadata::GetHealthCheck(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::GetHealthCheckRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetHealthCheck(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncInsertHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::health_checks::v1::
        InsertHealthCheckRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertHealthCheck(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksRestMetadata::InsertHealthCheck(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        InsertHealthCheckRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertHealthCheck(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::HealthCheckList>
HealthChecksRestMetadata::ListHealthChecks(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        ListHealthChecksRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListHealthChecks(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncPatchHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::health_checks::v1::
        PatchHealthCheckRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncPatchHealthCheck(cq, std::move(rest_context),
                                       std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksRestMetadata::PatchHealthCheck(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        PatchHealthCheckRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->PatchHealthCheck(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncUpdateHealthCheck(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::health_checks::v1::
        UpdateHealthCheckRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncUpdateHealthCheck(cq, std::move(rest_context),
                                        std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
HealthChecksRestMetadata::UpdateHealthCheck(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::health_checks::v1::
        UpdateHealthCheckRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->UpdateHealthCheck(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
HealthChecksRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> HealthChecksRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void HealthChecksRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_health_checks_v1_internal
}  // namespace cloud
}  // namespace google
