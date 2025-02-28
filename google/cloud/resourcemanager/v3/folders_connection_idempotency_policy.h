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
// source: google/cloud/resourcemanager/v3/folders.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_FOLDERS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_FOLDERS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/resourcemanager/v3/folders.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FoldersConnectionIdempotencyPolicy {
 public:
  virtual ~FoldersConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<FoldersConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetFolder(
      google::cloud::resourcemanager::v3::GetFolderRequest const& request);

  virtual google::cloud::Idempotency ListFolders(
      google::cloud::resourcemanager::v3::ListFoldersRequest request);

  virtual google::cloud::Idempotency SearchFolders(
      google::cloud::resourcemanager::v3::SearchFoldersRequest request);

  virtual google::cloud::Idempotency CreateFolder(
      google::cloud::resourcemanager::v3::CreateFolderRequest const& request);

  virtual google::cloud::Idempotency UpdateFolder(
      google::cloud::resourcemanager::v3::UpdateFolderRequest const& request);

  virtual google::cloud::Idempotency MoveFolder(
      google::cloud::resourcemanager::v3::MoveFolderRequest const& request);

  virtual google::cloud::Idempotency DeleteFolder(
      google::cloud::resourcemanager::v3::DeleteFolderRequest const& request);

  virtual google::cloud::Idempotency UndeleteFolder(
      google::cloud::resourcemanager::v3::UndeleteFolderRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency GetOperation(
      google::longrunning::GetOperationRequest const& request);
};

std::unique_ptr<FoldersConnectionIdempotencyPolicy>
MakeDefaultFoldersConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_FOLDERS_CONNECTION_IDEMPOTENCY_POLICY_H
