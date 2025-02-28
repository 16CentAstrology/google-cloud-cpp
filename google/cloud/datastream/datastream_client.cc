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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/datastream_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace datastream {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatastreamClient::DatastreamClient(
    std::shared_ptr<DatastreamConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DatastreamClient::~DatastreamClient() = default;

StreamRange<google::cloud::datastream::v1::ConnectionProfile>
DatastreamClient::ListConnectionProfiles(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::ListConnectionProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListConnectionProfiles(request);
}

StreamRange<google::cloud::datastream::v1::ConnectionProfile>
DatastreamClient::ListConnectionProfiles(
    google::cloud::datastream::v1::ListConnectionProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnectionProfiles(std::move(request));
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamClient::GetConnectionProfile(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::GetConnectionProfileRequest request;
  request.set_name(name);
  return connection_->GetConnectionProfile(request);
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamClient::GetConnectionProfile(
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamClient::CreateConnectionProfile(
    std::string const& parent,
    google::cloud::datastream::v1::ConnectionProfile const& connection_profile,
    std::string const& connection_profile_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::CreateConnectionProfileRequest request;
  request.set_parent(parent);
  *request.mutable_connection_profile() = connection_profile;
  request.set_connection_profile_id(connection_profile_id);
  return connection_->CreateConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamClient::CreateConnectionProfile(
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamClient::UpdateConnectionProfile(
    google::cloud::datastream::v1::ConnectionProfile const& connection_profile,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::UpdateConnectionProfileRequest request;
  *request.mutable_connection_profile() = connection_profile;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamClient::UpdateConnectionProfile(
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteConnectionProfile(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::DeleteConnectionProfileRequest request;
  request.set_name(name);
  return connection_->DeleteConnectionProfile(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteConnectionProfile(
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnectionProfile(request);
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamClient::DiscoverConnectionProfile(
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiscoverConnectionProfile(request);
}

StreamRange<google::cloud::datastream::v1::Stream>
DatastreamClient::ListStreams(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::ListStreamsRequest request;
  request.set_parent(parent);
  return connection_->ListStreams(request);
}

StreamRange<google::cloud::datastream::v1::Stream>
DatastreamClient::ListStreams(
    google::cloud::datastream::v1::ListStreamsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListStreams(std::move(request));
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamClient::GetStream(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::GetStreamRequest request;
  request.set_name(name);
  return connection_->GetStream(request);
}

StatusOr<google::cloud::datastream::v1::Stream> DatastreamClient::GetStream(
    google::cloud::datastream::v1::GetStreamRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetStream(request);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamClient::CreateStream(
    std::string const& parent,
    google::cloud::datastream::v1::Stream const& stream,
    std::string const& stream_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::CreateStreamRequest request;
  request.set_parent(parent);
  *request.mutable_stream() = stream;
  request.set_stream_id(stream_id);
  return connection_->CreateStream(request);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamClient::CreateStream(
    google::cloud::datastream::v1::CreateStreamRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateStream(request);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamClient::UpdateStream(
    google::cloud::datastream::v1::Stream const& stream,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::UpdateStreamRequest request;
  *request.mutable_stream() = stream;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateStream(request);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamClient::UpdateStream(
    google::cloud::datastream::v1::UpdateStreamRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateStream(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteStream(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::DeleteStreamRequest request;
  request.set_name(name);
  return connection_->DeleteStream(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteStream(
    google::cloud::datastream::v1::DeleteStreamRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteStream(request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamClient::GetStreamObject(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::GetStreamObjectRequest request;
  request.set_name(name);
  return connection_->GetStreamObject(request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamClient::GetStreamObject(
    google::cloud::datastream::v1::GetStreamObjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetStreamObject(request);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamClient::LookupStreamObject(
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->LookupStreamObject(request);
}

StreamRange<google::cloud::datastream::v1::StreamObject>
DatastreamClient::ListStreamObjects(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::ListStreamObjectsRequest request;
  request.set_parent(parent);
  return connection_->ListStreamObjects(request);
}

StreamRange<google::cloud::datastream::v1::StreamObject>
DatastreamClient::ListStreamObjects(
    google::cloud::datastream::v1::ListStreamObjectsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListStreamObjects(std::move(request));
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamClient::StartBackfillJob(std::string const& object, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::StartBackfillJobRequest request;
  request.set_object(object);
  return connection_->StartBackfillJob(request);
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamClient::StartBackfillJob(
    google::cloud::datastream::v1::StartBackfillJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartBackfillJob(request);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamClient::StopBackfillJob(std::string const& object, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::StopBackfillJobRequest request;
  request.set_object(object);
  return connection_->StopBackfillJob(request);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamClient::StopBackfillJob(
    google::cloud::datastream::v1::StopBackfillJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopBackfillJob(request);
}

StreamRange<std::string> DatastreamClient::FetchStaticIps(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::FetchStaticIpsRequest request;
  request.set_name(name);
  return connection_->FetchStaticIps(request);
}

StreamRange<std::string> DatastreamClient::FetchStaticIps(
    google::cloud::datastream::v1::FetchStaticIpsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FetchStaticIps(std::move(request));
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamClient::CreatePrivateConnection(
    std::string const& parent,
    google::cloud::datastream::v1::PrivateConnection const& private_connection,
    std::string const& private_connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::CreatePrivateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_private_connection() = private_connection;
  request.set_private_connection_id(private_connection_id);
  return connection_->CreatePrivateConnection(request);
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamClient::CreatePrivateConnection(
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePrivateConnection(request);
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamClient::GetPrivateConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::GetPrivateConnectionRequest request;
  request.set_name(name);
  return connection_->GetPrivateConnection(request);
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamClient::GetPrivateConnection(
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPrivateConnection(request);
}

StreamRange<google::cloud::datastream::v1::PrivateConnection>
DatastreamClient::ListPrivateConnections(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::ListPrivateConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListPrivateConnections(request);
}

StreamRange<google::cloud::datastream::v1::PrivateConnection>
DatastreamClient::ListPrivateConnections(
    google::cloud::datastream::v1::ListPrivateConnectionsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPrivateConnections(std::move(request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeletePrivateConnection(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::DeletePrivateConnectionRequest request;
  request.set_name(name);
  return connection_->DeletePrivateConnection(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeletePrivateConnection(
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePrivateConnection(request);
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamClient::CreateRoute(std::string const& parent,
                              google::cloud::datastream::v1::Route const& route,
                              std::string const& route_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::CreateRouteRequest request;
  request.set_parent(parent);
  *request.mutable_route() = route;
  request.set_route_id(route_id);
  return connection_->CreateRoute(request);
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamClient::CreateRoute(
    google::cloud::datastream::v1::CreateRouteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRoute(request);
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamClient::GetRoute(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::GetRouteRequest request;
  request.set_name(name);
  return connection_->GetRoute(request);
}

StatusOr<google::cloud::datastream::v1::Route> DatastreamClient::GetRoute(
    google::cloud::datastream::v1::GetRouteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRoute(request);
}

StreamRange<google::cloud::datastream::v1::Route> DatastreamClient::ListRoutes(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::ListRoutesRequest request;
  request.set_parent(parent);
  return connection_->ListRoutes(request);
}

StreamRange<google::cloud::datastream::v1::Route> DatastreamClient::ListRoutes(
    google::cloud::datastream::v1::ListRoutesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRoutes(std::move(request));
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteRoute(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::datastream::v1::DeleteRouteRequest request;
  request.set_name(name);
  return connection_->DeleteRoute(request);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamClient::DeleteRoute(
    google::cloud::datastream::v1::DeleteRouteRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRoute(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream
}  // namespace cloud
}  // namespace google
