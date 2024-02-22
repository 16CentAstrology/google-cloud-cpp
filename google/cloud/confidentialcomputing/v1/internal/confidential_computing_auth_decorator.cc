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

#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_auth_decorator.h"
#include <google/cloud/confidentialcomputing/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace confidentialcomputing_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfidentialComputingAuth::ConfidentialComputingAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ConfidentialComputingStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::confidentialcomputing::v1::Challenge>
ConfidentialComputingAuth::CreateChallenge(
    grpc::ClientContext& context, Options const& options,
    google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChallenge(context, options, request);
}

StatusOr<google::cloud::confidentialcomputing::v1::VerifyAttestationResponse>
ConfidentialComputingAuth::VerifyAttestation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->VerifyAttestation(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1_internal
}  // namespace cloud
}  // namespace google
