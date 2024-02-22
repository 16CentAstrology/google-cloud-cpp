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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#include "google/cloud/managedidentities/v1/internal/managed_identities_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/managedidentities/v1/managed_identities_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace managedidentities_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedIdentitiesServiceStub::~ManagedIdentitiesServiceStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncCreateMicrosoftAdDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::CreateMicrosoftAdDomainRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::
                 CreateMicrosoftAdDomainRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateMicrosoftAdDomain(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
DefaultManagedIdentitiesServiceStub::ResetAdminPassword(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
        request) {
  google::cloud::managedidentities::v1::ResetAdminPasswordResponse response;
  auto status = grpc_stub_->ResetAdminPassword(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
DefaultManagedIdentitiesServiceStub::ListDomains(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedidentities::v1::ListDomainsRequest const& request) {
  google::cloud::managedidentities::v1::ListDomainsResponse response;
  auto status = grpc_stub_->ListDomains(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::managedidentities::v1::Domain>
DefaultManagedIdentitiesServiceStub::GetDomain(
    grpc::ClientContext& context, Options const&,
    google::cloud::managedidentities::v1::GetDomainRequest const& request) {
  google::cloud::managedidentities::v1::Domain response;
  auto status = grpc_stub_->GetDomain(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncUpdateDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::UpdateDomainRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::UpdateDomainRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::UpdateDomainRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateDomain(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncDeleteDomain(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::DeleteDomainRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::DeleteDomainRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::DeleteDomainRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteDomain(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncAttachTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::AttachTrustRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::AttachTrustRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::AttachTrustRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncAttachTrust(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncReconfigureTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::ReconfigureTrustRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
              request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReconfigureTrust(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncDetachTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::DetachTrustRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::DetachTrustRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::DetachTrustRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDetachTrust(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncValidateTrust(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::cloud::managedidentities::v1::ValidateTrustRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::managedidentities::v1::ValidateTrustRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::managedidentities::v1::ValidateTrustRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncValidateTrust(context, request, cq);
      },
      request, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
DefaultManagedIdentitiesServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultManagedIdentitiesServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_->AsyncCancelOperation(context, request, cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1_internal
}  // namespace cloud
}  // namespace google
