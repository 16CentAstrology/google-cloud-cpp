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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/internal/domain_mappings_connection_impl.h"
#include "google/cloud/appengine/v1/internal/domain_mappings_option_defaults.h"
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
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<appengine_v1::DomainMappingsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<appengine_v1::DomainMappingsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<appengine_v1::DomainMappingsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<appengine_v1::DomainMappingsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<appengine_v1::DomainMappingsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<appengine_v1::DomainMappingsPollingPolicyOption>()
      ->clone();
}

}  // namespace

DomainMappingsConnectionImpl::DomainMappingsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<appengine_v1_internal::DomainMappingsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DomainMappingsConnection::options())) {}

StreamRange<google::appengine::v1::DomainMapping>
DomainMappingsConnectionImpl::ListDomainMappings(
    google::appengine::v1::ListDomainMappingsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDomainMappings(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::appengine::v1::DomainMapping>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<appengine_v1::DomainMappingsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::appengine::v1::ListDomainMappingsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::appengine::v1::ListDomainMappingsRequest const&
                       request) {
              return stub->ListDomainMappings(context, options, request);
            },
            options, r, function_name);
      },
      [](google::appengine::v1::ListDomainMappingsResponse r) {
        std::vector<google::appengine::v1::DomainMapping> result(
            r.domain_mappings().size());
        auto& messages = *r.mutable_domain_mappings();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::appengine::v1::DomainMapping>
DomainMappingsConnectionImpl::GetDomainMapping(
    google::appengine::v1::GetDomainMappingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDomainMapping(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::appengine::v1::GetDomainMappingRequest const& request) {
        return stub_->GetDomainMapping(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsConnectionImpl::CreateDomainMapping(
    google::appengine::v1::CreateDomainMappingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateDomainMapping(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::DomainMapping>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::appengine::v1::CreateDomainMappingRequest const& request) {
        return stub->AsyncCreateDomainMapping(cq, std::move(context), options,
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
          google::appengine::v1::DomainMapping>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::appengine::v1::DomainMapping>>
DomainMappingsConnectionImpl::UpdateDomainMapping(
    google::appengine::v1::UpdateDomainMappingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateDomainMapping(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::DomainMapping>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::appengine::v1::UpdateDomainMappingRequest const& request) {
        return stub->AsyncUpdateDomainMapping(cq, std::move(context), options,
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
          google::appengine::v1::DomainMapping>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::appengine::v1::OperationMetadataV1>>
DomainMappingsConnectionImpl::DeleteDomainMapping(
    google::appengine::v1::DeleteDomainMappingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteDomainMapping(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::appengine::v1::OperationMetadataV1>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::appengine::v1::DeleteDomainMappingRequest const& request) {
        return stub->AsyncDeleteDomainMapping(cq, std::move(context), options,
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
          google::appengine::v1::OperationMetadataV1>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google
