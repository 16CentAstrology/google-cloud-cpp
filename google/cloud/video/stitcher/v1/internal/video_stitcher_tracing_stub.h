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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_STUB_H

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class VideoStitcherServiceTracingStub : public VideoStitcherServiceStub {
 public:
  ~VideoStitcherServiceTracingStub() override = default;

  explicit VideoStitcherServiceTracingStub(
      std::shared_ptr<VideoStitcherServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateCdnKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateCdnKey(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::ListCdnKeysResponse> ListCdnKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListCdnKeysRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::CdnKey> GetCdnKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteCdnKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteCdnKey(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateCdnKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateCdnKey(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> CreateVodSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::VodSession> GetVodSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetVodSessionRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse>
  ListVodStitchDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
  GetVodStitchDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse>
  ListVodAdTagDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
  GetVodAdTagDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse>
  ListLiveAdTagDetails(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
  GetLiveAdTagDetail(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSlate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::CreateSlateRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSlate(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::CreateSlateRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::ListSlatesResponse> ListSlates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListSlatesRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::Slate> GetSlate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetSlateRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSlate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::UpdateSlateRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSlate(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::UpdateSlateRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSlate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::DeleteSlateRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSlate(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::DeleteSlateRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> CreateLiveSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::LiveSession> GetLiveSession(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateLiveConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateLiveConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
          request) override;

  StatusOr<google::cloud::video::stitcher::v1::ListLiveConfigsResponse>
  ListLiveConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::LiveConfig> GetLiveConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteLiveConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteLiveConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateLiveConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateLiveConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::UpdateLiveConfigRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateVodConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateVodConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::CreateVodConfigRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::ListVodConfigsResponse>
  ListVodConfigs(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::ListVodConfigsRequest const& request)
      override;

  StatusOr<google::cloud::video::stitcher::v1::VodConfig> GetVodConfig(
      grpc::ClientContext& context, Options const& options,
      google::cloud::video::stitcher::v1::GetVodConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteVodConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteVodConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::DeleteVodConfigRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateVodConfig(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateVodConfig(
      grpc::ClientContext& context, Options options,
      google::cloud::video::stitcher::v1::UpdateVodConfigRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<VideoStitcherServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<VideoStitcherServiceStub> MakeVideoStitcherServiceTracingStub(
    std::shared_ptr<VideoStitcherServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_STITCHER_V1_INTERNAL_VIDEO_STITCHER_TRACING_STUB_H
