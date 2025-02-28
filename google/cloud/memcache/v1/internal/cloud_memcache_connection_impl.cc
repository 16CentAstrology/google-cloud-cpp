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
// source: google/cloud/memcache/v1/cloud_memcache.proto

#include "google/cloud/memcache/v1/internal/cloud_memcache_connection_impl.h"
#include "google/cloud/memcache/v1/internal/cloud_memcache_option_defaults.h"
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
namespace memcache_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<memcache_v1::CloudMemcacheRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<memcache_v1::CloudMemcacheRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<memcache_v1::CloudMemcacheBackoffPolicyOption>()->clone();
}

std::unique_ptr<memcache_v1::CloudMemcacheConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<memcache_v1::CloudMemcacheConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<memcache_v1::CloudMemcachePollingPolicyOption>()->clone();
}

}  // namespace

CloudMemcacheConnectionImpl::CloudMemcacheConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<memcache_v1_internal::CloudMemcacheStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      CloudMemcacheConnection::options())) {}

StreamRange<google::cloud::memcache::v1::Instance>
CloudMemcacheConnectionImpl::ListInstances(
    google::cloud::memcache::v1::ListInstancesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::memcache::v1::Instance>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<memcache_v1::CloudMemcacheRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::memcache::v1::ListInstancesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::memcache::v1::ListInstancesRequest const&
                       request) {
              return stub->ListInstances(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::memcache::v1::ListInstancesResponse r) {
        std::vector<google::cloud::memcache::v1::Instance> result(
            r.instances().size());
        auto& messages = *r.mutable_instances();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::memcache::v1::Instance>
CloudMemcacheConnectionImpl::GetInstance(
    google::cloud::memcache::v1::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::memcache::v1::GetInstanceRequest const& request) {
        return stub_->GetInstance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::CreateInstance(
    google::cloud::memcache::v1::CreateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::CreateInstanceRequest const& request) {
        return stub->AsyncCreateInstance(cq, std::move(context),
                                         std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::CreateInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::CreateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateInstance(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::memcache::v1::CreateInstanceRequest const& request) {
        return stub_->CreateInstance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::CreateInstance(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::memcache::v1::Instance>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateInstance",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::UpdateInstance(
    google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
        return stub->AsyncUpdateInstance(cq, std::move(context),
                                         std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::UpdateInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateInstance(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::memcache::v1::UpdateInstanceRequest const& request) {
        return stub_->UpdateInstance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::UpdateInstance(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::memcache::v1::Instance>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateInstance",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::UpdateParameters(
    google::cloud::memcache::v1::UpdateParametersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateParameters(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::UpdateParametersRequest const& request) {
        return stub->AsyncUpdateParameters(cq, std::move(context),
                                           std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::UpdateParameters(
    NoAwaitTag,
    google::cloud::memcache::v1::UpdateParametersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateParameters(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::memcache::v1::UpdateParametersRequest const& request) {
        return stub_->UpdateParameters(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::UpdateParameters(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::memcache::v1::Instance>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UpdateParameters",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
CloudMemcacheConnectionImpl::DeleteInstance(
    google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
        return stub->AsyncDeleteInstance(cq, std::move(context),
                                         std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::memcache::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::DeleteInstance(
    NoAwaitTag,
    google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInstance(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::memcache::v1::DeleteInstanceRequest const& request) {
        return stub_->DeleteInstance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::OperationMetadata>>
CloudMemcacheConnectionImpl::DeleteInstance(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::memcache::v1::OperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteInstance",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::OperationMetadata>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::memcache::v1::OperationMetadata>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::ApplyParameters(
    google::cloud::memcache::v1::ApplyParametersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ApplyParameters(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::ApplyParametersRequest const& request) {
        return stub->AsyncApplyParameters(cq, std::move(context),
                                          std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::ApplyParameters(
    NoAwaitTag,
    google::cloud::memcache::v1::ApplyParametersRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ApplyParameters(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::memcache::v1::ApplyParametersRequest const& request) {
        return stub_->ApplyParameters(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::ApplyParameters(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::memcache::v1::Instance>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ApplyParameters",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::RescheduleMaintenance(
    google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RescheduleMaintenance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::memcache::v1::RescheduleMaintenanceRequest const&
              request) {
        return stub->AsyncRescheduleMaintenance(cq, std::move(context),
                                                std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::RescheduleMaintenance(
    NoAwaitTag,
    google::cloud::memcache::v1::RescheduleMaintenanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RescheduleMaintenance(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::memcache::v1::RescheduleMaintenanceRequest const&
                 request) {
        return stub_->RescheduleMaintenance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::memcache::v1::Instance>>
CloudMemcacheConnectionImpl::RescheduleMaintenance(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::memcache::v1::OperationMetadata>()) {
    return make_ready_future<StatusOr<google::cloud::memcache::v1::Instance>>(
        internal::InvalidArgumentError(
            "operation does not correspond to RescheduleMaintenance",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::memcache::v1::Instance>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::memcache::v1::Instance>,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::location::Location>
CloudMemcacheConnectionImpl::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLocations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::location::Location>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<memcache_v1::CloudMemcacheRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::location::ListLocationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::location::ListLocationsRequest const& request) {
              return stub->ListLocations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::location::ListLocationsResponse r) {
        std::vector<google::cloud::location::Location> result(
            r.locations().size());
        auto& messages = *r.mutable_locations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::location::Location>
CloudMemcacheConnectionImpl::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLocation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return stub_->GetLocation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
CloudMemcacheConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<memcache_v1::CloudMemcacheRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
CloudMemcacheConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status CloudMemcacheConnectionImpl::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return stub_->DeleteOperation(context, options, request);
      },
      *current, request, __func__);
}

Status CloudMemcacheConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace memcache_v1_internal
}  // namespace cloud
}  // namespace google
