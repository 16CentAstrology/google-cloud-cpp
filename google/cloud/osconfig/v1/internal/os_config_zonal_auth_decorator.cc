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
// source: google/cloud/osconfig/v1/osconfig_zonal_service.proto

#include "google/cloud/osconfig/v1/internal/os_config_zonal_auth_decorator.h"
#include <google/cloud/osconfig/v1/osconfig_zonal_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace osconfig_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsConfigZonalServiceAuth::OsConfigZonalServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<OsConfigZonalServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceAuth::AsyncCreateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateOSPolicyAssignment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceAuth::CreateOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::CreateOSPolicyAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateOSPolicyAssignment(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceAuth::AsyncUpdateOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateOSPolicyAssignment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceAuth::UpdateOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::UpdateOSPolicyAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignment>
OsConfigZonalServiceAuth::GetOSPolicyAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentsResponse>
OsConfigZonalServiceAuth::ListOSPolicyAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOSPolicyAssignments(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsResponse>
OsConfigZonalServiceAuth::ListOSPolicyAssignmentRevisions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentRevisionsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOSPolicyAssignmentRevisions(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceAuth::AsyncDeleteOSPolicyAssignment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteOSPolicyAssignment(
            cq, *std::move(context), std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation>
OsConfigZonalServiceAuth::DeleteOSPolicyAssignment(
    grpc::ClientContext& context, Options options,
    google::cloud::osconfig::v1::DeleteOSPolicyAssignmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteOSPolicyAssignment(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::OSPolicyAssignmentReport>
OsConfigZonalServiceAuth::GetOSPolicyAssignmentReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetOSPolicyAssignmentReportRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetOSPolicyAssignmentReport(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsResponse>
OsConfigZonalServiceAuth::ListOSPolicyAssignmentReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListOSPolicyAssignmentReportsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOSPolicyAssignmentReports(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::Inventory>
OsConfigZonalServiceAuth::GetInventory(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetInventoryRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInventory(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListInventoriesResponse>
OsConfigZonalServiceAuth::ListInventories(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListInventoriesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInventories(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::VulnerabilityReport>
OsConfigZonalServiceAuth::GetVulnerabilityReport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::GetVulnerabilityReportRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetVulnerabilityReport(context, options, request);
}

StatusOr<google::cloud::osconfig::v1::ListVulnerabilityReportsResponse>
OsConfigZonalServiceAuth::ListVulnerabilityReports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::osconfig::v1::ListVulnerabilityReportsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListVulnerabilityReports(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
OsConfigZonalServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> OsConfigZonalServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace osconfig_v1_internal
}  // namespace cloud
}  // namespace google
