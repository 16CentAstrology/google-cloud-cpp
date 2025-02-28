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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/subscription_admin_auth_decorator.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubscriptionAdminAuth::SubscriptionAdminAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<SubscriptionAdminStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminAuth::CreateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Subscription const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminAuth::GetSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminAuth::UpdateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSubscription(context, options, request);
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
SubscriptionAdminAuth::ListSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSubscriptions(context, options, request);
}

Status SubscriptionAdminAuth::DeleteSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSubscription(context, options, request);
}

Status SubscriptionAdminAuth::ModifyPushConfig(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ModifyPushConfig(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriptionAdminAuth::GetSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
SubscriptionAdminAuth::ListSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSnapshots(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriptionAdminAuth::CreateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriptionAdminAuth::UpdateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateSnapshot(context, options, request);
}

Status SubscriptionAdminAuth::DeleteSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteSnapshot(context, options, request);
}

StatusOr<google::pubsub::v1::SeekResponse> SubscriptionAdminAuth::Seek(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::SeekRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Seek(context, options, request);
}

StatusOr<google::iam::v1::Policy> SubscriptionAdminAuth::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> SubscriptionAdminAuth::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SubscriptionAdminAuth::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
