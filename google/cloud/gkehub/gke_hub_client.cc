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

#include "google/cloud/gkehub/gke_hub_client.h"
#include "google/cloud/gkehub/internal/gke_hub_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkehub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubClient::GkeHubClient(std::shared_ptr<GkeHubConnection> connection,
                           Options options)
    : connection_(std::move(connection)),
      options_(gkehub_internal::GkeHubDefaultOptions(std::move(options))) {}
GkeHubClient::~GkeHubClient() = default;

StreamRange<google::cloud::gkehub::v1::Membership>
GkeHubClient::ListMemberships(std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::ListMembershipsRequest request;
  request.set_parent(parent);
  return connection_->ListMemberships(request);
}

StreamRange<google::cloud::gkehub::v1::Membership>
GkeHubClient::ListMemberships(
    google::cloud::gkehub::v1::ListMembershipsRequest request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListMemberships(std::move(request));
}

StreamRange<google::cloud::gkehub::v1::Feature> GkeHubClient::ListFeatures(
    std::string const& parent, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::ListFeaturesRequest request;
  request.set_parent(parent);
  return connection_->ListFeatures(request);
}

StreamRange<google::cloud::gkehub::v1::Feature> GkeHubClient::ListFeatures(
    google::cloud::gkehub::v1::ListFeaturesRequest request, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->ListFeatures(std::move(request));
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubClient::GetMembership(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::GetMembershipRequest request;
  request.set_name(name);
  return connection_->GetMembership(request);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubClient::GetMembership(
    google::cloud::gkehub::v1::GetMembershipRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetMembership(request);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubClient::GetFeature(
    std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::GetFeatureRequest request;
  request.set_name(name);
  return connection_->GetFeature(request);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubClient::GetFeature(
    google::cloud::gkehub::v1::GetFeatureRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GetFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubClient::CreateMembership(
    std::string const& parent,
    google::cloud::gkehub::v1::Membership const& resource,
    std::string const& membership_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::CreateMembershipRequest request;
  request.set_parent(parent);
  *request.mutable_resource() = resource;
  request.set_membership_id(membership_id);
  return connection_->CreateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubClient::CreateMembership(
    google::cloud::gkehub::v1::CreateMembershipRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubClient::CreateFeature(std::string const& parent,
                            google::cloud::gkehub::v1::Feature const& resource,
                            std::string const& feature_id, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::CreateFeatureRequest request;
  request.set_parent(parent);
  *request.mutable_resource() = resource;
  request.set_feature_id(feature_id);
  return connection_->CreateFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubClient::CreateFeature(
    google::cloud::gkehub::v1::CreateFeatureRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->CreateFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubClient::DeleteMembership(std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::DeleteMembershipRequest request;
  request.set_name(name);
  return connection_->DeleteMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubClient::DeleteMembership(
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubClient::DeleteFeature(std::string const& name, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::DeleteFeatureRequest request;
  request.set_name(name);
  return connection_->DeleteFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::OperationMetadata>>
GkeHubClient::DeleteFeature(
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubClient::UpdateMembership(
    std::string const& name,
    google::cloud::gkehub::v1::Membership const& resource,
    google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::UpdateMembershipRequest request;
  request.set_name(name);
  *request.mutable_resource() = resource;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Membership>>
GkeHubClient::UpdateMembership(
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateMembership(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubClient::UpdateFeature(std::string const& name,
                            google::cloud::gkehub::v1::Feature const& resource,
                            google::protobuf::FieldMask const& update_mask,
                            Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  google::cloud::gkehub::v1::UpdateFeatureRequest request;
  request.set_name(name);
  *request.mutable_resource() = resource;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFeature(request);
}

future<StatusOr<google::cloud::gkehub::v1::Feature>>
GkeHubClient::UpdateFeature(
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateFeature(request);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubClient::GenerateConnectManifest(
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request,
    Options options) {
  internal::OptionsSpan span(
      internal::MergeOptions(std::move(options), options_));
  return connection_->GenerateConnectManifest(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub
}  // namespace cloud
}  // namespace google
