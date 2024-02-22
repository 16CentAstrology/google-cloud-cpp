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
// source: google/cloud/policytroubleshooter/v1/checker.proto

#include "google/cloud/policytroubleshooter/v1/internal/iam_checker_connection_impl.h"
#include "google/cloud/policytroubleshooter/v1/internal/iam_checker_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace policytroubleshooter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<policytroubleshooter_v1::IamCheckerRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<policytroubleshooter_v1::IamCheckerRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<policytroubleshooter_v1::IamCheckerBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<policytroubleshooter_v1::IamCheckerConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<policytroubleshooter_v1::
               IamCheckerConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

IamCheckerConnectionImpl::IamCheckerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<policytroubleshooter_v1_internal::IamCheckerStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      IamCheckerConnection::options())) {}

StatusOr<google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyResponse>
IamCheckerConnectionImpl::TroubleshootIamPolicy(
    google::cloud::policytroubleshooter::v1::TroubleshootIamPolicyRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TroubleshootIamPolicy(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::policytroubleshooter::v1::
                 TroubleshootIamPolicyRequest const& request) {
        return stub_->TroubleshootIamPolicy(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policytroubleshooter_v1_internal
}  // namespace cloud
}  // namespace google
