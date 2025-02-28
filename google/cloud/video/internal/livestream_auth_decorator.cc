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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/internal/livestream_auth_decorator.h"
#include <google/cloud/video/livestream/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceAuth::LivestreamServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<LivestreamServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateChannel(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceAuth::ListChannels(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannels(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceAuth::GetChannel(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannel(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteChannel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateChannel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartChannel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStopChannel(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInput(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceAuth::ListInputs(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInputs(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceAuth::GetInput(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInput(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteInput(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInput(cq, *std::move(context), request);
      });
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceAuth::CreateEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEvent(context, request);
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceAuth::ListEvents(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEvents(context, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceAuth::GetEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEvent(context, request);
}

Status LivestreamServiceAuth::DeleteEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEvent(context, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> LivestreamServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
