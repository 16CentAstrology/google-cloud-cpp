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
// source: google/cloud/functions/v1/functions.proto

#include "google/cloud/functions/v1/internal/cloud_functions_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace functions_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudFunctionsServiceTracingConnection::CloudFunctionsServiceTracingConnection(
    std::shared_ptr<functions_v1::CloudFunctionsServiceConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::functions::v1::CloudFunction>
CloudFunctionsServiceTracingConnection::ListFunctions(
    google::cloud::functions::v1::ListFunctionsRequest request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::ListFunctions");
  internal::OTelScope scope(span);
  auto sr = child_->ListFunctions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::functions::v1::CloudFunction>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::functions::v1::CloudFunction>
CloudFunctionsServiceTracingConnection::GetFunction(
    google::cloud::functions::v1::GetFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::GetFunction");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFunction(request));
}

future<StatusOr<google::cloud::functions::v1::CloudFunction>>
CloudFunctionsServiceTracingConnection::CreateFunction(
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::CreateFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFunction(request));
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceTracingConnection::CreateFunction(
    NoAwaitTag,
    google::cloud::functions::v1::CreateFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::CreateFunction");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateFunction(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::functions::v1::CloudFunction>>
CloudFunctionsServiceTracingConnection::CreateFunction(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::CreateFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateFunction(operation));
}

future<StatusOr<google::cloud::functions::v1::CloudFunction>>
CloudFunctionsServiceTracingConnection::UpdateFunction(
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::UpdateFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateFunction(request));
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceTracingConnection::UpdateFunction(
    NoAwaitTag,
    google::cloud::functions::v1::UpdateFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::UpdateFunction");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateFunction(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::functions::v1::CloudFunction>>
CloudFunctionsServiceTracingConnection::UpdateFunction(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::UpdateFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateFunction(operation));
}

future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
CloudFunctionsServiceTracingConnection::DeleteFunction(
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::DeleteFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFunction(request));
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceTracingConnection::DeleteFunction(
    NoAwaitTag,
    google::cloud::functions::v1::DeleteFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::DeleteFunction");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteFunction(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::functions::v1::OperationMetadataV1>>
CloudFunctionsServiceTracingConnection::DeleteFunction(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::DeleteFunction");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteFunction(operation));
}

StatusOr<google::cloud::functions::v1::CallFunctionResponse>
CloudFunctionsServiceTracingConnection::CallFunction(
    google::cloud::functions::v1::CallFunctionRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::CallFunction");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CallFunction(request));
}

StatusOr<google::cloud::functions::v1::GenerateUploadUrlResponse>
CloudFunctionsServiceTracingConnection::GenerateUploadUrl(
    google::cloud::functions::v1::GenerateUploadUrlRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::GenerateUploadUrl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateUploadUrl(request));
}

StatusOr<google::cloud::functions::v1::GenerateDownloadUrlResponse>
CloudFunctionsServiceTracingConnection::GenerateDownloadUrl(
    google::cloud::functions::v1::GenerateDownloadUrlRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::GenerateDownloadUrl");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateDownloadUrl(request));
}

StatusOr<google::iam::v1::Policy>
CloudFunctionsServiceTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
CloudFunctionsServiceTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
CloudFunctionsServiceTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::cloud::location::Location>
CloudFunctionsServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StreamRange<google::longrunning::Operation>
CloudFunctionsServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
CloudFunctionsServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "functions_v1::CloudFunctionsServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<functions_v1::CloudFunctionsServiceConnection>
MakeCloudFunctionsServiceTracingConnection(
    std::shared_ptr<functions_v1::CloudFunctionsServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<CloudFunctionsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v1_internal
}  // namespace cloud
}  // namespace google
