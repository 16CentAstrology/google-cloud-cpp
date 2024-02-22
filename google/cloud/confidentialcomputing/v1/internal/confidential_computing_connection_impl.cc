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
// source: google/cloud/confidentialcomputing/v1/service.proto

#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_connection_impl.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace confidentialcomputing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<confidentialcomputing_v1::ConfidentialComputingRetryPolicy>
retry_policy(Options const& options) {
  return options
      .get<confidentialcomputing_v1::ConfidentialComputingRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<confidentialcomputing_v1::ConfidentialComputingBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    confidentialcomputing_v1::ConfidentialComputingConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<confidentialcomputing_v1::
               ConfidentialComputingConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

ConfidentialComputingConnectionImpl::ConfidentialComputingConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<
        confidentialcomputing_v1_internal::ConfidentialComputingStub>
        stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), ConfidentialComputingConnection::options())) {}

StatusOr<google::cloud::confidentialcomputing::v1::Challenge>
ConfidentialComputingConnectionImpl::CreateChallenge(
    google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateChallenge(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::confidentialcomputing::v1::
                 CreateChallengeRequest const& request) {
        return stub_->CreateChallenge(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::confidentialcomputing::v1::VerifyAttestationResponse>
ConfidentialComputingConnectionImpl::VerifyAttestation(
    google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->VerifyAttestation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::confidentialcomputing::v1::
                 VerifyAttestationRequest const& request) {
        return stub_->VerifyAttestation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1_internal
}  // namespace cloud
}  // namespace google
