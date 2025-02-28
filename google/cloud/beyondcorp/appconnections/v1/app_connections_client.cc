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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/app_connections_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceClient::AppConnectionsServiceClient(
    std::shared_ptr<AppConnectionsServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AppConnectionsServiceClient::~AppConnectionsServiceClient() = default;

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceClient::ListAppConnections(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
      request;
  request.set_parent(parent);
  return connection_->ListAppConnections(request);
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceClient::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAppConnections(std::move(request));
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceClient::GetAppConnection(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::GetAppConnectionRequest
      request;
  request.set_name(name);
  return connection_->GetAppConnection(request);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceClient::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAppConnection(request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::CreateAppConnection(
    std::string const& parent,
    google::cloud::beyondcorp::appconnections::v1::AppConnection const&
        app_connection,
    std::string const& app_connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::CreateAppConnectionRequest
      request;
  request.set_parent(parent);
  *request.mutable_app_connection() = app_connection;
  request.set_app_connection_id(app_connection_id);
  return connection_->CreateAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::CreateAppConnection(
    NoAwaitTag, std::string const& parent,
    google::cloud::beyondcorp::appconnections::v1::AppConnection const&
        app_connection,
    std::string const& app_connection_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::CreateAppConnectionRequest
      request;
  request.set_parent(parent);
  *request.mutable_app_connection() = app_connection;
  request.set_app_connection_id(app_connection_id);
  return connection_->CreateAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::CreateAppConnection(
    NoAwaitTag,
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::CreateAppConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateAppConnection(operation);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::AppConnection const&
        app_connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::UpdateAppConnectionRequest
      request;
  *request.mutable_app_connection() = app_connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::UpdateAppConnection(
    NoAwaitTag,
    google::cloud::beyondcorp::appconnections::v1::AppConnection const&
        app_connection,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::UpdateAppConnectionRequest
      request;
  *request.mutable_app_connection() = app_connection;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::UpdateAppConnection(
    NoAwaitTag,
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceClient::UpdateAppConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAppConnection(operation);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceClient::DeleteAppConnection(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::DeleteAppConnectionRequest
      request;
  request.set_name(name);
  return connection_->DeleteAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::DeleteAppConnection(NoAwaitTag,
                                                 std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::DeleteAppConnectionRequest
      request;
  request.set_name(name);
  return connection_->DeleteAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceClient::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAppConnection(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::DeleteAppConnection(
    NoAwaitTag,
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAppConnection(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceClient::DeleteAppConnection(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAppConnection(operation);
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceClient::ResolveAppConnections(std::string const& parent,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest
      request;
  request.set_parent(parent);
  return connection_->ResolveAppConnections(request);
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceClient::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ResolveAppConnections(std::move(request));
}

StreamRange<google::cloud::location::Location>
AppConnectionsServiceClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
AppConnectionsServiceClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy> AppConnectionsServiceClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> AppConnectionsServiceClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AppConnectionsServiceClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
AppConnectionsServiceClient::ListOperations(std::string const& name,
                                            std::string const& filter,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
AppConnectionsServiceClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::GetOperation(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status AppConnectionsServiceClient::DeleteOperation(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status AppConnectionsServiceClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status AppConnectionsServiceClient::CancelOperation(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status AppConnectionsServiceClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1
}  // namespace cloud
}  // namespace google
