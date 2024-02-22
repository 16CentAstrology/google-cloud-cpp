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
// source: google/cloud/essentialcontacts/v1/service.proto

#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_auth_decorator.h"
#include <google/cloud/essentialcontacts/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EssentialContactsServiceAuth::EssentialContactsServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<EssentialContactsServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceAuth::CreateContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::CreateContactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateContact(context, options, request);
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceAuth::UpdateContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::UpdateContactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateContact(context, options, request);
}

StatusOr<google::cloud::essentialcontacts::v1::ListContactsResponse>
EssentialContactsServiceAuth::ListContacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::ListContactsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListContacts(context, options, request);
}

StatusOr<google::cloud::essentialcontacts::v1::Contact>
EssentialContactsServiceAuth::GetContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::GetContactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetContact(context, options, request);
}

Status EssentialContactsServiceAuth::DeleteContact(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::DeleteContactRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteContact(context, options, request);
}

StatusOr<google::cloud::essentialcontacts::v1::ComputeContactsResponse>
EssentialContactsServiceAuth::ComputeContacts(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::ComputeContactsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ComputeContacts(context, options, request);
}

Status EssentialContactsServiceAuth::SendTestMessage(
    grpc::ClientContext& context, Options const& options,
    google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SendTestMessage(context, options, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google
