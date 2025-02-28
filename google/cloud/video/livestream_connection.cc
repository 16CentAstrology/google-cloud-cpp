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

#include "google/cloud/video/livestream_connection.h"
#include "google/cloud/video/internal/livestream_connection_impl.h"
#include "google/cloud/video/internal/livestream_option_defaults.h"
#include "google/cloud/video/internal/livestream_stub_factory.h"
#include "google/cloud/video/livestream_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceConnection::~LivestreamServiceConnection() = default;

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceConnection::CreateChannel(
    google::cloud::video::livestream::v1::CreateChannelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::Channel>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::video::livestream::v1::Channel>
LivestreamServiceConnection::ListChannels(
    google::cloud::video::livestream::v1::
        ListChannelsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Channel>>();
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceConnection::GetChannel(
    google::cloud::video::livestream::v1::GetChannelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceConnection::DeleteChannel(
    google::cloud::video::livestream::v1::DeleteChannelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceConnection::UpdateChannel(
    google::cloud::video::livestream::v1::UpdateChannelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::Channel>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceConnection::StartChannel(
    google::cloud::video::livestream::v1::StartChannelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceConnection::StopChannel(
    google::cloud::video::livestream::v1::StopChannelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceConnection::CreateInput(
    google::cloud::video::livestream::v1::CreateInputRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::Input>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::video::livestream::v1::Input>
LivestreamServiceConnection::ListInputs(
    google::cloud::video::livestream::v1::
        ListInputsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Input>>();
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceConnection::GetInput(
    google::cloud::video::livestream::v1::GetInputRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceConnection::DeleteInput(
    google::cloud::video::livestream::v1::DeleteInputRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceConnection::UpdateInput(
    google::cloud::video::livestream::v1::UpdateInputRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::video::livestream::v1::Input>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnection::CreateEvent(
    google::cloud::video::livestream::v1::CreateEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnection::ListEvents(
    google::cloud::video::livestream::v1::
        ListEventsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::video::livestream::v1::Event>>();
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceConnection::GetEvent(
    google::cloud::video::livestream::v1::GetEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status LivestreamServiceConnection::DeleteEvent(
    google::cloud::video::livestream::v1::DeleteEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<LivestreamServiceConnection> MakeLivestreamServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 LivestreamServicePolicyOptionList>(options,
                                                                    __func__);
  options = video_internal::LivestreamServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = video_internal::CreateDefaultLivestreamServiceStub(
      background->cq(), options);
  return std::make_shared<video_internal::LivestreamServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google
