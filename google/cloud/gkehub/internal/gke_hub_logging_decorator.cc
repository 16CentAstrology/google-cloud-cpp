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
// source: google/cloud/gkehub/v1/service.proto

#include "google/cloud/gkehub/internal/gke_hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubLogging::GkeHubLogging(std::shared_ptr<GkeHubStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
GkeHubLogging::ListMemberships(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
        return child_->ListMemberships(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
GkeHubLogging::ListFeatures(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
        return child_->ListFeatures(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubLogging::GetMembership(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GetMembershipRequest const& request) {
        return child_->GetMembership(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubLogging::GetFeature(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GetFeatureRequest const& request) {
        return child_->GetFeature(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncCreateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
        return child_->AsyncCreateMembership(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
        return child_->AsyncCreateFeature(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncDeleteMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
        return child_->AsyncDeleteMembership(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
        return child_->AsyncDeleteFeature(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncUpdateMembership(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
        return child_->AsyncUpdateMembership(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncUpdateFeature(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
        return child_->AsyncUpdateFeature(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubLogging::GenerateConnectManifest(
    grpc::ClientContext& context,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::gkehub::v1::GenerateConnectManifestRequest const&
                 request) {
        return child_->GenerateConnectManifest(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> GkeHubLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_internal
}  // namespace cloud
}  // namespace google
