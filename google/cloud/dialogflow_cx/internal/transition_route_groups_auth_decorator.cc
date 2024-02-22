// Copyright 2022 Google LLC
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
// source: google/cloud/dialogflow/cx/v3/transition_route_group.proto

#include "google/cloud/dialogflow_cx/internal/transition_route_groups_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/transition_route_group.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TransitionRouteGroupsAuth::TransitionRouteGroupsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<TransitionRouteGroupsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsResponse>
TransitionRouteGroupsAuth::ListTransitionRouteGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransitionRouteGroups(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsAuth::GetTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetTransitionRouteGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetTransitionRouteGroup(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsAuth::CreateTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateTransitionRouteGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateTransitionRouteGroup(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsAuth::UpdateTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateTransitionRouteGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateTransitionRouteGroup(context, options, request);
}

Status TransitionRouteGroupsAuth::DeleteTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteTransitionRouteGroupRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteTransitionRouteGroup(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
