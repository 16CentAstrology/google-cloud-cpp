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
// source: google/privacy/dlp/v2/dlp.proto

#include "google/cloud/dlp/v2/internal/dlp_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace dlp_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DlpServiceTracingStub::DlpServiceTracingStub(
    std::shared_ptr<DlpServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceTracingStub::InspectContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::InspectContentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "InspectContent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->InspectContent(context, options, request));
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceTracingStub::RedactImage(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::RedactImageRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService", "RedactImage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->RedactImage(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceTracingStub::DeidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeidentifyContent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeidentifyContent(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceTracingStub::ReidentifyContent(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ReidentifyContent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ReidentifyContent(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceTracingStub::ListInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListInfoTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInfoTypes(context, options, request));
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceTracingStub::CreateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateInspectTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateInspectTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceTracingStub::UpdateInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "UpdateInspectTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateInspectTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceTracingStub::GetInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "GetInspectTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetInspectTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
DlpServiceTracingStub::ListInspectTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListInspectTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListInspectTemplates(context, options, request));
}

Status DlpServiceTracingStub::DeleteInspectTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteInspectTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteInspectTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceTracingStub::CreateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateDeidentifyTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateDeidentifyTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceTracingStub::UpdateDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "UpdateDeidentifyTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateDeidentifyTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceTracingStub::GetDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "GetDeidentifyTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetDeidentifyTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
DlpServiceTracingStub::ListDeidentifyTemplates(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListDeidentifyTemplates");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListDeidentifyTemplates(context, options, request));
}

Status DlpServiceTracingStub::DeleteDeidentifyTemplate(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteDeidentifyTemplate");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteDeidentifyTemplate(context, options, request));
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceTracingStub::CreateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceTracingStub::UpdateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "UpdateJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceTracingStub::HybridInspectJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "HybridInspectJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->HybridInspectJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceTracingStub::GetJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "GetJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
DlpServiceTracingStub::ListJobTriggers(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListJobTriggersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListJobTriggers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListJobTriggers(context, options, request));
}

Status DlpServiceTracingStub::DeleteJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DlpJob>
DlpServiceTracingStub::ActivateJobTrigger(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ActivateJobTrigger");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ActivateJobTrigger(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceTracingStub::CreateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateDiscoveryConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateDiscoveryConfig(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceTracingStub::UpdateDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "UpdateDiscoveryConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateDiscoveryConfig(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceTracingStub::GetDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "GetDiscoveryConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetDiscoveryConfig(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListDiscoveryConfigsResponse>
DlpServiceTracingStub::ListDiscoveryConfigs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDiscoveryConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListDiscoveryConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListDiscoveryConfigs(context, options, request));
}

Status DlpServiceTracingStub::DeleteDiscoveryConfig(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteDiscoveryConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteDiscoveryConfig(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceTracingStub::CreateDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDlpJob(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>
DlpServiceTracingStub::ListDlpJobs(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService", "ListDlpJobs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDlpJobs(context, options, request));
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceTracingStub::GetDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetDlpJobRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService", "GetDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDlpJob(context, options, request));
}

Status DlpServiceTracingStub::DeleteDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteDlpJob(context, options, request));
}

Status DlpServiceTracingStub::CancelDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CancelDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelDlpJob(context, options, request));
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceTracingStub::CreateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "CreateStoredInfoType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateStoredInfoType(context, options, request));
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceTracingStub::UpdateStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "UpdateStoredInfoType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateStoredInfoType(context, options, request));
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceTracingStub::GetStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "GetStoredInfoType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetStoredInfoType(context, options, request));
}

StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
DlpServiceTracingStub::ListStoredInfoTypes(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "ListStoredInfoTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListStoredInfoTypes(context, options, request));
}

Status DlpServiceTracingStub::DeleteStoredInfoType(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "DeleteStoredInfoType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteStoredInfoType(context, options, request));
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceTracingStub::HybridInspectDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "HybridInspectDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->HybridInspectDlpJob(context, options, request));
}

Status DlpServiceTracingStub::FinishDlpJob(
    grpc::ClientContext& context, Options const& options,
    google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.privacy.dlp.v2.DlpService",
                                     "FinishDlpJob");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FinishDlpJob(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DlpServiceStub> MakeDlpServiceTracingStub(
    std::shared_ptr<DlpServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DlpServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2_internal
}  // namespace cloud
}  // namespace google
