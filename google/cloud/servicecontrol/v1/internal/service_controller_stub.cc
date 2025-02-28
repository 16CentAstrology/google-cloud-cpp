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
// source: google/api/servicecontrol/v1/service_controller.proto

#include "google/cloud/servicecontrol/v1/internal/service_controller_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/api/servicecontrol/v1/service_controller.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace servicecontrol_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceControllerStub::~ServiceControllerStub() = default;

StatusOr<google::api::servicecontrol::v1::CheckResponse>
DefaultServiceControllerStub::Check(
    grpc::ClientContext& context, Options const&,
    google::api::servicecontrol::v1::CheckRequest const& request) {
  google::api::servicecontrol::v1::CheckResponse response;
  auto status = grpc_stub_->Check(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::api::servicecontrol::v1::ReportResponse>
DefaultServiceControllerStub::Report(
    grpc::ClientContext& context, Options const&,
    google::api::servicecontrol::v1::ReportRequest const& request) {
  google::api::servicecontrol::v1::ReportResponse response;
  auto status = grpc_stub_->Report(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v1_internal
}  // namespace cloud
}  // namespace google
