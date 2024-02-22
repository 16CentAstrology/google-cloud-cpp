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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_AUTHORIZED_CERTIFICATES_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_AUTHORIZED_CERTIFICATES_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/appengine/v1/appengine.grpc.pb.h>
#include <google/appengine/v1/operation.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AuthorizedCertificatesStub {
 public:
  virtual ~AuthorizedCertificatesStub() = 0;

  virtual StatusOr<google::appengine::v1::ListAuthorizedCertificatesResponse>
  ListAuthorizedCertificates(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::ListAuthorizedCertificatesRequest const&
          request) = 0;

  virtual StatusOr<google::appengine::v1::AuthorizedCertificate>
  GetAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetAuthorizedCertificateRequest const&
          request) = 0;

  virtual StatusOr<google::appengine::v1::AuthorizedCertificate>
  CreateAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::CreateAuthorizedCertificateRequest const&
          request) = 0;

  virtual StatusOr<google::appengine::v1::AuthorizedCertificate>
  UpdateAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::UpdateAuthorizedCertificateRequest const&
          request) = 0;

  virtual Status DeleteAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::DeleteAuthorizedCertificateRequest const&
          request) = 0;
};

class DefaultAuthorizedCertificatesStub : public AuthorizedCertificatesStub {
 public:
  explicit DefaultAuthorizedCertificatesStub(
      std::unique_ptr<
          google::appengine::v1::AuthorizedCertificates::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::appengine::v1::ListAuthorizedCertificatesResponse>
  ListAuthorizedCertificates(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::ListAuthorizedCertificatesRequest const& request)
      override;

  StatusOr<google::appengine::v1::AuthorizedCertificate>
  GetAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetAuthorizedCertificateRequest const& request)
      override;

  StatusOr<google::appengine::v1::AuthorizedCertificate>
  CreateAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::CreateAuthorizedCertificateRequest const& request)
      override;

  StatusOr<google::appengine::v1::AuthorizedCertificate>
  UpdateAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::UpdateAuthorizedCertificateRequest const& request)
      override;

  Status DeleteAuthorizedCertificate(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::DeleteAuthorizedCertificateRequest const& request)
      override;

 private:
  std::unique_ptr<google::appengine::v1::AuthorizedCertificates::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_AUTHORIZED_CERTIFICATES_STUB_H
