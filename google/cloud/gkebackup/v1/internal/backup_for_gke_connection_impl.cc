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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#include "google/cloud/gkebackup/v1/internal/backup_for_gke_connection_impl.h"
#include "google/cloud/gkebackup/v1/internal/backup_for_gke_option_defaults.h"
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
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<gkebackup_v1::BackupForGKERetryPolicy> retry_policy(
    Options const& options) {
  return options.get<gkebackup_v1::BackupForGKERetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<gkebackup_v1::BackupForGKEBackoffPolicyOption>()->clone();
}

std::unique_ptr<gkebackup_v1::BackupForGKEConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<gkebackup_v1::BackupForGKEConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<gkebackup_v1::BackupForGKEPollingPolicyOption>()->clone();
}

}  // namespace

BackupForGKEConnectionImpl::BackupForGKEConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<gkebackup_v1_internal::BackupForGKEStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      BackupForGKEConnection::options())) {}

future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
BackupForGKEConnectionImpl::CreateBackupPlan(
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateBackupPlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::BackupPlan>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::CreateBackupPlanRequest const&
              request) {
        return stub->AsyncCreateBackupPlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::BackupPlan>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::BackupPlan>
BackupForGKEConnectionImpl::ListBackupPlans(
    google::cloud::gkebackup::v1::ListBackupPlansRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBackupPlans(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::BackupPlan>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListBackupPlansRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListBackupPlansRequest const&
                       request) {
              return stub->ListBackupPlans(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListBackupPlansResponse r) {
        std::vector<google::cloud::gkebackup::v1::BackupPlan> result(
            r.backup_plans().size());
        auto& messages = *r.mutable_backup_plans();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::BackupPlan>
BackupForGKEConnectionImpl::GetBackupPlan(
    google::cloud::gkebackup::v1::GetBackupPlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBackupPlan(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkebackup::v1::GetBackupPlanRequest const& request) {
        return stub_->GetBackupPlan(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::BackupPlan>>
BackupForGKEConnectionImpl::UpdateBackupPlan(
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateBackupPlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::BackupPlan>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::UpdateBackupPlanRequest const&
              request) {
        return stub->AsyncUpdateBackupPlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::BackupPlan>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
BackupForGKEConnectionImpl::DeleteBackupPlan(
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteBackupPlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::DeleteBackupPlanRequest const&
              request) {
        return stub->AsyncDeleteBackupPlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::Backup>>
BackupForGKEConnectionImpl::CreateBackup(
    google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::Backup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
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
          google::cloud::gkebackup::v1::Backup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::Backup>
BackupForGKEConnectionImpl::ListBackups(
    google::cloud::gkebackup::v1::ListBackupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::Backup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListBackupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListBackupsRequest const&
                       request) {
              return stub->ListBackups(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListBackupsResponse r) {
        std::vector<google::cloud::gkebackup::v1::Backup> result(
            r.backups().size());
        auto& messages = *r.mutable_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::Backup>
BackupForGKEConnectionImpl::GetBackup(
    google::cloud::gkebackup::v1::GetBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBackup(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkebackup::v1::GetBackupRequest const& request) {
        return stub_->GetBackup(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::Backup>>
BackupForGKEConnectionImpl::UpdateBackup(
    google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::Backup>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
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
          google::cloud::gkebackup::v1::Backup>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
BackupForGKEConnectionImpl::DeleteBackup(
    google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteBackup(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
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
          google::cloud::gkebackup::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::VolumeBackup>
BackupForGKEConnectionImpl::ListVolumeBackups(
    google::cloud::gkebackup::v1::ListVolumeBackupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListVolumeBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::VolumeBackup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListVolumeBackupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListVolumeBackupsRequest const&
                       request) {
              return stub->ListVolumeBackups(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListVolumeBackupsResponse r) {
        std::vector<google::cloud::gkebackup::v1::VolumeBackup> result(
            r.volume_backups().size());
        auto& messages = *r.mutable_volume_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::VolumeBackup>
BackupForGKEConnectionImpl::GetVolumeBackup(
    google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVolumeBackup(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request) {
        return stub_->GetVolumeBackup(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
BackupForGKEConnectionImpl::CreateRestorePlan(
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRestorePlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::RestorePlan>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::CreateRestorePlanRequest const&
              request) {
        return stub->AsyncCreateRestorePlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::RestorePlan>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::RestorePlan>
BackupForGKEConnectionImpl::ListRestorePlans(
    google::cloud::gkebackup::v1::ListRestorePlansRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRestorePlans(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::RestorePlan>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListRestorePlansRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListRestorePlansRequest const&
                       request) {
              return stub->ListRestorePlans(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListRestorePlansResponse r) {
        std::vector<google::cloud::gkebackup::v1::RestorePlan> result(
            r.restore_plans().size());
        auto& messages = *r.mutable_restore_plans();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::RestorePlan>
BackupForGKEConnectionImpl::GetRestorePlan(
    google::cloud::gkebackup::v1::GetRestorePlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRestorePlan(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkebackup::v1::GetRestorePlanRequest const& request) {
        return stub_->GetRestorePlan(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::RestorePlan>>
BackupForGKEConnectionImpl::UpdateRestorePlan(
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateRestorePlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::RestorePlan>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::UpdateRestorePlanRequest const&
              request) {
        return stub->AsyncUpdateRestorePlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::RestorePlan>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
BackupForGKEConnectionImpl::DeleteRestorePlan(
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRestorePlan(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::DeleteRestorePlanRequest const&
              request) {
        return stub->AsyncDeleteRestorePlan(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::Restore>>
BackupForGKEConnectionImpl::CreateRestore(
    google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRestore(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::Restore>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
        return stub->AsyncCreateRestore(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::Restore>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::Restore>
BackupForGKEConnectionImpl::ListRestores(
    google::cloud::gkebackup::v1::ListRestoresRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRestores(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::Restore>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListRestoresRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::gkebackup::v1::ListRestoresRequest const&
                       request) {
              return stub->ListRestores(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListRestoresResponse r) {
        std::vector<google::cloud::gkebackup::v1::Restore> result(
            r.restores().size());
        auto& messages = *r.mutable_restores();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::Restore>
BackupForGKEConnectionImpl::GetRestore(
    google::cloud::gkebackup::v1::GetRestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRestore(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkebackup::v1::GetRestoreRequest const& request) {
        return stub_->GetRestore(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::Restore>>
BackupForGKEConnectionImpl::UpdateRestore(
    google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateRestore(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::Restore>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
        return stub->AsyncUpdateRestore(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::Restore>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::gkebackup::v1::OperationMetadata>>
BackupForGKEConnectionImpl::DeleteRestore(
    google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRestore(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::gkebackup::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
        return stub->AsyncDeleteRestore(cq, std::move(context), options,
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
          google::cloud::gkebackup::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::gkebackup::v1::VolumeRestore>
BackupForGKEConnectionImpl::ListVolumeRestores(
    google::cloud::gkebackup::v1::ListVolumeRestoresRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListVolumeRestores(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::gkebackup::v1::VolumeRestore>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<gkebackup_v1::BackupForGKERetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::gkebackup::v1::ListVolumeRestoresRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::gkebackup::v1::ListVolumeRestoresRequest const&
                    request) {
              return stub->ListVolumeRestores(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::gkebackup::v1::ListVolumeRestoresResponse r) {
        std::vector<google::cloud::gkebackup::v1::VolumeRestore> result(
            r.volume_restores().size());
        auto& messages = *r.mutable_volume_restores();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::gkebackup::v1::VolumeRestore>
BackupForGKEConnectionImpl::GetVolumeRestore(
    google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetVolumeRestore(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkebackup::v1::GetVolumeRestoreRequest const&
                 request) {
        return stub_->GetVolumeRestore(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google
