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
// source: google/devtools/artifactregistry/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_INTERNAL_ARTIFACT_REGISTRY_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_INTERNAL_ARTIFACT_REGISTRY_TRACING_CONNECTION_H

#include "google/cloud/artifactregistry/v1/artifact_registry_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace artifactregistry_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ArtifactRegistryTracingConnection
    : public artifactregistry_v1::ArtifactRegistryConnection {
 public:
  ~ArtifactRegistryTracingConnection() override = default;

  explicit ArtifactRegistryTracingConnection(
      std::shared_ptr<artifactregistry_v1::ArtifactRegistryConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::devtools::artifactregistry::v1::DockerImage>
  ListDockerImages(
      google::devtools::artifactregistry::v1::ListDockerImagesRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::DockerImage> GetDockerImage(
      google::devtools::artifactregistry::v1::GetDockerImageRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::MavenArtifact>
  ListMavenArtifacts(
      google::devtools::artifactregistry::v1::ListMavenArtifactsRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::MavenArtifact>
  GetMavenArtifact(
      google::devtools::artifactregistry::v1::GetMavenArtifactRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::NpmPackage>
  ListNpmPackages(google::devtools::artifactregistry::v1::ListNpmPackagesRequest
                      request) override;

  StatusOr<google::devtools::artifactregistry::v1::NpmPackage> GetNpmPackage(
      google::devtools::artifactregistry::v1::GetNpmPackageRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::PythonPackage>
  ListPythonPackages(
      google::devtools::artifactregistry::v1::ListPythonPackagesRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::PythonPackage>
  GetPythonPackage(
      google::devtools::artifactregistry::v1::GetPythonPackageRequest const&
          request) override;

  future<StatusOr<
      google::devtools::artifactregistry::v1::ImportAptArtifactsResponse>>
  ImportAptArtifacts(
      google::devtools::artifactregistry::v1::ImportAptArtifactsRequest const&
          request) override;

  future<StatusOr<
      google::devtools::artifactregistry::v1::ImportYumArtifactsResponse>>
  ImportYumArtifacts(
      google::devtools::artifactregistry::v1::ImportYumArtifactsRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::Repository>
  ListRepositories(
      google::devtools::artifactregistry::v1::ListRepositoriesRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Repository> GetRepository(
      google::devtools::artifactregistry::v1::GetRepositoryRequest const&
          request) override;

  future<StatusOr<google::devtools::artifactregistry::v1::Repository>>
  CreateRepository(
      google::devtools::artifactregistry::v1::CreateRepositoryRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::Repository> UpdateRepository(
      google::devtools::artifactregistry::v1::UpdateRepositoryRequest const&
          request) override;

  future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
  DeleteRepository(
      google::devtools::artifactregistry::v1::DeleteRepositoryRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::Package> ListPackages(
      google::devtools::artifactregistry::v1::ListPackagesRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Package> GetPackage(
      google::devtools::artifactregistry::v1::GetPackageRequest const& request)
      override;

  future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
  DeletePackage(
      google::devtools::artifactregistry::v1::DeletePackageRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::Version> ListVersions(
      google::devtools::artifactregistry::v1::ListVersionsRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Version> GetVersion(
      google::devtools::artifactregistry::v1::GetVersionRequest const& request)
      override;

  future<StatusOr<google::devtools::artifactregistry::v1::OperationMetadata>>
  DeleteVersion(
      google::devtools::artifactregistry::v1::DeleteVersionRequest const&
          request) override;

  future<StatusOr<
      google::devtools::artifactregistry::v1::BatchDeleteVersionsMetadata>>
  BatchDeleteVersions(
      google::devtools::artifactregistry::v1::BatchDeleteVersionsRequest const&
          request) override;

  StreamRange<google::devtools::artifactregistry::v1::File> ListFiles(
      google::devtools::artifactregistry::v1::ListFilesRequest request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::File> GetFile(
      google::devtools::artifactregistry::v1::GetFileRequest const& request)
      override;

  StreamRange<google::devtools::artifactregistry::v1::Tag> ListTags(
      google::devtools::artifactregistry::v1::ListTagsRequest request) override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> GetTag(
      google::devtools::artifactregistry::v1::GetTagRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> CreateTag(
      google::devtools::artifactregistry::v1::CreateTagRequest const& request)
      override;

  StatusOr<google::devtools::artifactregistry::v1::Tag> UpdateTag(
      google::devtools::artifactregistry::v1::UpdateTagRequest const& request)
      override;

  Status DeleteTag(
      google::devtools::artifactregistry::v1::DeleteTagRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
  GetProjectSettings(
      google::devtools::artifactregistry::v1::GetProjectSettingsRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::ProjectSettings>
  UpdateProjectSettings(
      google::devtools::artifactregistry::v1::
          UpdateProjectSettingsRequest const& request) override;

  StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig> GetVPCSCConfig(
      google::devtools::artifactregistry::v1::GetVPCSCConfigRequest const&
          request) override;

  StatusOr<google::devtools::artifactregistry::v1::VPCSCConfig>
  UpdateVPCSCConfig(
      google::devtools::artifactregistry::v1::UpdateVPCSCConfigRequest const&
          request) override;

 private:
  std::shared_ptr<artifactregistry_v1::ArtifactRegistryConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<artifactregistry_v1::ArtifactRegistryConnection>
MakeArtifactRegistryTracingConnection(
    std::shared_ptr<artifactregistry_v1::ArtifactRegistryConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace artifactregistry_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ARTIFACTREGISTRY_V1_INTERNAL_ARTIFACT_REGISTRY_TRACING_CONNECTION_H
