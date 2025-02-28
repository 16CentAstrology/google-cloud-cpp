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
// source: google/cloud/compute/machine_images/v1/machine_images.proto

#include "google/cloud/compute/machine_images/v1/internal/machine_images_rest_metadata_decorator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/rest_set_metadata.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_machine_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MachineImagesRestMetadata::MachineImagesRestMetadata(
    std::shared_ptr<MachineImagesRestStub> child, std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
MachineImagesRestMetadata::AsyncDeleteMachineImage(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::machine_images::v1::
        DeleteMachineImageRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncDeleteMachineImage(cq, std::move(rest_context),
                                         std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
MachineImagesRestMetadata::DeleteMachineImage(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::
        DeleteMachineImageRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->DeleteMachineImage(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::MachineImage>
MachineImagesRestMetadata::GetMachineImage(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::
        GetMachineImageRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->GetMachineImage(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
MachineImagesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->GetIamPolicy(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
MachineImagesRestMetadata::AsyncInsertMachineImage(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::machine_images::v1::
        InsertMachineImageRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncInsertMachineImage(cq, std::move(rest_context),
                                         std::move(options), request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
MachineImagesRestMetadata::InsertMachineImage(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::
        InsertMachineImageRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->InsertMachineImage(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::MachineImageList>
MachineImagesRestMetadata::ListMachineImages(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::
        ListMachineImagesRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->ListMachineImages(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
MachineImagesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context, options);
  return child_->SetIamPolicy(rest_context, options, request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
MachineImagesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::machine_images::v1::
        TestIamPermissionsRequest const& request) {
  SetMetadata(rest_context, options);
  return child_->TestIamPermissions(rest_context, options, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
MachineImagesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncGetOperation(cq, std::move(rest_context),
                                   std::move(options), request);
}

future<Status> MachineImagesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  SetMetadata(*rest_context, *options);
  return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                      std::move(options), request);
}

void MachineImagesRestMetadata::SetMetadata(
    rest_internal::RestContext& rest_context, Options const& options,
    std::vector<std::string> const& params) {
  google::cloud::rest_internal::SetMetadata(rest_context, options, params,
                                            api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_images_v1_internal
}  // namespace cloud
}  // namespace google
