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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CLIENT_H

#include "google/cloud/oslogin/os_login_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace oslogin {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Cloud OS Login API
///
/// The Cloud OS Login API allows you to manage users and their associated SSH
/// public keys for logging into virtual machines on Google Cloud Platform.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class OsLoginServiceClient {
 public:
  explicit OsLoginServiceClient(
      std::shared_ptr<OsLoginServiceConnection> connection, Options opts = {});
  ~OsLoginServiceClient();

  ///@{
  // @name Copy and move support
  OsLoginServiceClient(OsLoginServiceClient const&) = default;
  OsLoginServiceClient& operator=(OsLoginServiceClient const&) = default;
  OsLoginServiceClient(OsLoginServiceClient&&) = default;
  OsLoginServiceClient& operator=(OsLoginServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(OsLoginServiceClient const& a,
                         OsLoginServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(OsLoginServiceClient const& a,
                         OsLoginServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Create an SSH public key
  ///
  /// @param parent  Required. The unique ID for the user in format
  /// `users/{user}`.
  /// @param ssh_public_key  Required. The SSH public key and expiration time.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.CreateSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L127}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> CreateSshPublicKey(
      std::string const& parent,
      google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
      Options opts = {});

  ///
  /// Create an SSH public key
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::CreateSshPublicKeyRequest,google/cloud/oslogin/v1/oslogin.proto#L127}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.CreateSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L127}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> CreateSshPublicKey(
      google::cloud::oslogin::v1::CreateSshPublicKeyRequest const& request,
      Options opts = {});

  ///
  /// Deletes a POSIX account.
  ///
  /// @param name  Required. A reference to the POSIX account to update. POSIX
  /// accounts are identified
  ///  by the project ID they are associated with. A reference to the POSIX
  ///  account is in format `users/{user}/projects/{project}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.oslogin.v1.DeletePosixAccountRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L141}
  ///
  Status DeletePosixAccount(std::string const& name, Options opts = {});

  ///
  /// Deletes a POSIX account.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::DeletePosixAccountRequest,google/cloud/oslogin/v1/oslogin.proto#L141}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.oslogin.v1.DeletePosixAccountRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L141}
  ///
  Status DeletePosixAccount(
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request,
      Options opts = {});

  ///
  /// Deletes an SSH public key.
  ///
  /// @param name  Required. The fingerprint of the public key to update. Public
  /// keys are identified by
  ///  their SHA-256 fingerprint. The fingerprint of the public key is in format
  ///  `users/{user}/sshPublicKeys/{fingerprint}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.oslogin.v1.DeleteSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L154}
  ///
  Status DeleteSshPublicKey(std::string const& name, Options opts = {});

  ///
  /// Deletes an SSH public key.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::DeleteSshPublicKeyRequest,google/cloud/oslogin/v1/oslogin.proto#L154}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.oslogin.v1.DeleteSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L154}
  ///
  Status DeleteSshPublicKey(
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request,
      Options opts = {});

  ///
  /// Retrieves the profile information used for logging in to a virtual machine
  /// on Google Compute Engine.
  ///
  /// @param name  Required. The unique ID for the user in format
  /// `users/{user}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::v1::LoginProfile,google/cloud/oslogin/v1/oslogin.proto#L115}
  ///
  /// [google.cloud.oslogin.v1.GetLoginProfileRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L167}
  /// [google.cloud.oslogin.v1.LoginProfile]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L115}
  ///
  StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the profile information used for logging in to a virtual machine
  /// on Google Compute Engine.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::GetLoginProfileRequest,google/cloud/oslogin/v1/oslogin.proto#L167}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::v1::LoginProfile,google/cloud/oslogin/v1/oslogin.proto#L115}
  ///
  /// [google.cloud.oslogin.v1.GetLoginProfileRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L167}
  /// [google.cloud.oslogin.v1.LoginProfile]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L115}
  ///
  StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request,
      Options opts = {});

  ///
  /// Retrieves an SSH public key.
  ///
  /// @param name  Required. The fingerprint of the public key to retrieve.
  /// Public keys are identified
  ///  by their SHA-256 fingerprint. The fingerprint of the public key is in
  ///  format `users/{user}/sshPublicKeys/{fingerprint}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.GetSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L184}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> GetSshPublicKey(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves an SSH public key.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::GetSshPublicKeyRequest,google/cloud/oslogin/v1/oslogin.proto#L184}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.GetSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L184}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> GetSshPublicKey(
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request,
      Options opts = {});

  ///
  /// Adds an SSH public key and returns the profile information. Default POSIX
  /// account information is set when no username and UID exist as part of the
  /// login profile.
  ///
  /// @param parent  Required. The unique ID for the user in format
  /// `users/{user}`.
  /// @param ssh_public_key  Optional. The SSH public key and expiration time.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::v1::ImportSshPublicKeyResponse,google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L197}
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyResponse]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      std::string const& parent,
      google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
      Options opts = {});

  ///
  /// Adds an SSH public key and returns the profile information. Default POSIX
  /// account information is set when no username and UID exist as part of the
  /// login profile.
  ///
  /// @param parent  Required. The unique ID for the user in format
  /// `users/{user}`.
  /// @param ssh_public_key  Optional. The SSH public key and expiration time.
  /// @param project_id  The project ID of the Google Cloud Platform project.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::v1::ImportSshPublicKeyResponse,google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L197}
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyResponse]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      std::string const& parent,
      google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
      std::string const& project_id, Options opts = {});

  ///
  /// Adds an SSH public key and returns the profile information. Default POSIX
  /// account information is set when no username and UID exist as part of the
  /// login profile.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::ImportSshPublicKeyRequest,google/cloud/oslogin/v1/oslogin.proto#L197}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::v1::ImportSshPublicKeyResponse,google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L197}
  /// [google.cloud.oslogin.v1.ImportSshPublicKeyResponse]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L214}
  ///
  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request,
      Options opts = {});

  ///
  /// Updates an SSH public key and returns the profile information. This method
  /// supports patch semantics.
  ///
  /// @param name  Required. The fingerprint of the public key to update. Public
  /// keys are identified by
  ///  their SHA-256 fingerprint. The fingerprint of the public key is in format
  ///  `users/{user}/sshPublicKeys/{fingerprint}`.
  /// @param ssh_public_key  Required. The SSH public key and expiration time.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.UpdateSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L223}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      std::string const& name,
      google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
      Options opts = {});

  ///
  /// Updates an SSH public key and returns the profile information. This method
  /// supports patch semantics.
  ///
  /// @param name  Required. The fingerprint of the public key to update. Public
  /// keys are identified by
  ///  their SHA-256 fingerprint. The fingerprint of the public key is in format
  ///  `users/{user}/sshPublicKeys/{fingerprint}`.
  /// @param ssh_public_key  Required. The SSH public key and expiration time.
  /// @param update_mask  Mask to control which fields get updated. Updates all
  /// if not present.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.UpdateSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L223}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      std::string const& name,
      google::cloud::oslogin::common::SshPublicKey const& ssh_public_key,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an SSH public key and returns the profile information. This method
  /// supports patch semantics.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::oslogin::v1::UpdateSshPublicKeyRequest,google/cloud/oslogin/v1/oslogin.proto#L223}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::oslogin::common::SshPublicKey,google/cloud/oslogin/common/common.proto#L89}
  ///
  /// [google.cloud.oslogin.v1.UpdateSshPublicKeyRequest]:
  /// @googleapis_reference_link{google/cloud/oslogin/v1/oslogin.proto#L223}
  /// [google.cloud.oslogin.common.SshPublicKey]:
  /// @googleapis_reference_link{google/cloud/oslogin/common/common.proto#L89}
  ///
  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<OsLoginServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_OS_LOGIN_CLIENT_H
