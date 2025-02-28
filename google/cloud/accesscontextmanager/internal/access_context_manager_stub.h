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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace accesscontextmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AccessContextManagerStub {
 public:
  virtual ~AccessContextManagerStub() = 0;

  virtual StatusOr<
      google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
  ListAccessPolicies(grpc::ClientContext& context,
                     google::identity::accesscontextmanager::v1::
                         ListAccessPoliciesRequest const& request) = 0;

  virtual StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
  GetAccessPolicy(
      grpc::ClientContext& context,
      google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAccessPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::AccessPolicy const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAccessPolicy(google::cloud::CompletionQueue& cq,
                          std::unique_ptr<grpc::ClientContext> context,
                          google::identity::accesscontextmanager::v1::
                              UpdateAccessPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAccessPolicy(google::cloud::CompletionQueue& cq,
                          std::unique_ptr<grpc::ClientContext> context,
                          google::identity::accesscontextmanager::v1::
                              DeleteAccessPolicyRequest const& request) = 0;

  virtual StatusOr<
      google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
  ListAccessLevels(
      grpc::ClientContext& context,
      google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
          request) = 0;

  virtual StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
  GetAccessLevel(
      grpc::ClientContext& context,
      google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateAccessLevel(google::cloud::CompletionQueue& cq,
                         std::unique_ptr<grpc::ClientContext> context,
                         google::identity::accesscontextmanager::v1::
                             CreateAccessLevelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateAccessLevel(google::cloud::CompletionQueue& cq,
                         std::unique_ptr<grpc::ClientContext> context,
                         google::identity::accesscontextmanager::v1::
                             UpdateAccessLevelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteAccessLevel(google::cloud::CompletionQueue& cq,
                         std::unique_ptr<grpc::ClientContext> context,
                         google::identity::accesscontextmanager::v1::
                             DeleteAccessLevelRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncReplaceAccessLevels(google::cloud::CompletionQueue& cq,
                           std::unique_ptr<grpc::ClientContext> context,
                           google::identity::accesscontextmanager::v1::
                               ReplaceAccessLevelsRequest const& request) = 0;

  virtual StatusOr<
      google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
  ListServicePerimeters(grpc::ClientContext& context,
                        google::identity::accesscontextmanager::v1::
                            ListServicePerimetersRequest const& request) = 0;

  virtual StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
  GetServicePerimeter(grpc::ClientContext& context,
                      google::identity::accesscontextmanager::v1::
                          GetServicePerimeterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CreateServicePerimeterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateServicePerimeterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteServicePerimeterRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncReplaceServicePerimeters(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          ReplaceServicePerimetersRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCommitServicePerimeters(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CommitServicePerimetersRequest const& request) = 0;

  virtual StatusOr<google::identity::accesscontextmanager::v1::
                       ListGcpUserAccessBindingsResponse>
  ListGcpUserAccessBindings(
      grpc::ClientContext& context,
      google::identity::accesscontextmanager::v1::
          ListGcpUserAccessBindingsRequest const& request) = 0;

  virtual StatusOr<
      google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  GetGcpUserAccessBinding(
      grpc::ClientContext& context,
      google::identity::accesscontextmanager::v1::
          GetGcpUserAccessBindingRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CreateGcpUserAccessBindingRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateGcpUserAccessBindingRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteGcpUserAccessBindingRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultAccessContextManagerStub : public AccessContextManagerStub {
 public:
  DefaultAccessContextManagerStub(
      std::unique_ptr<google::identity::accesscontextmanager::v1::
                          AccessContextManager::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<
      google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
  ListAccessPolicies(grpc::ClientContext& client_context,
                     google::identity::accesscontextmanager::v1::
                         ListAccessPoliciesRequest const& request) override;

  StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
  GetAccessPolicy(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAccessPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::AccessPolicy const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAccessPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateAccessPolicyRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAccessPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteAccessPolicyRequest const& request) override;

  StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
  ListAccessLevels(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
          request) override;

  StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
  GetAccessLevel(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAccessLevel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CreateAccessLevelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAccessLevel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateAccessLevelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAccessLevel(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteAccessLevelRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncReplaceAccessLevels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          ReplaceAccessLevelsRequest const& request) override;

  StatusOr<
      google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
  ListServicePerimeters(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::
          ListServicePerimetersRequest const& request) override;

  StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
  GetServicePerimeter(grpc::ClientContext& client_context,
                      google::identity::accesscontextmanager::v1::
                          GetServicePerimeterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CreateServicePerimeterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateServicePerimeterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteServicePerimeter(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteServicePerimeterRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncReplaceServicePerimeters(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          ReplaceServicePerimetersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCommitServicePerimeters(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CommitServicePerimetersRequest const& request) override;

  StatusOr<google::identity::accesscontextmanager::v1::
               ListGcpUserAccessBindingsResponse>
  ListGcpUserAccessBindings(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::
          ListGcpUserAccessBindingsRequest const& request) override;

  StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
  GetGcpUserAccessBinding(
      grpc::ClientContext& client_context,
      google::identity::accesscontextmanager::v1::
          GetGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncCreateGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          CreateGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          UpdateGcpUserAccessBindingRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteGcpUserAccessBinding(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::identity::accesscontextmanager::v1::
          DeleteGcpUserAccessBindingRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::identity::accesscontextmanager::v1::
                      AccessContextManager::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ACCESSCONTEXTMANAGER_INTERNAL_ACCESS_CONTEXT_MANAGER_STUB_H
