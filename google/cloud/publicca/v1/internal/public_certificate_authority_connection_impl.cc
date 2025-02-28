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
// source: google/cloud/security/publicca/v1/service.proto

#include "google/cloud/publicca/v1/internal/public_certificate_authority_connection_impl.h"
#include "google/cloud/publicca/v1/internal/public_certificate_authority_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace publicca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<publicca_v1::PublicCertificateAuthorityServiceRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<publicca_v1::PublicCertificateAuthorityServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<publicca_v1::PublicCertificateAuthorityServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    publicca_v1::PublicCertificateAuthorityServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          publicca_v1::
              PublicCertificateAuthorityServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

PublicCertificateAuthorityServiceConnectionImpl::
    PublicCertificateAuthorityServiceConnectionImpl(
        std::unique_ptr<google::cloud::BackgroundThreads> background,
        std::shared_ptr<
            publicca_v1_internal::PublicCertificateAuthorityServiceStub>
            stub,
        Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options),
          PublicCertificateAuthorityServiceConnection::options())) {}

StatusOr<google::cloud::security::publicca::v1::ExternalAccountKey>
PublicCertificateAuthorityServiceConnectionImpl::CreateExternalAccountKey(
    google::cloud::security::publicca::v1::
        CreateExternalAccountKeyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateExternalAccountKey(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::security::publicca::v1::
                 CreateExternalAccountKeyRequest const& request) {
        return stub_->CreateExternalAccountKey(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace publicca_v1_internal
}  // namespace cloud
}  // namespace google
