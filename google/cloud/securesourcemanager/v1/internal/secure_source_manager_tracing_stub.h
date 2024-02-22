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
// source: google/cloud/securesourcemanager/v1/secure_source_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_TRACING_STUB_H

#include "google/cloud/securesourcemanager/v1/internal/secure_source_manager_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace securesourcemanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SecureSourceManagerTracingStub : public SecureSourceManagerStub {
 public:
  ~SecureSourceManagerTracingStub() override = default;

  explicit SecureSourceManagerTracingStub(
      std::shared_ptr<SecureSourceManagerStub> child);

  StatusOr<google::cloud::securesourcemanager::v1::ListInstancesResponse>
  ListInstances(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListInstancesRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::Instance> GetInstance(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::securesourcemanager::v1::CreateInstanceRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::securesourcemanager::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::ListRepositoriesResponse>
  ListRepositories(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::ListRepositoriesRequest const&
          request) override;

  StatusOr<google::cloud::securesourcemanager::v1::Repository> GetRepository(
      grpc::ClientContext& context, Options const& options,
      google::cloud::securesourcemanager::v1::GetRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::securesourcemanager::v1::CreateRepositoryRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRepository(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::securesourcemanager::v1::DeleteRepositoryRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicyRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissionsRepo(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<SecureSourceManagerStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<SecureSourceManagerStub> MakeSecureSourceManagerTracingStub(
    std::shared_ptr<SecureSourceManagerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securesourcemanager_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SECURESOURCEMANAGER_V1_INTERNAL_SECURE_SOURCE_MANAGER_TRACING_STUB_H
