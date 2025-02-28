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
// source:
// google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/interconnect_attachments/v1/interconnect_attachments.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnect_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InterconnectAttachmentsRestStub {
 public:
  virtual ~InterconnectAttachmentsRestStub() = default;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentList>
  ListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) = 0;
};

class DefaultInterconnectAttachmentsRestStub
    : public InterconnectAttachmentsRestStub {
 public:
  ~DefaultInterconnectAttachmentsRestStub() override = default;

  explicit DefaultInterconnectAttachmentsRestStub(Options options);
  DefaultInterconnectAttachmentsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<
      google::cloud::cpp::compute::v1::InterconnectAttachmentAggregatedList>
  AggregatedListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          AggregatedListInterconnectAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  DeleteInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          DeleteInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachment>
  GetInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          GetInterconnectAttachmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  InsertInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          InsertInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InterconnectAttachmentList>
  ListInterconnectAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          ListInterconnectAttachmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchInterconnectAttachment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation>
  PatchInterconnectAttachment(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          PatchInterconnectAttachmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> SetLabels(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::interconnect_attachments::v1::
          SetLabelsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INTERCONNECT_ATTACHMENTS_V1_INTERNAL_INTERCONNECT_ATTACHMENTS_REST_STUB_H
