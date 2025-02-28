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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CLIENT_H

#include "google/cloud/video/livestream_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace video {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Using Live Stream API, you can generate live streams in the various
/// renditions and streaming formats. The streaming format include HTTP Live
/// Streaming (HLS) and Dynamic Adaptive Streaming over HTTP (DASH). You can
/// send a source stream in the various ways, including Real-Time Messaging
/// Protocol (RTMP) and Secure Reliable Transport (SRT).
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class LivestreamServiceClient {
 public:
  explicit LivestreamServiceClient(
      std::shared_ptr<LivestreamServiceConnection> connection,
      Options opts = {});
  ~LivestreamServiceClient();

  ///@{
  // @name Copy and move support
  LivestreamServiceClient(LivestreamServiceClient const&) = default;
  LivestreamServiceClient& operator=(LivestreamServiceClient const&) = default;
  LivestreamServiceClient(LivestreamServiceClient&&) = default;
  LivestreamServiceClient& operator=(LivestreamServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(LivestreamServiceClient const& a,
                         LivestreamServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(LivestreamServiceClient const& a,
                         LivestreamServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a channel with the provided unique ID in the specified
  /// region.
  ///
  /// @param parent  Required. The parent location for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}`.
  /// @param channel  Required. The channel resource to be created.
  /// @param channel_id  Required. The ID of the channel resource to be created.
  ///  This value must be 1-63 characters, begin and end with `[a-z0-9]`,
  ///  could contain dashes (-) in between.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.CreateChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L218}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Channel>> CreateChannel(
      std::string const& parent,
      google::cloud::video::livestream::v1::Channel const& channel,
      std::string const& channel_id, Options opts = {});

  ///
  /// Creates a channel with the provided unique ID in the specified
  /// region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::CreateChannelRequest,google/cloud/video/livestream/v1/service.proto#L218}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.CreateChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L218}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Channel>> CreateChannel(
      google::cloud::video::livestream::v1::CreateChannelRequest const& request,
      Options opts = {});

  ///
  /// Returns a list of all channels in the specified region.
  ///
  /// @param parent  Required. The parent location for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.ListChannelsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L253}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  StreamRange<google::cloud::video::livestream::v1::Channel> ListChannels(
      std::string const& parent, Options opts = {});

  ///
  /// Returns a list of all channels in the specified region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::ListChannelsRequest,google/cloud/video/livestream/v1/service.proto#L253}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.ListChannelsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L253}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  StreamRange<google::cloud::video::livestream::v1::Channel> ListChannels(
      google::cloud::video::livestream::v1::ListChannelsRequest request,
      Options opts = {});

  ///
  /// Returns the specified channel.
  ///
  /// @param name  Required. The name of the channel resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.GetChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L295}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      std::string const& name, Options opts = {});

  ///
  /// Returns the specified channel.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::GetChannelRequest,google/cloud/video/livestream/v1/service.proto#L295}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.GetChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L295}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  StatusOr<google::cloud::video::livestream::v1::Channel> GetChannel(
      google::cloud::video::livestream::v1::GetChannelRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified channel.
  ///
  /// @param name  Required. The name of the channel resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::OperationMetadata,google/cloud/video/livestream/v1/service.proto#L697}
  ///
  /// [google.cloud.video.livestream.v1.DeleteChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L307}
  /// [google.cloud.video.livestream.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L697}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteChannel(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified channel.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::DeleteChannelRequest,google/cloud/video/livestream/v1/service.proto#L307}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::OperationMetadata,google/cloud/video/livestream/v1/service.proto#L697}
  ///
  /// [google.cloud.video.livestream.v1.DeleteChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L307}
  /// [google.cloud.video.livestream.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L697}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteChannel(
      google::cloud::video::livestream::v1::DeleteChannelRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified channel.
  ///
  /// @param channel  Required. The channel resource to be updated.
  /// @param update_mask  Field mask is used to specify the fields to be
  /// overwritten in the Channel
  ///  resource by the update. You can only update the following fields:
  ///  * [`inputAttachments`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#inputattachment)
  ///  * [`output`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#output)
  ///  * [`elementaryStreams`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#ElementaryStream)
  ///  * [`muxStreams`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#muxstream)
  ///  * [`manifests`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#Manifest)
  ///  * [`spritesheets`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.channels#spritesheet)
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.UpdateChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L340}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Channel>> UpdateChannel(
      google::cloud::video::livestream::v1::Channel const& channel,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified channel.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::UpdateChannelRequest,google/cloud/video/livestream/v1/service.proto#L340}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Channel,google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  /// [google.cloud.video.livestream.v1.UpdateChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L340}
  /// [google.cloud.video.livestream.v1.Channel]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L124}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Channel>> UpdateChannel(
      google::cloud::video::livestream::v1::UpdateChannelRequest const& request,
      Options opts = {});

  ///
  /// Starts the specified channel. Part of the video pipeline will be created
  /// only when the StartChannel request is received by the server.
  ///
  /// @param name  Required. The name of the channel resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::ChannelOperationResponse,google/cloud/video/livestream/v1/service.proto#L692}
  ///
  /// [google.cloud.video.livestream.v1.StartChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L375}
  /// [google.cloud.video.livestream.v1.ChannelOperationResponse]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L692}
  ///
  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StartChannel(std::string const& name, Options opts = {});

  ///
  /// Starts the specified channel. Part of the video pipeline will be created
  /// only when the StartChannel request is received by the server.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::StartChannelRequest,google/cloud/video/livestream/v1/service.proto#L375}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::ChannelOperationResponse,google/cloud/video/livestream/v1/service.proto#L692}
  ///
  /// [google.cloud.video.livestream.v1.StartChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L375}
  /// [google.cloud.video.livestream.v1.ChannelOperationResponse]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L692}
  ///
  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StartChannel(
      google::cloud::video::livestream::v1::StartChannelRequest const& request,
      Options opts = {});

  ///
  /// Stops the specified channel. Part of the video pipeline will be released
  /// when the StopChannel request is received by the server.
  ///
  /// @param name  Required. The name of the channel resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::ChannelOperationResponse,google/cloud/video/livestream/v1/service.proto#L692}
  ///
  /// [google.cloud.video.livestream.v1.StopChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L402}
  /// [google.cloud.video.livestream.v1.ChannelOperationResponse]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L692}
  ///
  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StopChannel(std::string const& name, Options opts = {});

  ///
  /// Stops the specified channel. Part of the video pipeline will be released
  /// when the StopChannel request is received by the server.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::StopChannelRequest,google/cloud/video/livestream/v1/service.proto#L402}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::ChannelOperationResponse,google/cloud/video/livestream/v1/service.proto#L692}
  ///
  /// [google.cloud.video.livestream.v1.StopChannelRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L402}
  /// [google.cloud.video.livestream.v1.ChannelOperationResponse]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L692}
  ///
  future<
      StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
  StopChannel(
      google::cloud::video::livestream::v1::StopChannelRequest const& request,
      Options opts = {});

  ///
  /// Creates an input with the provided unique ID in the specified region.
  ///
  /// @param parent  Required. The parent location for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}`.
  /// @param input  Required. The input resource to be created.
  /// @param input_id  Required. The ID of the input resource to be created.
  ///  This value must be 1-63 characters, begin and end with `[a-z0-9]`,
  ///  could contain dashes (-) in between.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.CreateInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L429}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Input>> CreateInput(
      std::string const& parent,
      google::cloud::video::livestream::v1::Input const& input,
      std::string const& input_id, Options opts = {});

  ///
  /// Creates an input with the provided unique ID in the specified region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::CreateInputRequest,google/cloud/video/livestream/v1/service.proto#L429}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.CreateInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L429}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Input>> CreateInput(
      google::cloud::video::livestream::v1::CreateInputRequest const& request,
      Options opts = {});

  ///
  /// Returns a list of all inputs in the specified region.
  ///
  /// @param parent  Required. The parent location for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.ListInputsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L464}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  StreamRange<google::cloud::video::livestream::v1::Input> ListInputs(
      std::string const& parent, Options opts = {});

  ///
  /// Returns a list of all inputs in the specified region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::ListInputsRequest,google/cloud/video/livestream/v1/service.proto#L464}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.ListInputsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L464}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  StreamRange<google::cloud::video::livestream::v1::Input> ListInputs(
      google::cloud::video::livestream::v1::ListInputsRequest request,
      Options opts = {});

  ///
  /// Returns the specified input.
  ///
  /// @param name  Required. The name of the input resource, in the form of:
  ///  `projects/{project}/locations/{location}/inputs/{inputId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.GetInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L506}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      std::string const& name, Options opts = {});

  ///
  /// Returns the specified input.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::GetInputRequest,google/cloud/video/livestream/v1/service.proto#L506}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.GetInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L506}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  StatusOr<google::cloud::video::livestream::v1::Input> GetInput(
      google::cloud::video::livestream::v1::GetInputRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified input.
  ///
  /// @param name  Required. The name of the input resource, in the form of:
  ///  `projects/{project}/locations/{location}/inputs/{inputId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::OperationMetadata,google/cloud/video/livestream/v1/service.proto#L697}
  ///
  /// [google.cloud.video.livestream.v1.DeleteInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L518}
  /// [google.cloud.video.livestream.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L697}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteInput(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified input.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::DeleteInputRequest,google/cloud/video/livestream/v1/service.proto#L518}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::OperationMetadata,google/cloud/video/livestream/v1/service.proto#L697}
  ///
  /// [google.cloud.video.livestream.v1.DeleteInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L518}
  /// [google.cloud.video.livestream.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L697}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
  DeleteInput(
      google::cloud::video::livestream::v1::DeleteInputRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified input.
  ///
  /// @param input  Required. The input resource to be updated.
  /// @param update_mask  Field mask is used to specify the fields to be
  /// overwritten in the Input
  ///  resource by the update. You can only update the following fields:
  ///  * [`preprocessingConfig`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.inputs#PreprocessingConfig)
  ///  * [`securityRules`](https://cloud.google.com/livestream/docs/reference/rest/v1/projects.locations.inputs#SecurityRule)
  ///  The fields specified in the update_mask are relative to the resource, not
  ///  the full request. A field will be overwritten if it is in the mask.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.UpdateInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L545}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Input>> UpdateInput(
      google::cloud::video::livestream::v1::Input const& input,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified input.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::UpdateInputRequest,google/cloud/video/livestream/v1/service.proto#L545}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Input,google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  /// [google.cloud.video.livestream.v1.UpdateInputRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L545}
  /// [google.cloud.video.livestream.v1.Input]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L36}
  ///
  future<StatusOr<google::cloud::video::livestream::v1::Input>> UpdateInput(
      google::cloud::video::livestream::v1::UpdateInputRequest const& request,
      Options opts = {});

  ///
  /// Creates an event with the provided unique ID in the specified channel.
  ///
  /// @param parent  Required. The parent channel for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param event  Required. The event resource to be created.
  /// @param event_id  Required. The ID of the event resource to be created.
  ///  This value must be 1-63 characters, begin and end with `[a-z0-9]`,
  ///  could contain dashes (-) in between.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.CreateEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L576}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      std::string const& parent,
      google::cloud::video::livestream::v1::Event const& event,
      std::string const& event_id, Options opts = {});

  ///
  /// Creates an event with the provided unique ID in the specified channel.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::CreateEventRequest,google/cloud/video/livestream/v1/service.proto#L576}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.CreateEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L576}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StatusOr<google::cloud::video::livestream::v1::Event> CreateEvent(
      google::cloud::video::livestream::v1::CreateEventRequest const& request,
      Options opts = {});

  ///
  /// Returns a list of all events in the specified channel.
  ///
  /// @param parent  Required. The parent channel for the resource, in the form
  /// of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.ListEventsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L611}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StreamRange<google::cloud::video::livestream::v1::Event> ListEvents(
      std::string const& parent, Options opts = {});

  ///
  /// Returns a list of all events in the specified channel.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::ListEventsRequest,google/cloud/video/livestream/v1/service.proto#L611}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.ListEventsRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L611}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StreamRange<google::cloud::video::livestream::v1::Event> ListEvents(
      google::cloud::video::livestream::v1::ListEventsRequest request,
      Options opts = {});

  ///
  /// Returns the specified event.
  ///
  /// @param name  Required. The name of the event resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}/events/{eventId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.GetEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L653}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      std::string const& name, Options opts = {});

  ///
  /// Returns the specified event.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::GetEventRequest,google/cloud/video/livestream/v1/service.proto#L653}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::video::livestream::v1::Event,google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  /// [google.cloud.video.livestream.v1.GetEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L653}
  /// [google.cloud.video.livestream.v1.Event]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/resources.proto#L337}
  ///
  StatusOr<google::cloud::video::livestream::v1::Event> GetEvent(
      google::cloud::video::livestream::v1::GetEventRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified event.
  ///
  /// @param name  Required. The name of the event resource, in the form of:
  ///  `projects/{project}/locations/{location}/channels/{channelId}/events/{eventId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.video.livestream.v1.DeleteEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L665}
  ///
  Status DeleteEvent(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified event.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::video::livestream::v1::DeleteEventRequest,google/cloud/video/livestream/v1/service.proto#L665}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.video.livestream.v1.DeleteEventRequest]:
  /// @googleapis_reference_link{google/cloud/video/livestream/v1/service.proto#L665}
  ///
  Status DeleteEvent(
      google::cloud::video::livestream::v1::DeleteEventRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<LivestreamServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_LIVESTREAM_CLIENT_H
