// Copyright 2023 Google LLC
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

#include "google/cloud/pubsub/admin/internal/subscription_admin_connection_impl.h"
#include "google/cloud/pubsub/admin/internal/subscription_admin_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<pubsub_admin::SubscriptionAdminRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<pubsub_admin::SubscriptionAdminRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<pubsub_admin::SubscriptionAdminBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<pubsub_admin::SubscriptionAdminConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<pubsub_admin::SubscriptionAdminConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

SubscriptionAdminConnectionImpl::SubscriptionAdminConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<pubsub_admin_internal::SubscriptionAdminStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), SubscriptionAdminConnection::options())) {}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminConnectionImpl::CreateSubscription(
    google::pubsub::v1::Subscription const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSubscription(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::Subscription const& request) {
        return stub_->CreateSubscription(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminConnectionImpl::GetSubscription(
    google::pubsub::v1::GetSubscriptionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSubscription(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetSubscriptionRequest const& request) {
        return stub_->GetSubscription(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Subscription>
SubscriptionAdminConnectionImpl::UpdateSubscription(
    google::pubsub::v1::UpdateSubscriptionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSubscription(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateSubscriptionRequest const& request) {
        return stub_->UpdateSubscription(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::pubsub::v1::Subscription>
SubscriptionAdminConnectionImpl::ListSubscriptions(
    google::pubsub::v1::ListSubscriptionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSubscriptions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::pubsub::v1::Subscription>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<pubsub_admin::SubscriptionAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::pubsub::v1::ListSubscriptionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::pubsub::v1::ListSubscriptionsRequest const& request) {
              return stub->ListSubscriptions(context, options, request);
            },
            options, r, function_name);
      },
      [](google::pubsub::v1::ListSubscriptionsResponse r) {
        std::vector<google::pubsub::v1::Subscription> result(
            r.subscriptions().size());
        auto& messages = *r.mutable_subscriptions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

Status SubscriptionAdminConnectionImpl::DeleteSubscription(
    google::pubsub::v1::DeleteSubscriptionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteSubscription(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteSubscriptionRequest const& request) {
        return stub_->DeleteSubscription(context, options, request);
      },
      *current, request, __func__);
}

Status SubscriptionAdminConnectionImpl::ModifyPushConfig(
    google::pubsub::v1::ModifyPushConfigRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ModifyPushConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::ModifyPushConfigRequest const& request) {
        return stub_->ModifyPushConfig(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminConnectionImpl::GetSnapshot(
    google::pubsub::v1::GetSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSnapshot(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::GetSnapshotRequest const& request) {
        return stub_->GetSnapshot(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::pubsub::v1::Snapshot>
SubscriptionAdminConnectionImpl::ListSnapshots(
    google::pubsub::v1::ListSnapshotsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSnapshots(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::pubsub::v1::Snapshot>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<pubsub_admin::SubscriptionAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::pubsub::v1::ListSnapshotsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::pubsub::v1::ListSnapshotsRequest const& request) {
              return stub->ListSnapshots(context, options, request);
            },
            options, r, function_name);
      },
      [](google::pubsub::v1::ListSnapshotsResponse r) {
        std::vector<google::pubsub::v1::Snapshot> result(r.snapshots().size());
        auto& messages = *r.mutable_snapshots();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminConnectionImpl::CreateSnapshot(
    google::pubsub::v1::CreateSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSnapshot(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::CreateSnapshotRequest const& request) {
        return stub_->CreateSnapshot(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::Snapshot>
SubscriptionAdminConnectionImpl::UpdateSnapshot(
    google::pubsub::v1::UpdateSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSnapshot(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::UpdateSnapshotRequest const& request) {
        return stub_->UpdateSnapshot(context, options, request);
      },
      *current, request, __func__);
}

Status SubscriptionAdminConnectionImpl::DeleteSnapshot(
    google::pubsub::v1::DeleteSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteSnapshot(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::DeleteSnapshotRequest const& request) {
        return stub_->DeleteSnapshot(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::pubsub::v1::SeekResponse>
SubscriptionAdminConnectionImpl::Seek(
    google::pubsub::v1::SeekRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->Seek(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::pubsub::v1::SeekRequest const& request) {
        return stub_->Seek(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
