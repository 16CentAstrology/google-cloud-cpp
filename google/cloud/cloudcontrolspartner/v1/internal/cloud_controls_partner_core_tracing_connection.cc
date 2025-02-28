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
// source: google/cloud/cloudcontrolspartner/v1/core.proto

#include "google/cloud/cloudcontrolspartner/v1/internal/cloud_controls_partner_core_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudcontrolspartner_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudControlsPartnerCoreTracingConnection::
    CloudControlsPartnerCoreTracingConnection(
        std::shared_ptr<
            cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreTracingConnection::GetWorkload(
    google::cloud::cloudcontrolspartner::v1::GetWorkloadRequest const&
        request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "GetWorkload");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetWorkload(request));
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Workload>
CloudControlsPartnerCoreTracingConnection::ListWorkloads(
    google::cloud::cloudcontrolspartner::v1::ListWorkloadsRequest request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "ListWorkloads");
  internal::OTelScope scope(span);
  auto sr = child_->ListWorkloads(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cloudcontrolspartner::v1::Workload>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreTracingConnection::GetCustomer(
    google::cloud::cloudcontrolspartner::v1::GetCustomerRequest const&
        request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "GetCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCustomer(request));
}

StreamRange<google::cloud::cloudcontrolspartner::v1::Customer>
CloudControlsPartnerCoreTracingConnection::ListCustomers(
    google::cloud::cloudcontrolspartner::v1::ListCustomersRequest request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "ListCustomers");
  internal::OTelScope scope(span);
  auto sr = child_->ListCustomers(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cloudcontrolspartner::v1::Customer>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::EkmConnections>
CloudControlsPartnerCoreTracingConnection::GetEkmConnections(
    google::cloud::cloudcontrolspartner::v1::GetEkmConnectionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "GetEkmConnections");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEkmConnections(request));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::PartnerPermissions>
CloudControlsPartnerCoreTracingConnection::GetPartnerPermissions(
    google::cloud::cloudcontrolspartner::v1::GetPartnerPermissionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "GetPartnerPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPartnerPermissions(request));
}

StreamRange<google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>
CloudControlsPartnerCoreTracingConnection::ListAccessApprovalRequests(
    google::cloud::cloudcontrolspartner::v1::ListAccessApprovalRequestsRequest
        request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "ListAccessApprovalRequests");
  internal::OTelScope scope(span);
  auto sr = child_->ListAccessApprovalRequests(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cloudcontrolspartner::v1::AccessApprovalRequest>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::cloudcontrolspartner::v1::Partner>
CloudControlsPartnerCoreTracingConnection::GetPartner(
    google::cloud::cloudcontrolspartner::v1::GetPartnerRequest const& request) {
  auto span = internal::MakeSpan(
      "cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection::"
      "GetPartner");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPartner(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection>
MakeCloudControlsPartnerCoreTracingConnection(
    std::shared_ptr<cloudcontrolspartner_v1::CloudControlsPartnerCoreConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudControlsPartnerCoreTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudcontrolspartner_v1_internal
}  // namespace cloud
}  // namespace google
