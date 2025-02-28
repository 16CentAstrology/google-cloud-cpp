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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_AUTH_DECORATOR_H

#include "google/cloud/dialogflow_cx/internal/intents_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IntentsAuth : public IntentsStub {
 public:
  ~IntentsAuth() override = default;
  IntentsAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<IntentsStub> child);

  StatusOr<google::cloud::dialogflow::cx::v3::ListIntentsResponse> ListIntents(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::ListIntentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> GetIntent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::GetIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> CreateIntent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Intent> UpdateIntent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request)
      override;

  Status DeleteIntent(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ImportIntents(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportIntents(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> ExportIntents(
      grpc::ClientContext& context, Options options,
      google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

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
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<IntentsStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_INTENTS_AUTH_DECORATOR_H
