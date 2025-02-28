// Copyright 2021 Google LLC
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
// source: google/bigtable/admin/v2/bigtable_instance_admin.proto

#include "google/cloud/bigtable/admin/internal/bigtable_instance_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigtable_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BigtableInstanceAdminTracingStub::BigtableInstanceAdminTracingStub(
    std::shared_ptr<BigtableInstanceAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncCreateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "CreateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateInstance(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::CreateInstance(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "CreateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateInstance(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminTracingStub::GetInstance(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListInstancesResponse>
BigtableInstanceAdminTracingStub::ListInstances(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Instance>
BigtableInstanceAdminTracingStub::UpdateInstance(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::Instance const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "UpdateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateInstance(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncPartialUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.admin.v2.BigtableInstanceAdmin",
                             "PartialUpdateInstance");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPartialUpdateInstance(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::PartialUpdateInstance(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::PartialUpdateInstanceRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.bigtable.admin.v2.BigtableInstanceAdmin",
                             "PartialUpdateInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->PartialUpdateInstance(context, options, request));
}

Status BigtableInstanceAdminTracingStub::DeleteInstance(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "DeleteInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteInstance(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncCreateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "CreateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::CreateCluster(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "CreateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCluster(context, options, request));
}

StatusOr<google::bigtable::admin::v2::Cluster>
BigtableInstanceAdminTracingStub::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListClustersResponse>
BigtableInstanceAdminTracingStub::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::Cluster const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "UpdateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateCluster(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::UpdateCluster(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::Cluster const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "UpdateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCluster(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncPartialUpdateCluster(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "PartialUpdateCluster");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPartialUpdateCluster(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::PartialUpdateCluster(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::PartialUpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "PartialUpdateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->PartialUpdateCluster(context, options, request));
}

Status BigtableInstanceAdminTracingStub::DeleteCluster(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "DeleteCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteCluster(context, options, request));
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminTracingStub::CreateAppProfile(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::CreateAppProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "CreateAppProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateAppProfile(context, options, request));
}

StatusOr<google::bigtable::admin::v2::AppProfile>
BigtableInstanceAdminTracingStub::GetAppProfile(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::GetAppProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "GetAppProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAppProfile(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListAppProfilesResponse>
BigtableInstanceAdminTracingStub::ListAppProfiles(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListAppProfilesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "ListAppProfiles");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAppProfiles(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncUpdateAppProfile(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "UpdateAppProfile");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateAppProfile(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
BigtableInstanceAdminTracingStub::UpdateAppProfile(
    grpc::ClientContext& context, Options options,
    google::bigtable::admin::v2::UpdateAppProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "UpdateAppProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateAppProfile(context, options, request));
}

Status BigtableInstanceAdminTracingStub::DeleteAppProfile(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::DeleteAppProfileRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "DeleteAppProfile");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAppProfile(context, options, request));
}

StatusOr<google::iam::v1::Policy>
BigtableInstanceAdminTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy>
BigtableInstanceAdminTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
BigtableInstanceAdminTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::bigtable::admin::v2::ListHotTabletsResponse>
BigtableInstanceAdminTracingStub::ListHotTablets(
    grpc::ClientContext& context, Options const& options,
    google::bigtable::admin::v2::ListHotTabletsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.bigtable.admin.v2.BigtableInstanceAdmin", "ListHotTablets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListHotTablets(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
BigtableInstanceAdminTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> BigtableInstanceAdminTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BigtableInstanceAdminStub> MakeBigtableInstanceAdminTracingStub(
    std::shared_ptr<BigtableInstanceAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BigtableInstanceAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigtable_admin_internal
}  // namespace cloud
}  // namespace google
