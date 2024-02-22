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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#include "google/cloud/beyondcorp/appgateways/v1/internal/app_gateways_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/beyondcorp/appgateways/v1/app_gateways_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppGatewaysServiceLogging::AppGatewaysServiceLogging(
    std::shared_ptr<AppGatewaysServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysResponse>
AppGatewaysServiceLogging::ListAppGateways(
    grpc::ClientContext& context, Options const& options,
    google::cloud::beyondcorp::appgateways::v1::ListAppGatewaysRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appgateways::v1::
                 ListAppGatewaysRequest const& request) {
        return child_->ListAppGateways(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::beyondcorp::appgateways::v1::AppGateway>
AppGatewaysServiceLogging::GetAppGateway(
    grpc::ClientContext& context, Options const& options,
    google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::beyondcorp::appgateways::v1::
                 GetAppGatewayRequest const& request) {
        return child_->GetAppGateway(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppGatewaysServiceLogging::AsyncCreateAppGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::beyondcorp::appgateways::v1::CreateAppGatewayRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::beyondcorp::appgateways::v1::
                 CreateAppGatewayRequest const& request) {
        return child_->AsyncCreateAppGateway(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppGatewaysServiceLogging::AsyncDeleteAppGateway(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::beyondcorp::appgateways::v1::DeleteAppGatewayRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::beyondcorp::appgateways::v1::
                 DeleteAppGatewayRequest const& request) {
        return child_->AsyncDeleteAppGateway(cq, std::move(context), options,
                                             request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
AppGatewaysServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> AppGatewaysServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1_internal
}  // namespace cloud
}  // namespace google
