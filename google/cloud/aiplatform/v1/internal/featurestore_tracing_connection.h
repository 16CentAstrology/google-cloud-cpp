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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/featurestore_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FeaturestoreServiceTracingConnection
    : public aiplatform_v1::FeaturestoreServiceConnection {
 public:
  ~FeaturestoreServiceTracingConnection() override = default;

  explicit FeaturestoreServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  CreateFeaturestore(
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  CreateFeaturestore(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Featurestore> GetFeaturestore(
      google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::Featurestore> ListFeaturestores(
      google::cloud::aiplatform::v1::ListFeaturestoresRequest request) override;

  future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  UpdateFeaturestore(
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::Featurestore>>
  UpdateFeaturestore(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeaturestore(
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeaturestore(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeaturestore(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::EntityType>> CreateEntityType(
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateEntityType(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::EntityType>> CreateEntityType(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> GetEntityType(
      google::cloud::aiplatform::v1::GetEntityTypeRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::EntityType> ListEntityTypes(
      google::cloud::aiplatform::v1::ListEntityTypesRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::EntityType> UpdateEntityType(
      google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEntityType(google::cloud::aiplatform::v1::DeleteEntityTypeRequest const&
                       request) override;

  StatusOr<google::longrunning::Operation> DeleteEntityType(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteEntityType(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::Feature>> CreateFeature(
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateFeature(
      NoAwaitTag,
      google::cloud::aiplatform::v1::CreateFeatureRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::Feature>> CreateFeature(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
  BatchCreateFeatures(
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> BatchCreateFeatures(
      NoAwaitTag,
      google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::BatchCreateFeaturesResponse>>
  BatchCreateFeatures(google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::Feature> GetFeature(
      google::cloud::aiplatform::v1::GetFeatureRequest const& request) override;

  StreamRange<google::cloud::aiplatform::v1::Feature> ListFeatures(
      google::cloud::aiplatform::v1::ListFeaturesRequest request) override;

  StatusOr<google::cloud::aiplatform::v1::Feature> UpdateFeature(
      google::cloud::aiplatform::v1::UpdateFeatureRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeature(google::cloud::aiplatform::v1::DeleteFeatureRequest const&
                    request) override;

  StatusOr<google::longrunning::Operation> DeleteFeature(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteFeature(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
  ImportFeatureValues(
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::ImportFeatureValuesResponse>>
  ImportFeatureValues(google::longrunning::Operation const& operation) override;

  future<
      StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
  BatchReadFeatureValues(
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> BatchReadFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
          request) override;

  future<
      StatusOr<google::cloud::aiplatform::v1::BatchReadFeatureValuesResponse>>
  BatchReadFeatureValues(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
  ExportFeatureValues(
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::ExportFeatureValuesResponse>>
  ExportFeatureValues(google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
  DeleteFeatureValues(
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteFeatureValues(
      NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteFeatureValuesResponse>>
  DeleteFeatureValues(google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::aiplatform::v1::Feature> SearchFeatures(
      google::cloud::aiplatform::v1::SearchFeaturesRequest request) override;

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

  StatusOr<google::longrunning::Operation> WaitOperation(
      google::longrunning::WaitOperationRequest const& request) override;

 private:
  std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection>
MakeFeaturestoreServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::FeaturestoreServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_FEATURESTORE_TRACING_CONNECTION_H
