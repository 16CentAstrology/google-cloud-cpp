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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_TRACING_CONNECTION_H

#include "google/cloud/metastore/v1/dataproc_metastore_federation_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataprocMetastoreFederationTracingConnection
    : public metastore_v1::DataprocMetastoreFederationConnection {
 public:
  ~DataprocMetastoreFederationTracingConnection() override = default;

  explicit DataprocMetastoreFederationTracingConnection(
      std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::metastore::v1::Federation> ListFederations(
      google::cloud::metastore::v1::ListFederationsRequest request) override;

  StatusOr<google::cloud::metastore::v1::Federation> GetFederation(
      google::cloud::metastore::v1::GetFederationRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::Federation>> CreateFederation(
      google::cloud::metastore::v1::CreateFederationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFederation(
      NoAwaitTag,
      google::cloud::metastore::v1::CreateFederationRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::Federation>> CreateFederation(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::metastore::v1::Federation>> UpdateFederation(
      google::cloud::metastore::v1::UpdateFederationRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFederation(
      NoAwaitTag,
      google::cloud::metastore::v1::UpdateFederationRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::Federation>> UpdateFederation(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteFederation(google::cloud::metastore::v1::DeleteFederationRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteFederation(
      NoAwaitTag,
      google::cloud::metastore::v1::DeleteFederationRequest const& request)
      override;

  future<StatusOr<google::cloud::metastore::v1::OperationMetadata>>
  DeleteFederation(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection>
MakeDataprocMetastoreFederationTracingConnection(
    std::shared_ptr<metastore_v1::DataprocMetastoreFederationConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_METASTORE_V1_INTERNAL_DATAPROC_METASTORE_FEDERATION_TRACING_CONNECTION_H
