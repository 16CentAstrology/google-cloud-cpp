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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_LOGGING_DECORATOR_H

#include "google/cloud/video/livestream/v1/internal/livestream_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class LivestreamServiceLogging : public LivestreamServiceStub {
 public:
  ~LivestreamServiceLogging() override = default;
  LivestreamServiceLogging(std::shared_ptr<LivestreamServiceStub> child,
                           TracingOptions tracing_options,
                           std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::CreateChannelRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
  ListChannels(grpc::ClientContext& context, Options const& options,
               google::cloud::video::livestream::v1::ListChannelsRequest const&
                   request) override;

  StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::DeleteChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::UpdateChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStartChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::StartChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncStopChannel(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::StopChannelRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::CreateInputRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListInputsResponse> ListInputs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListInputsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetInputRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::DeleteInputRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInput(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::UpdateInputRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::CreateEventRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListEventsResponse> ListEvents(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListEventsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetEventRequest const& request)
      override;

  Status DeleteEvent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::DeleteEventRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::CreateAssetRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::DeleteAssetRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Asset> GetAsset(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetAssetRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::ListAssetsRequest const& request)
      override;

  StatusOr<google::cloud::video::livestream::v1::Pool> GetPool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::livestream::v1::GetPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdatePool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::video::livestream::v1::UpdatePoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<LivestreamServiceStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // LivestreamServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_V1_INTERNAL_LIVESTREAM_LOGGING_DECORATOR_H
