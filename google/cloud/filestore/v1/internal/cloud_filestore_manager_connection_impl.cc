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
// source: google/cloud/filestore/v1/cloud_filestore_service.proto

#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_connection_impl.h"
#include "google/cloud/filestore/v1/internal/cloud_filestore_manager_option_defaults.h"
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
namespace filestore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<filestore_v1::CloudFilestoreManagerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<filestore_v1::CloudFilestoreManagerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<filestore_v1::CloudFilestoreManagerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<filestore_v1::CloudFilestoreManagerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<filestore_v1::
               CloudFilestoreManagerConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<filestore_v1::CloudFilestoreManagerPollingPolicyOption>()
      ->clone();
}

}  // namespace

CloudFilestoreManagerConnectionImpl::CloudFilestoreManagerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<filestore_v1_internal::CloudFilestoreManagerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), CloudFilestoreManagerConnection::options())) {}

StreamRange<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerConnectionImpl::ListInstances(
    google::cloud::filestore::v1::ListInstancesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListInstances(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::filestore::v1::Instance>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<filestore_v1::CloudFilestoreManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::filestore::v1::ListInstancesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::filestore::v1::ListInstancesRequest const&
                       request) {
              return stub->ListInstances(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::filestore::v1::ListInstancesResponse r) {
        std::vector<google::cloud::filestore::v1::Instance> result(
            r.instances().size());
        auto& messages = *r.mutable_instances();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::filestore::v1::Instance>
CloudFilestoreManagerConnectionImpl::GetInstance(
    google::cloud::filestore::v1::GetInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetInstance(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::filestore::v1::GetInstanceRequest const& request) {
        return stub_->GetInstance(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnectionImpl::CreateInstance(
    google::cloud::filestore::v1::CreateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::CreateInstanceRequest const& request) {
        return stub->AsyncCreateInstance(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnectionImpl::UpdateInstance(
    google::cloud::filestore::v1::UpdateInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::UpdateInstanceRequest const& request) {
        return stub->AsyncUpdateInstance(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnectionImpl::RestoreInstance(
    google::cloud::filestore::v1::RestoreInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RestoreInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::RestoreInstanceRequest const& request) {
        return stub->AsyncRestoreInstance(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::filestore::v1::Instance>>
CloudFilestoreManagerConnectionImpl::RevertInstance(
    google::cloud::filestore::v1::RevertInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RevertInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Instance>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::RevertInstanceRequest const& request) {
        return stub->AsyncRevertInstance(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Instance>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerConnectionImpl::DeleteInstance(
    google::cloud::filestore::v1::DeleteInstanceRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteInstance(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::common::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::DeleteInstanceRequest const& request) {
        return stub->AsyncDeleteInstance(cq, std::move(context), options,
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
          google::cloud::common::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerConnectionImpl::ListSnapshots(
    google::cloud::filestore::v1::ListSnapshotsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSnapshots(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::filestore::v1::Snapshot>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<filestore_v1::CloudFilestoreManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::filestore::v1::ListSnapshotsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::filestore::v1::ListSnapshotsRequest const&
                       request) {
              return stub->ListSnapshots(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::filestore::v1::ListSnapshotsResponse r) {
        std::vector<google::cloud::filestore::v1::Snapshot> result(
            r.snapshots().size());
        auto& messages = *r.mutable_snapshots();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::filestore::v1::Snapshot>
CloudFilestoreManagerConnectionImpl::GetSnapshot(
    google::cloud::filestore::v1::GetSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSnapshot(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::filestore::v1::GetSnapshotRequest const& request) {
        return stub_->GetSnapshot(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerConnectionImpl::CreateSnapshot(
    google::cloud::filestore::v1::CreateSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateSnapshot(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Snapshot>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::CreateSnapshotRequest const& request) {
        return stub->AsyncCreateSnapshot(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Snapshot>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerConnectionImpl::DeleteSnapshot(
    google::cloud::filestore::v1::DeleteSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteSnapshot(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::common::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::DeleteSnapshotRequest const& request) {
        return stub->AsyncDeleteSnapshot(cq, std::move(context), options,
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
          google::cloud::common::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::filestore::v1::Snapshot>>
CloudFilestoreManagerConnectionImpl::UpdateSnapshot(
    google::cloud::filestore::v1::UpdateSnapshotRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateSnapshot(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Snapshot>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::UpdateSnapshotRequest const& request) {
        return stub->AsyncUpdateSnapshot(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Snapshot>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerConnectionImpl::ListBackups(
    google::cloud::filestore::v1::ListBackupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::filestore::v1::Backup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<filestore_v1::CloudFilestoreManagerRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::filestore::v1::ListBackupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::filestore::v1::ListBackupsRequest const&
                       request) {
              return stub->ListBackups(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::filestore::v1::ListBackupsResponse r) {
        std::vector<google::cloud::filestore::v1::Backup> result(
            r.backups().size());
        auto& messages = *r.mutable_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::filestore::v1::Backup>
CloudFilestoreManagerConnectionImpl::GetBackup(
    google::cloud::filestore::v1::GetBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBackup(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::filestore::v1::GetBackupRequest const& request) {
        return stub_->GetBackup(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerConnectionImpl::CreateBackup(
    google::cloud::filestore::v1::CreateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Backup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::CreateBackupRequest const& request) {
        return stub->AsyncCreateBackup(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Backup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::common::OperationMetadata>>
CloudFilestoreManagerConnectionImpl::DeleteBackup(
    google::cloud::filestore::v1::DeleteBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::common::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::DeleteBackupRequest const& request) {
        return stub->AsyncDeleteBackup(cq, std::move(context), options,
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
          google::cloud::common::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::filestore::v1::Backup>>
CloudFilestoreManagerConnectionImpl::UpdateBackup(
    google::cloud::filestore::v1::UpdateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::filestore::v1::Backup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::filestore::v1::UpdateBackupRequest const& request) {
        return stub->AsyncUpdateBackup(cq, std::move(context), options,
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
          google::cloud::filestore::v1::Backup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace filestore_v1_internal
}  // namespace cloud
}  // namespace google
