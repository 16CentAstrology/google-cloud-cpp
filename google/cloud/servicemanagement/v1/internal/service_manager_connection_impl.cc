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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/v1/internal/service_manager_connection_impl.h"
#include "google/cloud/servicemanagement/v1/internal/service_manager_option_defaults.h"
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
namespace servicemanagement_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<servicemanagement_v1::ServiceManagerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<servicemanagement_v1::ServiceManagerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<servicemanagement_v1::ServiceManagerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<servicemanagement_v1::ServiceManagerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<servicemanagement_v1::
               ServiceManagerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<servicemanagement_v1::ServiceManagerPollingPolicyOption>()
      ->clone();
}

}  // namespace

ServiceManagerConnectionImpl::ServiceManagerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<servicemanagement_v1_internal::ServiceManagerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ServiceManagerConnection::options())) {}

StreamRange<google::api::servicemanagement::v1::ManagedService>
ServiceManagerConnectionImpl::ListServices(
    google::api::servicemanagement::v1::ListServicesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListServices(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::servicemanagement::v1::ManagedService>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<servicemanagement_v1::ServiceManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::api::servicemanagement::v1::ListServicesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::api::servicemanagement::v1::ListServicesRequest const&
                    request) {
              return stub->ListServices(context, options, request);
            },
            options, r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServicesResponse r) {
        std::vector<google::api::servicemanagement::v1::ManagedService> result(
            r.services().size());
        auto& messages = *r.mutable_services();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerConnectionImpl::GetService(
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetService(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::GetServiceRequest const&
                 request) {
        return stub_->GetService(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerConnectionImpl::CreateService(
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateService(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::ManagedService>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::api::servicemanagement::v1::CreateServiceRequest const&
              request) {
        return stub->AsyncCreateService(cq, std::move(context),
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
          google::api::servicemanagement::v1::ManagedService>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ServiceManagerConnectionImpl::CreateService(
    NoAwaitTag,
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateService(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::CreateServiceRequest const&
                 request) {
        return stub_->CreateService(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerConnectionImpl::CreateService(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::api::servicemanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::api::servicemanagement::v1::ManagedService>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateService",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::api::servicemanagement::v1::ManagedService>(
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
          google::api::servicemanagement::v1::ManagedService>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerConnectionImpl::DeleteService(
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteService(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::api::servicemanagement::v1::DeleteServiceRequest const&
              request) {
        return stub->AsyncDeleteService(cq, std::move(context),
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
          google::api::servicemanagement::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ServiceManagerConnectionImpl::DeleteService(
    NoAwaitTag,
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteService(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::DeleteServiceRequest const&
                 request) {
        return stub_->DeleteService(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerConnectionImpl::DeleteService(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::api::servicemanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::api::servicemanagement::v1::OperationMetadata>>(
        internal::InvalidArgumentError(
            "operation does not correspond to DeleteService",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::api::servicemanagement::v1::OperationMetadata>(
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
          google::api::servicemanagement::v1::OperationMetadata>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerConnectionImpl::UndeleteService(
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UndeleteService(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::UndeleteServiceResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::api::servicemanagement::v1::UndeleteServiceRequest const&
              request) {
        return stub->AsyncUndeleteService(cq, std::move(context),
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
          google::api::servicemanagement::v1::UndeleteServiceResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ServiceManagerConnectionImpl::UndeleteService(
    NoAwaitTag,
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UndeleteService(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::UndeleteServiceRequest const&
                 request) {
        return stub_->UndeleteService(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerConnectionImpl::UndeleteService(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::api::servicemanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to UndeleteService",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::api::servicemanagement::v1::UndeleteServiceResponse>(
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
          google::api::servicemanagement::v1::UndeleteServiceResponse>,
      polling_policy(*current), __func__);
}

StreamRange<google::api::Service>
ServiceManagerConnectionImpl::ListServiceConfigs(
    google::api::servicemanagement::v1::ListServiceConfigsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListServiceConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::Service>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<servicemanagement_v1::ServiceManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::api::servicemanagement::v1::ListServiceConfigsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::api::servicemanagement::v1::
                       ListServiceConfigsRequest const& request) {
              return stub->ListServiceConfigs(context, options, request);
            },
            options, r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServiceConfigsResponse r) {
        std::vector<google::api::Service> result(r.service_configs().size());
        auto& messages = *r.mutable_service_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::Service> ServiceManagerConnectionImpl::GetServiceConfig(
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetServiceConfig(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::GetServiceConfigRequest const&
                 request) {
        return stub_->GetServiceConfig(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::api::Service>
ServiceManagerConnectionImpl::CreateServiceConfig(
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateServiceConfig(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::api::servicemanagement::v1::CreateServiceConfigRequest const&
              request) {
        return stub_->CreateServiceConfig(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerConnectionImpl::SubmitConfigSource(
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->SubmitConfigSource(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::SubmitConfigSourceResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
              request) {
        return stub->AsyncSubmitConfigSource(cq, std::move(context),
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
          google::api::servicemanagement::v1::SubmitConfigSourceResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ServiceManagerConnectionImpl::SubmitConfigSource(
    NoAwaitTag,
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SubmitConfigSource(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
              request) {
        return stub_->SubmitConfigSource(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerConnectionImpl::SubmitConfigSource(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::api::servicemanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<StatusOr<
        google::api::servicemanagement::v1::SubmitConfigSourceResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to SubmitConfigSource",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::api::servicemanagement::v1::SubmitConfigSourceResponse>(
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
          google::api::servicemanagement::v1::SubmitConfigSourceResponse>,
      polling_policy(*current), __func__);
}

StreamRange<google::api::servicemanagement::v1::Rollout>
ServiceManagerConnectionImpl::ListServiceRollouts(
    google::api::servicemanagement::v1::ListServiceRolloutsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListServiceRollouts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::servicemanagement::v1::Rollout>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<servicemanagement_v1::ServiceManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::api::servicemanagement::v1::
                       ListServiceRolloutsRequest const& request) {
              return stub->ListServiceRollouts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServiceRolloutsResponse r) {
        std::vector<google::api::servicemanagement::v1::Rollout> result(
            r.rollouts().size());
        auto& messages = *r.mutable_rollouts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerConnectionImpl::GetServiceRollout(
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetServiceRollout(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::api::servicemanagement::v1::GetServiceRolloutRequest const&
                 request) {
        return stub_->GetServiceRollout(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerConnectionImpl::CreateServiceRollout(
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateServiceRollout(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::Rollout>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
              request) {
        return stub->AsyncCreateServiceRollout(cq, std::move(context),
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
          google::api::servicemanagement::v1::Rollout>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation>
ServiceManagerConnectionImpl::CreateServiceRollout(
    NoAwaitTag,
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateServiceRollout(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
              request) {
        return stub_->CreateServiceRollout(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerConnectionImpl::CreateServiceRollout(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::api::servicemanagement::v1::
                   OperationMetadata>()) {
    return make_ready_future<
        StatusOr<google::api::servicemanagement::v1::Rollout>>(
        internal::InvalidArgumentError(
            "operation does not correspond to CreateServiceRollout",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::api::servicemanagement::v1::Rollout>(
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
          google::api::servicemanagement::v1::Rollout>,
      polling_policy(*current), __func__);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerConnectionImpl::GenerateConfigReport(
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateConfigReport(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::api::servicemanagement::v1::GenerateConfigReportRequest const&
              request) {
        return stub_->GenerateConfigReport(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> ServiceManagerConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> ServiceManagerConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ServiceManagerConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
ServiceManagerConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<servicemanagement_v1::ServiceManagerRetryPolicy>(
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

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_v1_internal
}  // namespace cloud
}  // namespace google
