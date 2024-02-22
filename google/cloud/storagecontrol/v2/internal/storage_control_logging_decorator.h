// Copyright 2024 Google LLC
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
// source: google/storage/control/v2/storage_control.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_LOGGING_DECORATOR_H

#include "google/cloud/storagecontrol/v2/internal/storage_control_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace storagecontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class StorageControlLogging : public StorageControlStub {
 public:
  ~StorageControlLogging() override = default;
  StorageControlLogging(std::shared_ptr<StorageControlStub> child,
                        TracingOptions tracing_options,
                        std::set<std::string> const& components);

  StatusOr<google::storage::control::v2::Folder> CreateFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::CreateFolderRequest const& request)
      override;

  Status DeleteFolder(grpc::ClientContext& context, Options const& options,
                      google::storage::control::v2::DeleteFolderRequest const&
                          request) override;

  StatusOr<google::storage::control::v2::Folder> GetFolder(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::GetFolderRequest const& request) override;

  StatusOr<google::storage::control::v2::ListFoldersResponse> ListFolders(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::ListFoldersRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRenameFolder(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::storage::control::v2::RenameFolderRequest const& request)
      override;

  StatusOr<google::storage::control::v2::StorageLayout> GetStorageLayout(
      grpc::ClientContext& context, Options const& options,
      google::storage::control::v2::GetStorageLayoutRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<StorageControlStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // StorageControlLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagecontrol_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGECONTROL_V2_INTERNAL_STORAGE_CONTROL_LOGGING_DECORATOR_H
