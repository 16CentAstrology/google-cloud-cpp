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
// source: google/cloud/bigquery/analyticshub/v1/analyticshub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_METADATA_DECORATOR_H

#include "google/cloud/bigquery/analyticshub/v1/internal/analytics_hub_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_analyticshub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AnalyticsHubServiceMetadata : public AnalyticsHubServiceStub {
 public:
  ~AnalyticsHubServiceMetadata() override = default;
  AnalyticsHubServiceMetadata(
      std::shared_ptr<AnalyticsHubServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListDataExchangesResponse>
  ListDataExchanges(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::ListDataExchangesRequest const&
          request) override;

  StatusOr<
      google::cloud::bigquery::analyticshub::v1::ListOrgDataExchangesResponse>
  ListOrgDataExchanges(grpc::ClientContext& context, Options const& options,
                       google::cloud::bigquery::analyticshub::v1::
                           ListOrgDataExchangesRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  GetDataExchange(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::GetDataExchangeRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  CreateDataExchange(grpc::ClientContext& context, Options const& options,
                     google::cloud::bigquery::analyticshub::v1::
                         CreateDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::DataExchange>
  UpdateDataExchange(grpc::ClientContext& context, Options const& options,
                     google::cloud::bigquery::analyticshub::v1::
                         UpdateDataExchangeRequest const& request) override;

  Status DeleteDataExchange(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          DeleteDataExchangeRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListListingsResponse>
  ListListings(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::ListListingsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> GetListing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::GetListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> CreateListing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::CreateListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Listing> UpdateListing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::UpdateListingRequest const&
          request) override;

  Status DeleteListing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::DeleteListingRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::SubscribeListingResponse>
  SubscribeListing(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::SubscribeListingRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncSubscribeDataExchange(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::bigquery::analyticshub::v1::
          SubscribeDataExchangeRequest const& request) override;

  StatusOr<google::longrunning::Operation> SubscribeDataExchange(
      grpc::ClientContext& context, Options options,
      google::cloud::bigquery::analyticshub::v1::
          SubscribeDataExchangeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRefreshSubscription(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::bigquery::analyticshub::v1::
          RefreshSubscriptionRequest const& request) override;

  StatusOr<google::longrunning::Operation> RefreshSubscription(
      grpc::ClientContext& context, Options options,
      google::cloud::bigquery::analyticshub::v1::
          RefreshSubscriptionRequest const& request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::Subscription>
  GetSubscription(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::GetSubscriptionRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::ListSubscriptionsResponse>
  ListSubscriptions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::ListSubscriptionsRequest const&
          request) override;

  StatusOr<google::cloud::bigquery::analyticshub::v1::
               ListSharedResourceSubscriptionsResponse>
  ListSharedResourceSubscriptions(
      grpc::ClientContext& context, Options const& options,
      google::cloud::bigquery::analyticshub::v1::
          ListSharedResourceSubscriptionsRequest const& request) override;

  StatusOr<
      google::cloud::bigquery::analyticshub::v1::RevokeSubscriptionResponse>
  RevokeSubscription(grpc::ClientContext& context, Options const& options,
                     google::cloud::bigquery::analyticshub::v1::
                         RevokeSubscriptionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSubscription(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::bigquery::analyticshub::v1::
          DeleteSubscriptionRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteSubscription(
      grpc::ClientContext& context, Options options,
      google::cloud::bigquery::analyticshub::v1::
          DeleteSubscriptionRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<AnalyticsHubServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_analyticshub_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ANALYTICSHUB_V1_INTERNAL_ANALYTICS_HUB_METADATA_DECORATOR_H
