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
// source: google/cloud/compute/target_instances/v1/target_instances.proto

#include "google/cloud/compute/target_instances/v1/target_instances_connection.h"
#include "google/cloud/compute/target_instances/v1/internal/target_instances_option_defaults.h"
#include "google/cloud/compute/target_instances/v1/internal/target_instances_tracing_connection.h"
#include "google/cloud/compute/target_instances/v1/target_instances_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_target_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetInstancesConnection::~TargetInstancesConnection() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::TargetInstancesScopedList>>
TargetInstancesConnection::AggregatedListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        AggregatedListTargetInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetInstancesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::DeleteTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        DeleteTargetInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetInstancesConnection::DeleteTargetInstance(
    NoAwaitTag, google::cloud::cpp::compute::target_instances::v1::
                    DeleteTargetInstanceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::DeleteTargetInstance(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesConnection::GetTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        GetTargetInstanceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::InsertTargetInstance(
    google::cloud::cpp::compute::target_instances::v1::
        InsertTargetInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetInstancesConnection::InsertTargetInstance(
    NoAwaitTag, google::cloud::cpp::compute::target_instances::v1::
                    InsertTargetInstanceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::InsertTargetInstance(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::TargetInstance>
TargetInstancesConnection::ListTargetInstances(
    google::cloud::cpp::compute::target_instances::v1::
        ListTargetInstancesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetInstance>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::target_instances::v1::
        SetSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetInstancesConnection::SetSecurityPolicy(
    NoAwaitTag, google::cloud::cpp::compute::target_instances::v1::
                    SetSecurityPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetInstancesConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_instances_v1
}  // namespace cloud
}  // namespace google
