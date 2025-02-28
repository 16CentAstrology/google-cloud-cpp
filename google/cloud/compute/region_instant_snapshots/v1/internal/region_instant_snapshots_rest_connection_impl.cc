// Copyright 2024 Google LLC
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
// source:
// google/cloud/compute/region_instant_snapshots/v1/region_instant_snapshots.proto

#include "google/cloud/compute/region_instant_snapshots/v1/internal/region_instant_snapshots_rest_connection_impl.h"
#include "google/cloud/compute/region_instant_snapshots/v1/internal/region_instant_snapshots_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation_custom.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_lro_helpers.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_instant_snapshots_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionInstantSnapshotsRestConnectionImpl::
    RegionInstantSnapshotsRestConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<compute_region_instant_snapshots_v1_internal::
                            RegionInstantSnapshotsRestStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), RegionInstantSnapshotsConnection::options())) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::DeleteInstantSnapshot(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        DeleteInstantSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_instant_snapshots::v1::
                         DeleteInstantSnapshotRequest const& request) {
        return stub->AsyncDeleteInstantSnapshot(cq, std::move(context),
                                                std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInstantSnapshot(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestConnectionImpl::DeleteInstantSnapshot(
    NoAwaitTag, google::cloud::cpp::compute::region_instant_snapshots::v1::
                    DeleteInstantSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteInstantSnapshot(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 DeleteInstantSnapshotRequest const& request) {
        return stub_->DeleteInstantSnapshot(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::DeleteInstantSnapshot(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      });
}

StatusOr<google::cloud::cpp::compute::v1::InstantSnapshot>
RegionInstantSnapshotsRestConnectionImpl::GetInstantSnapshot(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        GetInstantSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstantSnapshot(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 GetInstantSnapshotRequest const& request) {
        return stub_->GetInstantSnapshot(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionInstantSnapshotsRestConnectionImpl::GetIamPolicy(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::InsertInstantSnapshot(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        InsertInstantSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_instant_snapshots::v1::
                         InsertInstantSnapshotRequest const& request) {
        return stub->AsyncInsertInstantSnapshot(cq, std::move(context),
                                                std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertInstantSnapshot(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestConnectionImpl::InsertInstantSnapshot(
    NoAwaitTag, google::cloud::cpp::compute::region_instant_snapshots::v1::
                    InsertInstantSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertInstantSnapshot(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 InsertInstantSnapshotRequest const& request) {
        return stub_->InsertInstantSnapshot(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::InsertInstantSnapshot(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      });
}

StreamRange<google::cloud::cpp::compute::v1::InstantSnapshot>
RegionInstantSnapshotsRestConnectionImpl::ListRegionInstantSnapshots(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        ListRegionInstantSnapshotsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListRegionInstantSnapshots(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::InstantSnapshot>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_region_instant_snapshots_v1::
                                   RegionInstantSnapshotsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::cpp::compute::region_instant_snapshots::v1::
              ListRegionInstantSnapshotsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::region_instant_snapshots::v1::
                       ListRegionInstantSnapshotsRequest const& request) {
              return stub->ListRegionInstantSnapshots(rest_context, options,
                                                      request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::InstantSnapshotList r) {
        std::vector<google::cloud::cpp::compute::v1::InstantSnapshot> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
RegionInstantSnapshotsRestConnectionImpl::SetIamPolicy(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::SetLabels(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        SetLabelsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, request,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_instant_snapshots::v1::
                         SetLabelsRequest const& request) {
        return stub->AsyncSetLabels(cq, std::move(context), std::move(options),
                                    request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetLabels(request),
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    GetOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      },
      [request](std::string const& op,
                google::cloud::cpp::compute::region_operations::v1::
                    DeleteOperationRequest& r) {
        r.set_project(request.project());
        r.set_region(request.region());
        r.set_operation(op);
      });
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionInstantSnapshotsRestConnectionImpl::SetLabels(
    NoAwaitTag, google::cloud::cpp::compute::region_instant_snapshots::v1::
                    SetLabelsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetLabels(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 SetLabelsRequest const& request) {
        return stub_->SetLabels(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionInstantSnapshotsRestConnectionImpl::SetLabels(
    google::cloud::cpp::compute::v1::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestAwaitLongRunningOperation<
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::v1::Operation,
      google::cloud::cpp::compute::region_operations::v1::GetOperationRequest,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest>(
      background_->cq(), current, operation,
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::cloud::cpp::compute::region_operations::v1::
                         DeleteOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      [](StatusOr<google::cloud::cpp::compute::v1::Operation> op,
         std::string const&) { return op; },
      polling_policy(*current), __func__,
      [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      GetOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      },
      [operation](std::string const&,
                  google::cloud::cpp::compute::region_operations::v1::
                      DeleteOperationRequest& r) {
        auto info = google::cloud::rest_internal::ParseComputeOperationInfo(
            operation.self_link());

        r.set_project(info.project);
        r.set_region(info.region);
        r.set_operation(info.operation);
      });
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
RegionInstantSnapshotsRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::region_instant_snapshots::v1::
        TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::region_instant_snapshots::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instant_snapshots_v1_internal
}  // namespace cloud
}  // namespace google
