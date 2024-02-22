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

#include "google/cloud/video/stitcher/v1/internal/video_stitcher_connection_impl.h"
#include "google/cloud/video/stitcher/v1/internal/video_stitcher_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_stitcher_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<video_stitcher_v1::VideoStitcherServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<video_stitcher_v1::VideoStitcherServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    video_stitcher_v1::VideoStitcherServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<video_stitcher_v1::
               VideoStitcherServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options
      .get<video_stitcher_v1::VideoStitcherServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

VideoStitcherServiceConnectionImpl::VideoStitcherServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<video_stitcher_v1_internal::VideoStitcherServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), VideoStitcherServiceConnection::options())) {}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceConnectionImpl::CreateCdnKey(
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateCdnKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::CdnKey>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::CreateCdnKeyRequest const&
              request) {
        return stub->AsyncCreateCdnKey(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::video::stitcher::v1::CdnKey>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceConnectionImpl::ListCdnKeys(
    google::cloud::video::stitcher::v1::ListCdnKeysRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListCdnKeys(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::CdnKey>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListCdnKeysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::ListCdnKeysRequest const&
                       request) {
              return stub->ListCdnKeys(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListCdnKeysResponse r) {
        std::vector<google::cloud::video::stitcher::v1::CdnKey> result(
            r.cdn_keys().size());
        auto& messages = *r.mutable_cdn_keys();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceConnectionImpl::GetCdnKey(
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetCdnKey(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request) {
        return stub_->GetCdnKey(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnectionImpl::DeleteCdnKey(
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteCdnKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const&
              request) {
        return stub->AsyncDeleteCdnKey(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::video::stitcher::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceConnectionImpl::UpdateCdnKey(
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateCdnKey(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::CdnKey>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const&
              request) {
        return stub->AsyncUpdateCdnKey(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::video::stitcher::v1::CdnKey>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceConnectionImpl::CreateVodSession(
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateVodSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::CreateVodSessionRequest const&
                 request) {
        return stub_->CreateVodSession(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceConnectionImpl::GetVodSession(
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVodSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetVodSessionRequest const&
                 request) {
        return stub_->GetVodSession(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceConnectionImpl::ListVodStitchDetails(
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListVodStitchDetails(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::
                       ListVodStitchDetailsRequest const& request) {
              return stub->ListVodStitchDetails(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListVodStitchDetailsResponse r) {
        std::vector<google::cloud::video::stitcher::v1::VodStitchDetail> result(
            r.vod_stitch_details().size());
        auto& messages = *r.mutable_vod_stitch_details();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceConnectionImpl::GetVodStitchDetail(
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVodStitchDetail(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
              request) {
        return stub_->GetVodStitchDetail(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceConnectionImpl::ListVodAdTagDetails(
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListVodAdTagDetails(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::
                       ListVodAdTagDetailsRequest const& request) {
              return stub->ListVodAdTagDetails(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListVodAdTagDetailsResponse r) {
        std::vector<google::cloud::video::stitcher::v1::VodAdTagDetail> result(
            r.vod_ad_tag_details().size());
        auto& messages = *r.mutable_vod_ad_tag_details();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceConnectionImpl::GetVodAdTagDetail(
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVodAdTagDetail(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const&
                 request) {
        return stub_->GetVodAdTagDetail(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceConnectionImpl::ListLiveAdTagDetails(
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListLiveAdTagDetails(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::
                       ListLiveAdTagDetailsRequest const& request) {
              return stub->ListLiveAdTagDetails(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListLiveAdTagDetailsResponse r) {
        std::vector<google::cloud::video::stitcher::v1::LiveAdTagDetail> result(
            r.live_ad_tag_details().size());
        auto& messages = *r.mutable_live_ad_tag_details();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceConnectionImpl::GetLiveAdTagDetail(
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLiveAdTagDetail(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
              request) {
        return stub_->GetLiveAdTagDetail(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceConnectionImpl::CreateSlate(
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateSlate(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::Slate>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::CreateSlateRequest const&
              request) {
        return stub->AsyncCreateSlate(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::video::stitcher::v1::Slate>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceConnectionImpl::ListSlates(
    google::cloud::video::stitcher::v1::ListSlatesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSlates(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::Slate>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListSlatesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::ListSlatesRequest const&
                       request) {
              return stub->ListSlates(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListSlatesResponse r) {
        std::vector<google::cloud::video::stitcher::v1::Slate> result(
            r.slates().size());
        auto& messages = *r.mutable_slates();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceConnectionImpl::GetSlate(
    google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSlate(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::video::stitcher::v1::GetSlateRequest const& request) {
        return stub_->GetSlate(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceConnectionImpl::UpdateSlate(
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateSlate(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::Slate>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::UpdateSlateRequest const&
              request) {
        return stub->AsyncUpdateSlate(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::video::stitcher::v1::Slate>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnectionImpl::DeleteSlate(
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteSlate(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::DeleteSlateRequest const&
              request) {
        return stub->AsyncDeleteSlate(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::video::stitcher::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceConnectionImpl::CreateLiveSession(
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateLiveSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::CreateLiveSessionRequest const&
                 request) {
        return stub_->CreateLiveSession(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceConnectionImpl::GetLiveSession(
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLiveSession(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetLiveSessionRequest const&
                 request) {
        return stub_->GetLiveSession(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
VideoStitcherServiceConnectionImpl::CreateLiveConfig(
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateLiveConfig(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::LiveConfig>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::CreateLiveConfigRequest const&
              request) {
        return stub->AsyncCreateLiveConfig(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::video::stitcher::v1::LiveConfig>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceConnectionImpl::ListLiveConfigs(
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLiveConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::video::stitcher::v1::LiveConfig>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<video_stitcher_v1::VideoStitcherServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::video::stitcher::v1::ListLiveConfigsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::video::stitcher::v1::
                       ListLiveConfigsRequest const& request) {
              return stub->ListLiveConfigs(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::video::stitcher::v1::ListLiveConfigsResponse r) {
        std::vector<google::cloud::video::stitcher::v1::LiveConfig> result(
            r.live_configs().size());
        auto& messages = *r.mutable_live_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceConnectionImpl::GetLiveConfig(
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLiveConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::video::stitcher::v1::GetLiveConfigRequest const&
                 request) {
        return stub_->GetLiveConfig(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceConnectionImpl::DeleteLiveConfig(
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteLiveConfig(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::video::stitcher::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const&
              request) {
        return stub->AsyncDeleteLiveConfig(cq, std::move(context), options,
                                           request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::video::stitcher::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1_internal
}  // namespace cloud
}  // namespace google
