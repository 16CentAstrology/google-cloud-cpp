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
// source: google/cloud/developerconnect/v1/developer_connect.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_CONNECTION_IMPL_H

#include "google/cloud/developerconnect/v1/developer_connect_connection.h"
#include "google/cloud/developerconnect/v1/developer_connect_connection_idempotency_policy.h"
#include "google/cloud/developerconnect/v1/developer_connect_options.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_retry_traits.h"
#include "google/cloud/developerconnect/v1/internal/developer_connect_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace developerconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DeveloperConnectConnectionImpl
    : public developerconnect_v1::DeveloperConnectConnection {
 public:
  ~DeveloperConnectConnectionImpl() override = default;

  DeveloperConnectConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<developerconnect_v1_internal::DeveloperConnectStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::developerconnect::v1::Connection> ListConnections(
      google::cloud::developerconnect::v1::ListConnectionsRequest request)
      override;

  StatusOr<google::cloud::developerconnect::v1::Connection> GetConnection(
      google::cloud::developerconnect::v1::GetConnectionRequest const& request)
      override;

  future<StatusOr<google::cloud::developerconnect::v1::Connection>>
  CreateConnection(
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::developerconnect::v1::CreateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::developerconnect::v1::Connection>>
  CreateConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::developerconnect::v1::Connection>>
  UpdateConnection(
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::developerconnect::v1::UpdateConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::developerconnect::v1::Connection>>
  UpdateConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
  DeleteConnection(
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteConnection(
      ExperimentalTag, NoAwaitTag,
      google::cloud::developerconnect::v1::DeleteConnectionRequest const&
          request) override;

  future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
  DeleteConnection(ExperimentalTag,
                   google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
  CreateGitRepositoryLink(
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateGitRepositoryLink(
      ExperimentalTag, NoAwaitTag,
      google::cloud::developerconnect::v1::CreateGitRepositoryLinkRequest const&
          request) override;

  future<StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>>
  CreateGitRepositoryLink(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
  DeleteGitRepositoryLink(
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteGitRepositoryLink(
      ExperimentalTag, NoAwaitTag,
      google::cloud::developerconnect::v1::DeleteGitRepositoryLinkRequest const&
          request) override;

  future<StatusOr<google::cloud::developerconnect::v1::OperationMetadata>>
  DeleteGitRepositoryLink(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::developerconnect::v1::GitRepositoryLink>
  ListGitRepositoryLinks(
      google::cloud::developerconnect::v1::ListGitRepositoryLinksRequest
          request) override;

  StatusOr<google::cloud::developerconnect::v1::GitRepositoryLink>
  GetGitRepositoryLink(
      google::cloud::developerconnect::v1::GetGitRepositoryLinkRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::FetchReadWriteTokenResponse>
  FetchReadWriteToken(
      google::cloud::developerconnect::v1::FetchReadWriteTokenRequest const&
          request) override;

  StatusOr<google::cloud::developerconnect::v1::FetchReadTokenResponse>
  FetchReadToken(
      google::cloud::developerconnect::v1::FetchReadTokenRequest const& request)
      override;

  StreamRange<google::cloud::developerconnect::v1::LinkableGitRepository>
  FetchLinkableGitRepositories(
      google::cloud::developerconnect::v1::FetchLinkableGitRepositoriesRequest
          request) override;

  StatusOr<
      google::cloud::developerconnect::v1::FetchGitHubInstallationsResponse>
  FetchGitHubInstallations(
      google::cloud::developerconnect::v1::
          FetchGitHubInstallationsRequest const& request) override;

  StreamRange<std::string> FetchGitRefs(
      google::cloud::developerconnect::v1::FetchGitRefsRequest request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<developerconnect_v1_internal::DeveloperConnectStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace developerconnect_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEVELOPERCONNECT_V1_INTERNAL_DEVELOPER_CONNECT_CONNECTION_IMPL_H
