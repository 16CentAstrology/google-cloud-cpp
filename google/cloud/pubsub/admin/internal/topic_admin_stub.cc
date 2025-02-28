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

#include "google/cloud/pubsub/admin/internal/topic_admin_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TopicAdminStub::~TopicAdminStub() = default;

StatusOr<google::pubsub::v1::Topic> DefaultTopicAdminStub::CreateTopic(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::Topic const& request) {
  google::pubsub::v1::Topic response;
  auto status = grpc_stub_->CreateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Topic> DefaultTopicAdminStub::UpdateTopic(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::UpdateTopicRequest const& request) {
  google::pubsub::v1::Topic response;
  auto status = grpc_stub_->UpdateTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::Topic> DefaultTopicAdminStub::GetTopic(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::GetTopicRequest const& request) {
  google::pubsub::v1::Topic response;
  auto status = grpc_stub_->GetTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::ListTopicsResponse>
DefaultTopicAdminStub::ListTopics(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::ListTopicsRequest const& request) {
  google::pubsub::v1::ListTopicsResponse response;
  auto status = grpc_stub_->ListTopics(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
DefaultTopicAdminStub::ListTopicSubscriptions(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
  google::pubsub::v1::ListTopicSubscriptionsResponse response;
  auto status =
      grpc_stub_->ListTopicSubscriptions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse>
DefaultTopicAdminStub::ListTopicSnapshots(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
  google::pubsub::v1::ListTopicSnapshotsResponse response;
  auto status = grpc_stub_->ListTopicSnapshots(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultTopicAdminStub::DeleteTopic(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::DeleteTopicRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteTopic(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
DefaultTopicAdminStub::DetachSubscription(
    grpc::ClientContext& context, Options const&,
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  google::pubsub::v1::DetachSubscriptionResponse response;
  auto status = grpc_stub_->DetachSubscription(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultTopicAdminStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultTopicAdminStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultTopicAdminStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
