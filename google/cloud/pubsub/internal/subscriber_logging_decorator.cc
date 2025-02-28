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
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/internal/subscriber_logging_decorator.h"
#include "google/cloud/internal/async_read_write_stream_logging.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/pubsub/v1/pubsub.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SubscriberLogging::SubscriberLogging(std::shared_ptr<SubscriberStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriberLogging::CreateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Subscription const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::Subscription const& request) {
        return child_->CreateSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Subscription> SubscriberLogging::GetSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetSubscriptionRequest const& request) {
        return child_->GetSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriberLogging::UpdateSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateSubscriptionRequest const& request) {
        return child_->UpdateSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::ListSubscriptionsResponse>
SubscriberLogging::ListSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSubscriptionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ListSubscriptionsRequest const& request) {
        return child_->ListSubscriptions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SubscriberLogging::DeleteSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteSubscriptionRequest const& request) {
        return child_->DeleteSubscription(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::PullResponse> SubscriberLogging::Pull(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::PullRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::PullRequest const& request) {
        return child_->Pull(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::pubsub::v1::StreamingPullRequest,
    google::pubsub::v1::StreamingPullResponse>>
SubscriberLogging::AsyncStreamingPull(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  using LoggingStream =
      ::google::cloud::internal::AsyncStreamingReadWriteRpcLogging<
          google::pubsub::v1::StreamingPullRequest,
          google::pubsub::v1::StreamingPullResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream =
      child_->AsyncStreamingPull(cq, std::move(context), std::move(options));
  if (stream_logging_) {
    stream = std::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

Status SubscriberLogging::ModifyPushConfig(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ModifyPushConfigRequest const& request) {
        return child_->ModifyPushConfig(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberLogging::GetSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetSnapshotRequest const& request) {
        return child_->GetSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::ListSnapshotsResponse>
SubscriberLogging::ListSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListSnapshotsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ListSnapshotsRequest const& request) {
        return child_->ListSnapshots(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberLogging::CreateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::CreateSnapshotRequest const& request) {
        return child_->CreateSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::Snapshot> SubscriberLogging::UpdateSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateSnapshotRequest const& request) {
        return child_->UpdateSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status SubscriberLogging::DeleteSnapshot(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteSnapshotRequest const& request) {
        return child_->DeleteSnapshot(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::pubsub::v1::SeekResponse> SubscriberLogging::Seek(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::SeekRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::SeekRequest const& request) {
        return child_->Seek(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SubscriberLogging::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> SubscriberLogging::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SubscriberLogging::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<Status> SubscriberLogging::AsyncModifyAckDeadline(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::pubsub::v1::ModifyAckDeadlineRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::pubsub::v1::ModifyAckDeadlineRequest const& request) {
        return child_->AsyncModifyAckDeadline(cq, std::move(context),
                                              std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> SubscriberLogging::AsyncAcknowledge(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::pubsub::v1::AcknowledgeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::pubsub::v1::AcknowledgeRequest const& request) {
        return child_->AsyncAcknowledge(cq, std::move(context),
                                        std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google
