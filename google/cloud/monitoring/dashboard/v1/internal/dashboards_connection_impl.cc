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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#include "google/cloud/monitoring/dashboard/v1/internal/dashboards_connection_impl.h"
#include "google/cloud/monitoring/dashboard/v1/internal/dashboards_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_dashboard_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<monitoring_dashboard_v1::DashboardsServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<monitoring_dashboard_v1::DashboardsServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<monitoring_dashboard_v1::DashboardsServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    monitoring_dashboard_v1::DashboardsServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<monitoring_dashboard_v1::
               DashboardsServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

DashboardsServiceConnectionImpl::DashboardsServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<monitoring_dashboard_v1_internal::DashboardsServiceStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), DashboardsServiceConnection::options())) {}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnectionImpl::CreateDashboard(
    google::monitoring::dashboard::v1::CreateDashboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDashboard(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::dashboard::v1::CreateDashboardRequest const&
                 request) {
        return stub_->CreateDashboard(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnectionImpl::ListDashboards(
    google::monitoring::dashboard::v1::ListDashboardsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDashboards(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::monitoring::dashboard::v1::Dashboard>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<
           monitoring_dashboard_v1::DashboardsServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::monitoring::dashboard::v1::ListDashboardsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::monitoring::dashboard::v1::ListDashboardsRequest const&
                    request) {
              return stub->ListDashboards(context, options, request);
            },
            options, r, function_name);
      },
      [](google::monitoring::dashboard::v1::ListDashboardsResponse r) {
        std::vector<google::monitoring::dashboard::v1::Dashboard> result(
            r.dashboards().size());
        auto& messages = *r.mutable_dashboards();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnectionImpl::GetDashboard(
    google::monitoring::dashboard::v1::GetDashboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDashboard(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::dashboard::v1::GetDashboardRequest const&
                 request) {
        return stub_->GetDashboard(context, options, request);
      },
      *current, request, __func__);
}

Status DashboardsServiceConnectionImpl::DeleteDashboard(
    google::monitoring::dashboard::v1::DeleteDashboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDashboard(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::dashboard::v1::DeleteDashboardRequest const&
                 request) {
        return stub_->DeleteDashboard(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceConnectionImpl::UpdateDashboard(
    google::monitoring::dashboard::v1::UpdateDashboardRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDashboard(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::monitoring::dashboard::v1::UpdateDashboardRequest const&
                 request) {
        return stub_->UpdateDashboard(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_dashboard_v1_internal
}  // namespace cloud
}  // namespace google
