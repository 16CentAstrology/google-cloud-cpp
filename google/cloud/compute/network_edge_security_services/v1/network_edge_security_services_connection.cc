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
// source:
// google/cloud/compute/network_edge_security_services/v1/network_edge_security_services.proto

#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_connection.h"
#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_option_defaults.h"
#include "google/cloud/compute/network_edge_security_services/v1/internal/network_edge_security_services_tracing_connection.h"
#include "google/cloud/compute/network_edge_security_services/v1/network_edge_security_services_options.h"
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
namespace compute_network_edge_security_services_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NetworkEdgeSecurityServicesConnection::
    ~NetworkEdgeSecurityServicesConnection() = default;

StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                       NetworkEdgeSecurityServicesScopedList>>
NetworkEdgeSecurityServicesConnection::AggregatedListNetworkEdgeSecurityServices(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        AggregatedListNetworkEdgeSecurityServicesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string, google::cloud::cpp::compute::v1::
                                 NetworkEdgeSecurityServicesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::DeleteNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        DeleteNetworkEdgeSecurityServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkEdgeSecurityServicesConnection::DeleteNetworkEdgeSecurityService(
    NoAwaitTag, google::cloud::cpp::compute::network_edge_security_services::
                    v1::DeleteNetworkEdgeSecurityServiceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::DeleteNetworkEdgeSecurityService(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::NetworkEdgeSecurityService>
NetworkEdgeSecurityServicesConnection::GetNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        GetNetworkEdgeSecurityServiceRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::InsertNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        InsertNetworkEdgeSecurityServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkEdgeSecurityServicesConnection::InsertNetworkEdgeSecurityService(
    NoAwaitTag, google::cloud::cpp::compute::network_edge_security_services::
                    v1::InsertNetworkEdgeSecurityServiceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::InsertNetworkEdgeSecurityService(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::PatchNetworkEdgeSecurityService(
    google::cloud::cpp::compute::network_edge_security_services::v1::
        PatchNetworkEdgeSecurityServiceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
NetworkEdgeSecurityServicesConnection::PatchNetworkEdgeSecurityService(
    NoAwaitTag, google::cloud::cpp::compute::network_edge_security_services::
                    v1::PatchNetworkEdgeSecurityServiceRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
NetworkEdgeSecurityServicesConnection::PatchNetworkEdgeSecurityService(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_edge_security_services_v1
}  // namespace cloud
}  // namespace google
