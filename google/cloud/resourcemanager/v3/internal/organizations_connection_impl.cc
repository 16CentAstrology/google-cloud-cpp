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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/v3/internal/organizations_connection_impl.h"
#include "google/cloud/resourcemanager/v3/internal/organizations_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<resourcemanager_v3::OrganizationsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<resourcemanager_v3::OrganizationsRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<resourcemanager_v3::OrganizationsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<resourcemanager_v3::OrganizationsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<resourcemanager_v3::OrganizationsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

OrganizationsConnectionImpl::OrganizationsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<resourcemanager_v3_internal::OrganizationsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      OrganizationsConnection::options())) {}

StatusOr<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnectionImpl::GetOrganization(
    google::cloud::resourcemanager::v3::GetOrganizationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOrganization(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::resourcemanager::v3::GetOrganizationRequest const&
                 request) {
        return stub_->GetOrganization(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnectionImpl::SearchOrganizations(
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->SearchOrganizations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::Organization>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<resourcemanager_v3::OrganizationsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::resourcemanager::v3::SearchOrganizationsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::resourcemanager::v3::
                       SearchOrganizationsRequest const& request) {
              return stub->SearchOrganizations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::resourcemanager::v3::SearchOrganizationsResponse r) {
        std::vector<google::cloud::resourcemanager::v3::Organization> result(
            r.organizations().size());
        auto& messages = *r.mutable_organizations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::iam::v1::Policy> OrganizationsConnectionImpl::GetIamPolicy(
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

StatusOr<google::iam::v1::Policy> OrganizationsConnectionImpl::SetIamPolicy(
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

StatusOr<google::iam::v1::TestIamPermissionsResponse>
OrganizationsConnectionImpl::TestIamPermissions(
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

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
