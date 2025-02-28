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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/internal/autoscalers_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalersRestLogging::AutoscalersRestLogging(
    std::shared_ptr<AutoscalersRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerAggregatedList>
AutoscalersRestLogging::AggregatedListAutoscalers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 AggregatedListAutoscalersRequest const& request) {
        return child_->AggregatedListAutoscalers(rest_context, options,
                                                 request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestLogging::AsyncDeleteAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::autoscalers::v1::
                 DeleteAutoscalerRequest const& request) {
        return child_->AsyncDeleteAutoscaler(cq, std::move(rest_context),
                                             std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestLogging::DeleteAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 DeleteAutoscalerRequest const& request) {
        return child_->DeleteAutoscaler(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersRestLogging::GetAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 GetAutoscalerRequest const& request) {
        return child_->GetAutoscaler(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestLogging::AsyncInsertAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::autoscalers::v1::
                 InsertAutoscalerRequest const& request) {
        return child_->AsyncInsertAutoscaler(cq, std::move(rest_context),
                                             std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestLogging::InsertAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 InsertAutoscalerRequest const& request) {
        return child_->InsertAutoscaler(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerList>
AutoscalersRestLogging::ListAutoscalers(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 ListAutoscalersRequest const& request) {
        return child_->ListAutoscalers(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestLogging::AsyncPatchAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::autoscalers::v1::
                 PatchAutoscalerRequest const& request) {
        return child_->AsyncPatchAutoscaler(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestLogging::PatchAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 PatchAutoscalerRequest const& request) {
        return child_->PatchAutoscaler(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestLogging::AsyncUpdateAutoscaler(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::autoscalers::v1::
                 UpdateAutoscalerRequest const& request) {
        return child_->AsyncUpdateAutoscaler(cq, std::move(rest_context),
                                             std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
AutoscalersRestLogging::UpdateAutoscaler(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalerRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::autoscalers::v1::
                 UpdateAutoscalerRequest const& request) {
        return child_->UpdateAutoscaler(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> AutoscalersRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1_internal
}  // namespace cloud
}  // namespace google
