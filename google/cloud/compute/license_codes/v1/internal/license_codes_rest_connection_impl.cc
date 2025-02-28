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
// source: google/cloud/compute/license_codes/v1/license_codes.proto

#include "google/cloud/compute/license_codes/v1/internal/license_codes_rest_connection_impl.h"
#include "google/cloud/compute/license_codes/v1/internal/license_codes_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_license_codes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LicenseCodesRestConnectionImpl::LicenseCodesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_license_codes_v1_internal::LicenseCodesRestStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      LicenseCodesConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::LicenseCode>
LicenseCodesRestConnectionImpl::GetLicenseCode(
    google::cloud::cpp::compute::license_codes::v1::GetLicenseCodeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLicenseCode(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::license_codes::v1::
                 GetLicenseCodeRequest const& request) {
        return stub_->GetLicenseCode(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
LicenseCodesRestConnectionImpl::TestIamPermissions(
    google::cloud::cpp::compute::license_codes::v1::
        TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::license_codes::v1::
                 TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_license_codes_v1_internal
}  // namespace cloud
}  // namespace google
