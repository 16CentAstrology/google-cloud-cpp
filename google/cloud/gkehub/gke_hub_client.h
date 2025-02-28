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
// source: google/cloud/gkehub/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CLIENT_H

#include "google/cloud/gkehub/gke_hub_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The GKE Hub service handles the registration of many Kubernetes clusters to
/// Google Cloud, and the management of multi-cluster features over those
/// clusters.
///
/// The GKE Hub service operates on the following resources:
///
/// * [Membership][google.cloud.gkehub.v1.Membership]
/// * [Feature][google.cloud.gkehub.v1.Feature]
///
/// GKE Hub is currently only available in the global region.
///
/// **Membership management may be non-trivial:** it is recommended to use one
/// of the Google-provided client libraries or tools where possible when working
/// with Membership resources.
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
class GkeHubClient {
 public:
  explicit GkeHubClient(std::shared_ptr<GkeHubConnection> connection,
                        Options opts = {});
  ~GkeHubClient();

  ///@{
  // @name Copy and move support
  GkeHubClient(GkeHubClient const&) = default;
  GkeHubClient& operator=(GkeHubClient const&) = default;
  GkeHubClient(GkeHubClient&&) = default;
  GkeHubClient& operator=(GkeHubClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(GkeHubClient const& a, GkeHubClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GkeHubClient const& a, GkeHubClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists Memberships in a given project and location.
  ///
  /// @param parent  Required. The parent (project and location) where the
  /// Memberships will be listed.
  ///  Specified in the format `projects/*/locations/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.ListMembershipsRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L183}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  StreamRange<google::cloud::gkehub::v1::Membership> ListMemberships(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Memberships in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::ListMembershipsRequest,google/cloud/gkehub/v1/service.proto#L183}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.ListMembershipsRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L183}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  StreamRange<google::cloud::gkehub::v1::Membership> ListMemberships(
      google::cloud::gkehub::v1::ListMembershipsRequest request,
      Options opts = {});

  ///
  /// Lists Features in a given project and location.
  ///
  /// @param parent  Required. The parent (project and location) where the
  /// Features will be listed.
  ///  Specified in the format `projects/*/locations/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.ListFeaturesRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L435}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  StreamRange<google::cloud::gkehub::v1::Feature> ListFeatures(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Features in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::ListFeaturesRequest,google/cloud/gkehub/v1/service.proto#L435}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.ListFeaturesRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L435}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  StreamRange<google::cloud::gkehub::v1::Feature> ListFeatures(
      google::cloud::gkehub::v1::ListFeaturesRequest request,
      Options opts = {});

  ///
  /// Gets the details of a Membership.
  ///
  /// @param name  Required. The Membership resource name in the format
  ///  `projects/*/locations/*/memberships/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.GetMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L245}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      std::string const& name, Options opts = {});

  ///
  /// Gets the details of a Membership.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::GetMembershipRequest,google/cloud/gkehub/v1/service.proto#L245}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.GetMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L245}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  StatusOr<google::cloud::gkehub::v1::Membership> GetMembership(
      google::cloud::gkehub::v1::GetMembershipRequest const& request,
      Options opts = {});

  ///
  /// Gets details of a single Feature.
  ///
  /// @param name  Required. The Feature resource name in the format
  ///  `projects/*/locations/*/features/*`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.GetFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L489}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Feature.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::GetFeatureRequest,google/cloud/gkehub/v1/service.proto#L489}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.GetFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L489}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  StatusOr<google::cloud::gkehub::v1::Feature> GetFeature(
      google::cloud::gkehub::v1::GetFeatureRequest const& request,
      Options opts = {});

  ///
  /// Creates a new Membership.
  ///
  /// **This is currently only supported for GKE clusters on Google Cloud**.
  /// To register other clusters, follow the instructions at
  /// https://cloud.google.com/anthos/multicluster-management/connect/registering-a-cluster.
  ///
  /// @param parent  Required. The parent (project and location) where the
  /// Memberships will be created.
  ///  Specified in the format `projects/*/locations/*`.
  /// @param resource  Required. The membership to create.
  /// @param membership_id  Required. Client chosen ID for the membership.
  /// `membership_id` must be a valid RFC
  ///  1123 compliant DNS label:
  ///    1. At most 63 characters in length
  ///    2. It must consist of lower case alphanumeric characters or `-`
  ///    3. It must start and end with an alphanumeric character
  ///  Which can be expressed as the regex: `[a-z0-9]([-a-z0-9]*[a-z0-9])?`,
  ///  with a maximum length of 63 characters.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.CreateMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L257}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Membership>> CreateMembership(
      std::string const& parent,
      google::cloud::gkehub::v1::Membership const& resource,
      std::string const& membership_id, Options opts = {});

  ///
  /// Creates a new Membership.
  ///
  /// **This is currently only supported for GKE clusters on Google Cloud**.
  /// To register other clusters, follow the instructions at
  /// https://cloud.google.com/anthos/multicluster-management/connect/registering-a-cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::CreateMembershipRequest,google/cloud/gkehub/v1/service.proto#L257}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.CreateMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L257}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Membership>> CreateMembership(
      google::cloud::gkehub::v1::CreateMembershipRequest const& request,
      Options opts = {});

  ///
  /// Adds a new Feature.
  ///
  /// @param parent  Required. The parent (project and location) where the
  /// Feature will be created.
  ///  Specified in the format `projects/*/locations/*`.
  /// @param resource  The Feature resource to create.
  /// @param feature_id  The ID of the feature to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.CreateFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L500}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Feature>> CreateFeature(
      std::string const& parent,
      google::cloud::gkehub::v1::Feature const& resource,
      std::string const& feature_id, Options opts = {});

  ///
  /// Adds a new Feature.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::CreateFeatureRequest,google/cloud/gkehub/v1/service.proto#L500}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.CreateFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L500}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Feature>> CreateFeature(
      google::cloud::gkehub::v1::CreateFeatureRequest const& request,
      Options opts = {});

  ///
  /// Removes a Membership.
  ///
  /// **This is currently only supported for GKE clusters on Google Cloud**.
  /// To unregister other clusters, follow the instructions at
  /// https://cloud.google.com/anthos/multicluster-management/connect/unregistering-a-cluster.
  ///
  /// @param name  Required. The Membership resource name in the format
  ///  `projects/*/locations/*/memberships/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::OperationMetadata,google/cloud/gkehub/v1/service.proto#L602}
  ///
  /// [google.cloud.gkehub.v1.DeleteMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L298}
  /// [google.cloud.gkehub.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L602}
  ///
  future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteMembership(std::string const& name, Options opts = {});

  ///
  /// Removes a Membership.
  ///
  /// **This is currently only supported for GKE clusters on Google Cloud**.
  /// To unregister other clusters, follow the instructions at
  /// https://cloud.google.com/anthos/multicluster-management/connect/unregistering-a-cluster.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::DeleteMembershipRequest,google/cloud/gkehub/v1/service.proto#L298}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::OperationMetadata,google/cloud/gkehub/v1/service.proto#L602}
  ///
  /// [google.cloud.gkehub.v1.DeleteMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L298}
  /// [google.cloud.gkehub.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L602}
  ///
  future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
  DeleteMembership(
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request,
      Options opts = {});

  ///
  /// Removes a Feature.
  ///
  /// @param name  Required. The Feature resource name in the format
  ///  `projects/*/locations/*/features/*`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::OperationMetadata,google/cloud/gkehub/v1/service.proto#L602}
  ///
  /// [google.cloud.gkehub.v1.DeleteFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L532}
  /// [google.cloud.gkehub.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L602}
  ///
  future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>> DeleteFeature(
      std::string const& name, Options opts = {});

  ///
  /// Removes a Feature.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::DeleteFeatureRequest,google/cloud/gkehub/v1/service.proto#L532}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::OperationMetadata,google/cloud/gkehub/v1/service.proto#L602}
  ///
  /// [google.cloud.gkehub.v1.DeleteFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L532}
  /// [google.cloud.gkehub.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L602}
  ///
  future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>> DeleteFeature(
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request,
      Options opts = {});

  ///
  /// Updates an existing Membership.
  ///
  /// @param name  Required. The Membership resource name in the format
  ///  `projects/*/locations/*/memberships/*`.
  /// @param resource  Required. Only fields specified in update_mask are
  /// updated.
  ///  If you specify a field in the update_mask but don't specify its value
  ///  here that field will be deleted. If you are updating a map field, set the
  ///  value of a key to null or empty string to delete the key from the map.
  ///  It's not possible to update a key's value to the empty string. If you
  ///  specify the update_mask to be a special path "*", fully replaces all
  ///  user-modifiable fields to match `resource`.
  /// @param update_mask  Required. Mask of fields to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.UpdateMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L325}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Membership>> UpdateMembership(
      std::string const& name,
      google::cloud::gkehub::v1::Membership const& resource,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an existing Membership.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::UpdateMembershipRequest,google/cloud/gkehub/v1/service.proto#L325}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Membership,google/cloud/gkehub/v1/membership.proto#L32}
  ///
  /// [google.cloud.gkehub.v1.UpdateMembershipRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L325}
  /// [google.cloud.gkehub.v1.Membership]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/membership.proto#L32}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Membership>> UpdateMembership(
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request,
      Options opts = {});

  ///
  /// Updates an existing Feature.
  ///
  /// @param name  Required. The Feature resource name in the format
  ///  `projects/*/locations/*/features/*`.
  /// @param resource  Only fields specified in update_mask are updated.
  ///  If you specify a field in the update_mask but don't specify its value
  ///  here that field will be deleted. If you are updating a map field, set the
  ///  value of a key to null or empty string to delete the key from the map.
  ///  It's not possible to update a key's value to the empty string. If you
  ///  specify the update_mask to be a special path "*", fully replaces all
  ///  user-modifiable fields to match `resource`.
  /// @param update_mask  Mask of fields to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.UpdateFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L563}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Feature>> UpdateFeature(
      std::string const& name,
      google::cloud::gkehub::v1::Feature const& resource,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates an existing Feature.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::UpdateFeatureRequest,google/cloud/gkehub/v1/service.proto#L563}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::Feature,google/cloud/gkehub/v1/feature.proto#L34}
  ///
  /// [google.cloud.gkehub.v1.UpdateFeatureRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L563}
  /// [google.cloud.gkehub.v1.Feature]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/feature.proto#L34}
  ///
  future<StatusOr<google::cloud::gkehub::v1::Feature>> UpdateFeature(
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request,
      Options opts = {});

  ///
  /// Generates the manifest for deployment of the GKE connect agent.
  ///
  /// **This method is used internally by Google-provided libraries.**
  /// Most clients should not need to call this method directly.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::gkehub::v1::GenerateConnectManifestRequest,google/cloud/gkehub/v1/service.proto#L367}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::gkehub::v1::GenerateConnectManifestResponse,google/cloud/gkehub/v1/service.proto#L408}
  ///
  /// [google.cloud.gkehub.v1.GenerateConnectManifestRequest]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L367}
  /// [google.cloud.gkehub.v1.GenerateConnectManifestResponse]:
  /// @googleapis_reference_link{google/cloud/gkehub/v1/service.proto#L408}
  ///
  StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
  GenerateConnectManifest(
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<GkeHubConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CLIENT_H
