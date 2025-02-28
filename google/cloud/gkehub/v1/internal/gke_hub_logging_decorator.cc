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

#include "google/cloud/gkehub/v1/internal/gke_hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace gkehub_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GkeHubLogging::GkeHubLogging(std::shared_ptr<GkeHubStub> child,
                             TracingOptions tracing_options,
                             std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::gkehub::v1::ListMembershipsResponse>
GkeHubLogging::ListMemberships(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::ListMembershipsRequest const& request) {
        return child_->ListMemberships(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::ListFeaturesResponse>
GkeHubLogging::ListFeatures(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::ListFeaturesRequest const& request) {
        return child_->ListFeatures(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::Membership> GkeHubLogging::GetMembership(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkehub::v1::GetMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::GetMembershipRequest const& request) {
        return child_->GetMembership(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::Feature> GkeHubLogging::GetFeature(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkehub::v1::GetFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::GetFeatureRequest const& request) {
        return child_->GetFeature(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncCreateMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
        return child_->AsyncCreateMembership(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::CreateMembership(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkehub::v1::CreateMembershipRequest const& request) {
        return child_->CreateMembership(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
        return child_->AsyncCreateFeature(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::CreateFeature(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::CreateFeatureRequest const& request) {
        return child_->CreateFeature(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncDeleteMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
        return child_->AsyncDeleteMembership(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::DeleteMembership(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkehub::v1::DeleteMembershipRequest const& request) {
        return child_->DeleteMembership(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
        return child_->AsyncDeleteFeature(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::DeleteFeature(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::DeleteFeatureRequest const& request) {
        return child_->DeleteFeature(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncUpdateMembership(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
        return child_->AsyncUpdateMembership(cq, std::move(context),
                                             std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::UpdateMembership(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::gkehub::v1::UpdateMembershipRequest const& request) {
        return child_->UpdateMembership(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncUpdateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
        return child_->AsyncUpdateFeature(cq, std::move(context),
                                          std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::longrunning::Operation> GkeHubLogging::UpdateFeature(
    grpc::ClientContext& context, Options options,
    google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::UpdateFeatureRequest const& request) {
        return child_->UpdateFeature(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::gkehub::v1::GenerateConnectManifestResponse>
GkeHubLogging::GenerateConnectManifest(
    grpc::ClientContext& context, Options const& options,
    google::cloud::gkehub::v1::GenerateConnectManifestRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::gkehub::v1::GenerateConnectManifestRequest const&
                 request) {
        return child_->GenerateConnectManifest(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
GkeHubLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context),
                                         std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> GkeHubLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::internal::ImmutableOptions options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context),
                                            std::move(options), request);
      },
      cq, std::move(context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub_v1_internal
}  // namespace cloud
}  // namespace google
