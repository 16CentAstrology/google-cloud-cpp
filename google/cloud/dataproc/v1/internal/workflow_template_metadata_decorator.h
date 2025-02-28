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
// source: google/cloud/dataproc/v1/workflow_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_WORKFLOW_TEMPLATE_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_WORKFLOW_TEMPLATE_METADATA_DECORATOR_H

#include "google/cloud/dataproc/v1/internal/workflow_template_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkflowTemplateServiceMetadata : public WorkflowTemplateServiceStub {
 public:
  ~WorkflowTemplateServiceMetadata() override = default;
  WorkflowTemplateServiceMetadata(
      std::shared_ptr<WorkflowTemplateServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  CreateWorkflowTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate> GetWorkflowTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncInstantiateWorkflowTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> InstantiateWorkflowTemplate(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncInstantiateInlineWorkflowTemplate(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::dataproc::v1::
          InstantiateInlineWorkflowTemplateRequest const& request) override;

  StatusOr<google::longrunning::Operation> InstantiateInlineWorkflowTemplate(
      grpc::ClientContext& context, Options options,
      google::cloud::dataproc::v1::
          InstantiateInlineWorkflowTemplateRequest const& request) override;

  StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
  UpdateWorkflowTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::ListWorkflowTemplatesResponse>
  ListWorkflowTemplates(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::ListWorkflowTemplatesRequest const& request)
      override;

  Status DeleteWorkflowTemplate(
      grpc::ClientContext& context, Options const& options,
      google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

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
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<WorkflowTemplateServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_WORKFLOW_TEMPLATE_METADATA_DECORATOR_H
