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
// source: google/cloud/oslogin/v1/oslogin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_INTERNAL_OS_LOGIN_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_INTERNAL_OS_LOGIN_METADATA_DECORATOR_H

#include "google/cloud/oslogin/v1/internal/os_login_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace oslogin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OsLoginServiceMetadata : public OsLoginServiceStub {
 public:
  ~OsLoginServiceMetadata() override = default;
  OsLoginServiceMetadata(std::shared_ptr<OsLoginServiceStub> child,
                         std::multimap<std::string, std::string> fixed_metadata,
                         std::string api_client_header = "");

  StatusOr<google::cloud::oslogin::common::SshPublicKey> CreateSshPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::CreateSshPublicKeyRequest const& request)
      override;

  Status DeletePosixAccount(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request)
      override;

  Status DeleteSshPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::common::SshPublicKey> GetSshPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<OsLoginServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_V1_INTERNAL_OS_LOGIN_METADATA_DECORATOR_H
