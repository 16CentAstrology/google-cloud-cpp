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

#include "google/cloud/dataproc/v1/internal/workflow_template_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WorkflowTemplateServiceTracingConnection::
    WorkflowTemplateServiceTracingConnection(
        std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::CreateWorkflowTemplate(
    google::cloud::dataproc::v1::CreateWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::CreateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateWorkflowTemplate(request));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::GetWorkflowTemplate(
    google::cloud::dataproc::v1::GetWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::GetWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetWorkflowTemplate(request));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateWorkflowTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InstantiateWorkflowTemplate(request));
}

StatusOr<google::longrunning::Operation>
WorkflowTemplateServiceTracingConnection::InstantiateWorkflowTemplate(
    NoAwaitTag,
    google::cloud::dataproc::v1::InstantiateWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateWorkflowTemplate");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InstantiateWorkflowTemplate(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateWorkflowTemplate(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateWorkflowTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InstantiateWorkflowTemplate(operation));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateInlineWorkflowTemplate(
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateInlineWorkflowTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InstantiateInlineWorkflowTemplate(request));
}

StatusOr<google::longrunning::Operation>
WorkflowTemplateServiceTracingConnection::InstantiateInlineWorkflowTemplate(
    NoAwaitTag,
    google::cloud::dataproc::v1::InstantiateInlineWorkflowTemplateRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateInlineWorkflowTemplate");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->InstantiateInlineWorkflowTemplate(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dataproc::v1::WorkflowMetadata>>
WorkflowTemplateServiceTracingConnection::InstantiateInlineWorkflowTemplate(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::"
      "InstantiateInlineWorkflowTemplate");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->InstantiateInlineWorkflowTemplate(operation));
}

StatusOr<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::UpdateWorkflowTemplate(
    google::cloud::dataproc::v1::UpdateWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::UpdateWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateWorkflowTemplate(request));
}

StreamRange<google::cloud::dataproc::v1::WorkflowTemplate>
WorkflowTemplateServiceTracingConnection::ListWorkflowTemplates(
    google::cloud::dataproc::v1::ListWorkflowTemplatesRequest request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::ListWorkflowTemplates");
  internal::OTelScope scope(span);
  auto sr = child_->ListWorkflowTemplates(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dataproc::v1::WorkflowTemplate>(std::move(span),
                                                     std::move(sr));
}

Status WorkflowTemplateServiceTracingConnection::DeleteWorkflowTemplate(
    google::cloud::dataproc::v1::DeleteWorkflowTemplateRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::DeleteWorkflowTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteWorkflowTemplate(request));
}

StatusOr<google::iam::v1::Policy>
WorkflowTemplateServiceTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
WorkflowTemplateServiceTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
WorkflowTemplateServiceTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
WorkflowTemplateServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
WorkflowTemplateServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status WorkflowTemplateServiceTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status WorkflowTemplateServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dataproc_v1::WorkflowTemplateServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection>
MakeWorkflowTemplateServiceTracingConnection(
    std::shared_ptr<dataproc_v1::WorkflowTemplateServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<WorkflowTemplateServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
