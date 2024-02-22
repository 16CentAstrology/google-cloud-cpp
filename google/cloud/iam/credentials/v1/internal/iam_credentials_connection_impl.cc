// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#include "google/cloud/iam/credentials/v1/internal/iam_credentials_connection_impl.h"
#include "google/cloud/iam/credentials/v1/internal/iam_credentials_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_credentials_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<iam_credentials_v1::IAMCredentialsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<iam_credentials_v1::IAMCredentialsRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<iam_credentials_v1::IAMCredentialsBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<iam_credentials_v1::IAMCredentialsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          iam_credentials_v1::IAMCredentialsConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

IAMCredentialsConnectionImpl::IAMCredentialsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<iam_credentials_v1_internal::IAMCredentialsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      IAMCredentialsConnection::options())) {}

StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
IAMCredentialsConnectionImpl::GenerateAccessToken(
    google::iam::credentials::v1::GenerateAccessTokenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateAccessToken(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::credentials::v1::GenerateAccessTokenRequest const&
                 request) {
        return stub_->GenerateAccessToken(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
IAMCredentialsConnectionImpl::GenerateIdToken(
    google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateIdToken(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
        return stub_->GenerateIdToken(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::credentials::v1::SignBlobResponse>
IAMCredentialsConnectionImpl::SignBlob(
    google::iam::credentials::v1::SignBlobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SignBlob(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::credentials::v1::SignBlobRequest const& request) {
        return stub_->SignBlob(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::credentials::v1::SignJwtResponse>
IAMCredentialsConnectionImpl::SignJwt(
    google::iam::credentials::v1::SignJwtRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SignJwt(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::iam::credentials::v1::SignJwtRequest const& request) {
        return stub_->SignJwt(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_credentials_v1_internal
}  // namespace cloud
}  // namespace google
