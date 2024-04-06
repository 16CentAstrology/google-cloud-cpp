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

#include "google/cloud/dialogflow_cx/internal/transition_route_groups_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/cx/v3/transition_route_group.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TransitionRouteGroupsMetadata::TransitionRouteGroupsMetadata(
    std::shared_ptr<TransitionRouteGroupsStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsResponse>
TransitionRouteGroupsMetadata::ListTransitionRouteGroups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListTransitionRouteGroupsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListTransitionRouteGroups(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsMetadata::GetTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetTransitionRouteGroupRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetTransitionRouteGroup(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsMetadata::CreateTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateTransitionRouteGroupRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateTransitionRouteGroup(context, options, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TransitionRouteGroup>
TransitionRouteGroupsMetadata::UpdateTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateTransitionRouteGroupRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("transition_route_group.name=",
                           internal::UrlEncode(
                               request.transition_route_group().name())));
  return child_->UpdateTransitionRouteGroup(context, options, request);
}

Status TransitionRouteGroupsMetadata::DeleteTransitionRouteGroup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteTransitionRouteGroupRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteTransitionRouteGroup(context, options, request);
}

void TransitionRouteGroupsMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void TransitionRouteGroupsMetadata::SetMetadata(grpc::ClientContext& context,
                                                Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
