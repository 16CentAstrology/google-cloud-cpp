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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_CONNECTION_H

#include "google/cloud/video/stitcher/v1/video_stitcher_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VideoStitcherServiceTracingConnection
    : public video_stitcher_v1::VideoStitcherServiceConnection {
 public:
  ~VideoStitcherServiceTracingConnection() override = default;

  explicit VideoStitcherServiceTracingConnection(
      std::shared_ptr<video_stitcher_v1::VideoStitcherServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>> CreateCdnKey(
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCdnKey(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>> CreateCdnKey(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::video::stitcher::v1::CdnKey> ListCdnKeys(
      google::cloud::video::stitcher::v1::ListCdnKeysRequest request) override;

  StatusOr<google::cloud::video::stitcher::v1::CdnKey> GetCdnKey(
      google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteCdnKey(google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&
                   request) override;

  StatusOr<google::longrunning::Operation> DeleteCdnKey(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteCdnKey(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>> UpdateCdnKey(
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCdnKey(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>> UpdateCdnKey(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> CreateVodSession(
      google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> GetVodSession(
      google::cloud::video::stitcher::v1::GetVodSessionRequest const& request)
      override;

  StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
  ListVodStitchDetails(
      google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
  GetVodStitchDetail(
      google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
          request) override;

  StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
  ListVodAdTagDetails(
      google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
  GetVodAdTagDetail(
      google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
          request) override;

  StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
  ListLiveAdTagDetails(
      google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
  GetLiveAdTagDetail(
      google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
          request) override;

  future<StatusOr<google::cloud::video::stitcher::v1::Slate>> CreateSlate(
      google::cloud::video::stitcher::v1::CreateSlateRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSlate(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::CreateSlateRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::Slate>> CreateSlate(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::video::stitcher::v1::Slate> ListSlates(
      google::cloud::video::stitcher::v1::ListSlatesRequest request) override;

  StatusOr<google::cloud::video::stitcher::v1::Slate> GetSlate(
      google::cloud::video::stitcher::v1::GetSlateRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::Slate>> UpdateSlate(
      google::cloud::video::stitcher::v1::UpdateSlateRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSlate(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::UpdateSlateRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::Slate>> UpdateSlate(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteSlate(google::cloud::video::stitcher::v1::DeleteSlateRequest const&
                  request) override;

  StatusOr<google::longrunning::Operation> DeleteSlate(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::DeleteSlateRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteSlate(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> CreateLiveSession(
      google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> GetLiveSession(
      google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
  CreateLiveConfig(
      google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateLiveConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
  CreateLiveConfig(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::video::stitcher::v1::LiveConfig> ListLiveConfigs(
      google::cloud::video::stitcher::v1::ListLiveConfigsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveConfig> GetLiveConfig(
      google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteLiveConfig(
      google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteLiveConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteLiveConfig(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
  UpdateLiveConfig(
      google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateLiveConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
          request) override;

  future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
  UpdateLiveConfig(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>
  CreateVodConfig(
      google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateVodConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>
  CreateVodConfig(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::video::stitcher::v1::VodConfig> ListVodConfigs(
      google::cloud::video::stitcher::v1::ListVodConfigsRequest request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodConfig> GetVodConfig(
      google::cloud::video::stitcher::v1::GetVodConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteVodConfig(
      google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteVodConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
  DeleteVodConfig(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>
  UpdateVodConfig(
      google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateVodConfig(
      NoAwaitTag,
      google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request)
      override;

  future<StatusOr<google::cloud::video::stitcher::v1::VodConfig>>
  UpdateVodConfig(google::longrunning::Operation const& operation) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<video_stitcher_v1::VideoStitcherServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<video_stitcher_v1::VideoStitcherServiceConnection>
MakeVideoStitcherServiceTracingConnection(
    std::shared_ptr<video_stitcher_v1::VideoStitcherServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_CONNECTION_H
