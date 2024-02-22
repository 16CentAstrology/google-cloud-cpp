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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#include "google/cloud/aiplatform/v1/internal/specialist_pool_connection_impl.h"
#include "google/cloud/aiplatform/v1/internal/specialist_pool_option_defaults.h"
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
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<aiplatform_v1::SpecialistPoolServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<aiplatform_v1::SpecialistPoolServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<aiplatform_v1::SpecialistPoolServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<aiplatform_v1::SpecialistPoolServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<aiplatform_v1::
               SpecialistPoolServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<aiplatform_v1::SpecialistPoolServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

SpecialistPoolServiceConnectionImpl::SpecialistPoolServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<aiplatform_v1_internal::SpecialistPoolServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), SpecialistPoolServiceConnection::options())) {}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceConnectionImpl::CreateSpecialistPool(
    google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateSpecialistPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::SpecialistPool>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const&
              request) {
        return stub->AsyncCreateSpecialistPool(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::SpecialistPool>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceConnectionImpl::GetSpecialistPool(
    google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSpecialistPool(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::aiplatform::v1::GetSpecialistPoolRequest const&
                 request) {
        return stub_->GetSpecialistPool(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
SpecialistPoolServiceConnectionImpl::ListSpecialistPools(
    google::cloud::aiplatform::v1::ListSpecialistPoolsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSpecialistPools(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::aiplatform::v1::SpecialistPool>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<aiplatform_v1::SpecialistPoolServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::aiplatform::v1::ListSpecialistPoolsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::aiplatform::v1::ListSpecialistPoolsRequest const&
                    request) {
              return stub->ListSpecialistPools(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::aiplatform::v1::ListSpecialistPoolsResponse r) {
        std::vector<google::cloud::aiplatform::v1::SpecialistPool> result(
            r.specialist_pools().size());
        auto& messages = *r.mutable_specialist_pools();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
SpecialistPoolServiceConnectionImpl::DeleteSpecialistPool(
    google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteSpecialistPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::DeleteOperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const&
              request) {
        return stub->AsyncDeleteSpecialistPool(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::DeleteOperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
SpecialistPoolServiceConnectionImpl::UpdateSpecialistPool(
    google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateSpecialistPool(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::aiplatform::v1::SpecialistPool>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const&
              request) {
        return stub->AsyncUpdateSpecialistPool(cq, std::move(context), options,
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
          google::cloud::aiplatform::v1::SpecialistPool>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
