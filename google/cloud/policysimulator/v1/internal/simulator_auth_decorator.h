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
// source: google/cloud/policysimulator/v1/simulator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYSIMULATOR_V1_INTERNAL_SIMULATOR_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYSIMULATOR_V1_INTERNAL_SIMULATOR_AUTH_DECORATOR_H

#include "google/cloud/policysimulator/v1/internal/simulator_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace policysimulator_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SimulatorAuth : public SimulatorStub {
 public:
  ~SimulatorAuth() override = default;
  SimulatorAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<SimulatorStub> child);

  StatusOr<google::cloud::policysimulator::v1::Replay> GetReplay(
      grpc::ClientContext& context, Options const& options,
      google::cloud::policysimulator::v1::GetReplayRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateReplay(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::policysimulator::v1::CreateReplayRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateReplay(
      grpc::ClientContext& context, Options options,
      google::cloud::policysimulator::v1::CreateReplayRequest const& request)
      override;

  StatusOr<google::cloud::policysimulator::v1::ListReplayResultsResponse>
  ListReplayResults(
      grpc::ClientContext& context, Options const& options,
      google::cloud::policysimulator::v1::ListReplayResultsRequest const&
          request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

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
  std::shared_ptr<SimulatorStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace policysimulator_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_POLICYSIMULATOR_V1_INTERNAL_SIMULATOR_AUTH_DECORATOR_H
