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
// source: google/cloud/billing/v1/cloud_billing.proto

#include "google/cloud/billing/v1/internal/cloud_billing_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/billing/v1/cloud_billing.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace billing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBillingMetadata::CloudBillingMetadata(
    std::shared_ptr<CloudBillingStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingMetadata::GetBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::GetBillingAccountRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBillingAccount(context, options, request);
}

StatusOr<google::cloud::billing::v1::ListBillingAccountsResponse>
CloudBillingMetadata::ListBillingAccounts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::ListBillingAccountsRequest const& request) {
  SetMetadata(context, options);
  return child_->ListBillingAccounts(context, options, request);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingMetadata::UpdateBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::UpdateBillingAccountRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateBillingAccount(context, options, request);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingMetadata::CreateBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::CreateBillingAccountRequest const& request) {
  SetMetadata(context, options);
  return child_->CreateBillingAccount(context, options, request);
}

StatusOr<google::cloud::billing::v1::ListProjectBillingInfoResponse>
CloudBillingMetadata::ListProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::ListProjectBillingInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListProjectBillingInfo(context, options, request);
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingMetadata::GetProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::GetProjectBillingInfoRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetProjectBillingInfo(context, options, request);
}

StatusOr<google::cloud::billing::v1::ProjectBillingInfo>
CloudBillingMetadata::UpdateProjectBillingInfo(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateProjectBillingInfo(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudBillingMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> CloudBillingMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudBillingMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::cloud::billing::v1::BillingAccount>
CloudBillingMetadata::MoveBillingAccount(
    grpc::ClientContext& context, Options const& options,
    google::cloud::billing::v1::MoveBillingAccountRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MoveBillingAccount(context, options, request);
}

void CloudBillingMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void CloudBillingMetadata::SetMetadata(grpc::ClientContext& context,
                                       Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1_internal
}  // namespace cloud
}  // namespace google
