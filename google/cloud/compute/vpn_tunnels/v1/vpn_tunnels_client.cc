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
// source: google/cloud/compute/vpn_tunnels/v1/vpn_tunnels.proto

#include "google/cloud/compute/vpn_tunnels/v1/vpn_tunnels_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_vpn_tunnels_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VpnTunnelsClient::VpnTunnelsClient(
    std::shared_ptr<VpnTunnelsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
VpnTunnelsClient::~VpnTunnelsClient() = default;

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
VpnTunnelsClient::AggregatedListVpnTunnels(std::string const& project,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::AggregatedListVpnTunnelsRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListVpnTunnels(request);
}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::VpnTunnelsScopedList>>
VpnTunnelsClient::AggregatedListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::
        AggregatedListVpnTunnelsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListVpnTunnels(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::DeleteVpnTunnel(std::string const& project,
                                  std::string const& region,
                                  std::string const& vpn_tunnel, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::DeleteVpnTunnelRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_vpn_tunnel(vpn_tunnel);
  return connection_->DeleteVpnTunnel(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::DeleteVpnTunnel(NoAwaitTag, std::string const& project,
                                  std::string const& region,
                                  std::string const& vpn_tunnel, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::DeleteVpnTunnelRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_vpn_tunnel(vpn_tunnel);
  return connection_->DeleteVpnTunnel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::DeleteVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::DeleteVpnTunnelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteVpnTunnel(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::DeleteVpnTunnel(
    NoAwaitTag,
    google::cloud::cpp::compute::vpn_tunnels::v1::DeleteVpnTunnelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteVpnTunnel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::DeleteVpnTunnel(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteVpnTunnel(operation);
}

StatusOr<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsClient::GetVpnTunnel(std::string const& project,
                               std::string const& region,
                               std::string const& vpn_tunnel, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_vpn_tunnel(vpn_tunnel);
  return connection_->GetVpnTunnel(request);
}

StatusOr<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsClient::GetVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::GetVpnTunnelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVpnTunnel(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::InsertVpnTunnel(
    std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::VpnTunnel const& vpn_tunnel_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::InsertVpnTunnelRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_vpn_tunnel_resource() = vpn_tunnel_resource;
  return connection_->InsertVpnTunnel(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::InsertVpnTunnel(
    NoAwaitTag, std::string const& project, std::string const& region,
    google::cloud::cpp::compute::v1::VpnTunnel const& vpn_tunnel_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::InsertVpnTunnelRequest request;
  request.set_project(project);
  request.set_region(region);
  *request.mutable_vpn_tunnel_resource() = vpn_tunnel_resource;
  return connection_->InsertVpnTunnel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::InsertVpnTunnel(
    google::cloud::cpp::compute::vpn_tunnels::v1::InsertVpnTunnelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertVpnTunnel(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::InsertVpnTunnel(
    NoAwaitTag,
    google::cloud::cpp::compute::vpn_tunnels::v1::InsertVpnTunnelRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertVpnTunnel(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::InsertVpnTunnel(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertVpnTunnel(operation);
}

StreamRange<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsClient::ListVpnTunnels(std::string const& project,
                                 std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest request;
  request.set_project(project);
  request.set_region(region);
  return connection_->ListVpnTunnels(request);
}

StreamRange<google::cloud::cpp::compute::v1::VpnTunnel>
VpnTunnelsClient::ListVpnTunnels(
    google::cloud::cpp::compute::vpn_tunnels::v1::ListVpnTunnelsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVpnTunnels(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::SetLabels(
    std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
        region_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_labels_request_resource() =
      region_set_labels_request_resource;
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::SetLabels(
    NoAwaitTag, std::string const& project, std::string const& region,
    std::string const& resource,
    google::cloud::cpp::compute::v1::RegionSetLabelsRequest const&
        region_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_region(region);
  request.set_resource(resource);
  *request.mutable_region_set_labels_request_resource() =
      region_set_labels_request_resource;
  return connection_->SetLabels(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::SetLabels(
    google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
VpnTunnelsClient::SetLabels(
    NoAwaitTag,
    google::cloud::cpp::compute::vpn_tunnels::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
VpnTunnelsClient::SetLabels(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(operation);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_vpn_tunnels_v1
}  // namespace cloud
}  // namespace google
