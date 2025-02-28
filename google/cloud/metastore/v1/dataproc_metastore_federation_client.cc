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
// source: google/cloud/metastore/v1/metastore_federation.proto

#include "google/cloud/metastore/v1/dataproc_metastore_federation_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace metastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataprocMetastoreFederationClient::DataprocMetastoreFederationClient(
    std::shared_ptr<DataprocMetastoreFederationConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DataprocMetastoreFederationClient::~DataprocMetastoreFederationClient() =
    default;

StreamRange<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationClient::ListFederations(std::string const& parent,
                                                   Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::ListFederationsRequest request;
  request.set_parent(parent);
  return connection_->ListFederations(request);
}

StreamRange<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationClient::ListFederations(
    google::cloud::metastore::v1::ListFederationsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFederations(std::move(request));
}

StatusOr<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationClient::GetFederation(std::string const& name,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::GetFederationRequest request;
  request.set_name(name);
  return connection_->GetFederation(request);
}

StatusOr<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationClient::GetFederation(
    google::cloud::metastore::v1::GetFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFederation(request);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::CreateFederation(
    std::string const& parent,
    google::cloud::metastore::v1::Federation const& federation,
    std::string const& federation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::CreateFederationRequest request;
  request.set_parent(parent);
  *request.mutable_federation() = federation;
  request.set_federation_id(federation_id);
  return connection_->CreateFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::CreateFederation(
    NoAwaitTag, std::string const& parent,
    google::cloud::metastore::v1::Federation const& federation,
    std::string const& federation_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::CreateFederationRequest request;
  request.set_parent(parent);
  *request.mutable_federation() = federation;
  request.set_federation_id(federation_id);
  return connection_->CreateFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::CreateFederation(
    google::cloud::metastore::v1::CreateFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::CreateFederation(
    NoAwaitTag,
    google::cloud::metastore::v1::CreateFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::CreateFederation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateFederation(operation);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::UpdateFederation(
    google::cloud::metastore::v1::Federation const& federation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::UpdateFederationRequest request;
  *request.mutable_federation() = federation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::UpdateFederation(
    NoAwaitTag, google::cloud::metastore::v1::Federation const& federation,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::UpdateFederationRequest request;
  *request.mutable_federation() = federation;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::UpdateFederation(
    google::cloud::metastore::v1::UpdateFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::UpdateFederation(
    NoAwaitTag,
    google::cloud::metastore::v1::UpdateFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::Federation>>
DataprocMetastoreFederationClient::UpdateFederation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFederation(operation);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationClient::DeleteFederation(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::DeleteFederationRequest request;
  request.set_name(name);
  return connection_->DeleteFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::DeleteFederation(NoAwaitTag,
                                                    std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::metastore::v1::DeleteFederationRequest request;
  request.set_name(name);
  return connection_->DeleteFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationClient::DeleteFederation(
    google::cloud::metastore::v1::DeleteFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFederation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::DeleteFederation(
    NoAwaitTag,
    google::cloud::metastore::v1::DeleteFederationRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFederation(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
DataprocMetastoreFederationClient::DeleteFederation(
    google::longrunning::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFederation(operation);
}

StreamRange<google::cloud::location::Location>
DataprocMetastoreFederationClient::ListLocations(
    google::cloud::location::ListLocationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLocations(std::move(request));
}

StatusOr<google::cloud::location::Location>
DataprocMetastoreFederationClient::GetLocation(
    google::cloud::location::GetLocationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLocation(request);
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreFederationClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreFederationClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataprocMetastoreFederationClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
DataprocMetastoreFederationClient::ListOperations(std::string const& name,
                                                  std::string const& filter,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
DataprocMetastoreFederationClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::GetOperation(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status DataprocMetastoreFederationClient::DeleteOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status DataprocMetastoreFederationClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status DataprocMetastoreFederationClient::CancelOperation(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status DataprocMetastoreFederationClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1
}  // namespace cloud
}  // namespace google
