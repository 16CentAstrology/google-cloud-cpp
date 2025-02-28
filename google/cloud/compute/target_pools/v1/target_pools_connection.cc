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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#include "google/cloud/compute/target_pools/v1/target_pools_connection.h"
#include "google/cloud/compute/target_pools/v1/internal/target_pools_option_defaults.h"
#include "google/cloud/compute/target_pools/v1/internal/target_pools_tracing_connection.h"
#include "google/cloud/compute/target_pools/v1/target_pools_options.h"
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
namespace compute_target_pools_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetPoolsConnection::~TargetPoolsConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::AddHealthCheck(
    google::cloud::cpp::compute::target_pools::v1::
        AddHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::AddHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    AddHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::AddHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::AddInstance(
    google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::AddInstance(
    NoAwaitTag,
    google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::AddInstance(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::TargetPoolsScopedList>>
TargetPoolsConnection::AggregatedListTargetPools(
    google::cloud::cpp::compute::target_pools::v1::
        AggregatedListTargetPoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string,
                google::cloud::cpp::compute::v1::TargetPoolsScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::DeleteTargetPool(
    google::cloud::cpp::compute::target_pools::v1::
        DeleteTargetPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::DeleteTargetPool(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    DeleteTargetPoolRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::DeleteTargetPool(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::TargetPool>
TargetPoolsConnection::GetTargetPool(google::cloud::cpp::compute::target_pools::
                                         v1::GetTargetPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth>
TargetPoolsConnection::GetHealth(
    google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::InsertTargetPool(
    google::cloud::cpp::compute::target_pools::v1::
        InsertTargetPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::InsertTargetPool(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    InsertTargetPoolRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::InsertTargetPool(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::TargetPool>
TargetPoolsConnection::ListTargetPools(
    google::cloud::cpp::compute::target_pools::v1::
        ListTargetPoolsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::TargetPool>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::RemoveHealthCheck(
    google::cloud::cpp::compute::target_pools::v1::
        RemoveHealthCheckRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::RemoveHealthCheck(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    RemoveHealthCheckRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::RemoveHealthCheck(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::RemoveInstance(
    google::cloud::cpp::compute::target_pools::v1::
        RemoveInstanceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::RemoveInstance(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    RemoveInstanceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::RemoveInstance(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::SetBackup(
    google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::SetBackup(
    NoAwaitTag,
    google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::SetBackup(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::target_pools::v1::
        SetSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
TargetPoolsConnection::SetSecurityPolicy(
    NoAwaitTag, google::cloud::cpp::compute::target_pools::v1::
                    SetSecurityPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetPoolsConnection::SetSecurityPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1
}  // namespace cloud
}  // namespace google
