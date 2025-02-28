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
// source: google/cloud/config/v1/config.proto

#include "google/cloud/config/v1/internal/config_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace config_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConfigTracingConnection::ConfigTracingConnection(
    std::shared_ptr<config_v1::ConfigConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::config::v1::Deployment>
ConfigTracingConnection::ListDeployments(
    google::cloud::config::v1::ListDeploymentsRequest request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::ListDeployments");
  internal::OTelScope scope(span);
  auto sr = child_->ListDeployments(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::config::v1::Deployment>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::config::v1::Deployment>
ConfigTracingConnection::GetDeployment(
    google::cloud::config::v1::GetDeploymentRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDeployment(request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::CreateDeployment(
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::CreateDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateDeployment(request));
}

StatusOr<google::longrunning::Operation>
ConfigTracingConnection::CreateDeployment(
    NoAwaitTag,
    google::cloud::config::v1::CreateDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::CreateDeployment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateDeployment(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::CreateDeployment(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::CreateDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateDeployment(operation));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::UpdateDeployment(
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UpdateDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateDeployment(request));
}

StatusOr<google::longrunning::Operation>
ConfigTracingConnection::UpdateDeployment(
    NoAwaitTag,
    google::cloud::config::v1::UpdateDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UpdateDeployment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateDeployment(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::UpdateDeployment(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UpdateDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateDeployment(operation));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::DeleteDeployment(
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::DeleteDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteDeployment(request));
}

StatusOr<google::longrunning::Operation>
ConfigTracingConnection::DeleteDeployment(
    NoAwaitTag,
    google::cloud::config::v1::DeleteDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::DeleteDeployment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteDeployment(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::DeleteDeployment(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::DeleteDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteDeployment(operation));
}

StreamRange<google::cloud::config::v1::Revision>
ConfigTracingConnection::ListRevisions(
    google::cloud::config::v1::ListRevisionsRequest request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ListRevisions");
  internal::OTelScope scope(span);
  auto sr = child_->ListRevisions(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::config::v1::Revision>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::config::v1::Revision>
ConfigTracingConnection::GetRevision(
    google::cloud::config::v1::GetRevisionRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetRevision");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRevision(request));
}

StatusOr<google::cloud::config::v1::Resource>
ConfigTracingConnection::GetResource(
    google::cloud::config::v1::GetResourceRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetResource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetResource(request));
}

StreamRange<google::cloud::config::v1::Resource>
ConfigTracingConnection::ListResources(
    google::cloud::config::v1::ListResourcesRequest request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ListResources");
  internal::OTelScope scope(span);
  auto sr = child_->ListResources(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::config::v1::Resource>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigTracingConnection::ExportDeploymentStatefile(
    google::cloud::config::v1::ExportDeploymentStatefileRequest const&
        request) {
  auto span = internal::MakeSpan(
      "config_v1::ConfigConnection::ExportDeploymentStatefile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportDeploymentStatefile(request));
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigTracingConnection::ExportRevisionStatefile(
    google::cloud::config::v1::ExportRevisionStatefileRequest const& request) {
  auto span = internal::MakeSpan(
      "config_v1::ConfigConnection::ExportRevisionStatefile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportRevisionStatefile(request));
}

StatusOr<google::cloud::config::v1::Statefile>
ConfigTracingConnection::ImportStatefile(
    google::cloud::config::v1::ImportStatefileRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::ImportStatefile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ImportStatefile(request));
}

Status ConfigTracingConnection::DeleteStatefile(
    google::cloud::config::v1::DeleteStatefileRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::DeleteStatefile");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteStatefile(request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::LockDeployment(
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::LockDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->LockDeployment(request));
}

StatusOr<google::longrunning::Operation>
ConfigTracingConnection::LockDeployment(
    NoAwaitTag,
    google::cloud::config::v1::LockDeploymentRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::LockDeployment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->LockDeployment(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::LockDeployment(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::LockDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->LockDeployment(operation));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::UnlockDeployment(
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UnlockDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UnlockDeployment(request));
}

StatusOr<google::longrunning::Operation>
ConfigTracingConnection::UnlockDeployment(
    NoAwaitTag,
    google::cloud::config::v1::UnlockDeploymentRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UnlockDeployment");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UnlockDeployment(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Deployment>>
ConfigTracingConnection::UnlockDeployment(
    google::longrunning::Operation const& operation) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::UnlockDeployment");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UnlockDeployment(operation));
}

StatusOr<google::cloud::config::v1::LockInfo>
ConfigTracingConnection::ExportLockInfo(
    google::cloud::config::v1::ExportLockInfoRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ExportLockInfo");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportLockInfo(request));
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigTracingConnection::CreatePreview(
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::CreatePreview");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreatePreview(request));
}

StatusOr<google::longrunning::Operation> ConfigTracingConnection::CreatePreview(
    NoAwaitTag,
    google::cloud::config::v1::CreatePreviewRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::CreatePreview");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreatePreview(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigTracingConnection::CreatePreview(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::CreatePreview");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreatePreview(operation));
}

StatusOr<google::cloud::config::v1::Preview>
ConfigTracingConnection::GetPreview(
    google::cloud::config::v1::GetPreviewRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetPreview");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPreview(request));
}

StreamRange<google::cloud::config::v1::Preview>
ConfigTracingConnection::ListPreviews(
    google::cloud::config::v1::ListPreviewsRequest request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ListPreviews");
  internal::OTelScope scope(span);
  auto sr = child_->ListPreviews(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::config::v1::Preview>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigTracingConnection::DeletePreview(
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::DeletePreview");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeletePreview(request));
}

StatusOr<google::longrunning::Operation> ConfigTracingConnection::DeletePreview(
    NoAwaitTag,
    google::cloud::config::v1::DeletePreviewRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::DeletePreview");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeletePreview(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::config::v1::Preview>>
ConfigTracingConnection::DeletePreview(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::DeletePreview");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeletePreview(operation));
}

StatusOr<google::cloud::config::v1::ExportPreviewResultResponse>
ConfigTracingConnection::ExportPreviewResult(
    google::cloud::config::v1::ExportPreviewResultRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::ExportPreviewResult");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportPreviewResult(request));
}

StreamRange<google::cloud::config::v1::TerraformVersion>
ConfigTracingConnection::ListTerraformVersions(
    google::cloud::config::v1::ListTerraformVersionsRequest request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::ListTerraformVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListTerraformVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::config::v1::TerraformVersion>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::config::v1::TerraformVersion>
ConfigTracingConnection::GetTerraformVersion(
    google::cloud::config::v1::GetTerraformVersionRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::GetTerraformVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTerraformVersion(request));
}

StreamRange<google::cloud::location::Location>
ConfigTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
ConfigTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StatusOr<google::iam::v1::Policy> ConfigTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy> ConfigTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ConfigTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
ConfigTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation> ConfigTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan("config_v1::ConfigConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status ConfigTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status ConfigTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span =
      internal::MakeSpan("config_v1::ConfigConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<config_v1::ConfigConnection> MakeConfigTracingConnection(
    std::shared_ptr<config_v1::ConfigConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ConfigTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace config_v1_internal
}  // namespace cloud
}  // namespace google
