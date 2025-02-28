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

#include "google/cloud/dlp/v2/dlp_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dlp_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceClient::DlpServiceClient(
    std::shared_ptr<DlpServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
DlpServiceClient::~DlpServiceClient() = default;

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceClient::InspectContent(
    google::privacy::dlp::v2::InspectContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InspectContent(request);
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceClient::RedactImage(
    google::privacy::dlp::v2::RedactImageRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RedactImage(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceClient::DeidentifyContent(
    google::privacy::dlp::v2::DeidentifyContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeidentifyContent(request);
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceClient::ReidentifyContent(
    google::privacy::dlp::v2::ReidentifyContentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ReidentifyContent(request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceClient::ListInfoTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListInfoTypesRequest request;
  request.set_parent(parent);
  return connection_->ListInfoTypes(request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceClient::ListInfoTypes(
    google::privacy::dlp::v2::ListInfoTypesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInfoTypes(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::CreateInspectTemplate(
    std::string const& parent,
    google::privacy::dlp::v2::InspectTemplate const& inspect_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateInspectTemplateRequest request;
  request.set_parent(parent);
  *request.mutable_inspect_template() = inspect_template;
  return connection_->CreateInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::CreateInspectTemplate(
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::UpdateInspectTemplate(
    std::string const& name,
    google::privacy::dlp::v2::InspectTemplate const& inspect_template,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateInspectTemplateRequest request;
  request.set_name(name);
  *request.mutable_inspect_template() = inspect_template;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::UpdateInspectTemplate(
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::GetInspectTemplate(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetInspectTemplateRequest request;
  request.set_name(name);
  return connection_->GetInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::GetInspectTemplate(
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInspectTemplate(request);
}

StreamRange<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::ListInspectTemplates(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListInspectTemplatesRequest request;
  request.set_parent(parent);
  return connection_->ListInspectTemplates(request);
}

StreamRange<google::privacy::dlp::v2::InspectTemplate>
DlpServiceClient::ListInspectTemplates(
    google::privacy::dlp::v2::ListInspectTemplatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInspectTemplates(std::move(request));
}

Status DlpServiceClient::DeleteInspectTemplate(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteInspectTemplateRequest request;
  request.set_name(name);
  return connection_->DeleteInspectTemplate(request);
}

Status DlpServiceClient::DeleteInspectTemplate(
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInspectTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::CreateDeidentifyTemplate(
    std::string const& parent,
    google::privacy::dlp::v2::DeidentifyTemplate const& deidentify_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateDeidentifyTemplateRequest request;
  request.set_parent(parent);
  *request.mutable_deidentify_template() = deidentify_template;
  return connection_->CreateDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::CreateDeidentifyTemplate(
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::UpdateDeidentifyTemplate(
    std::string const& name,
    google::privacy::dlp::v2::DeidentifyTemplate const& deidentify_template,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest request;
  request.set_name(name);
  *request.mutable_deidentify_template() = deidentify_template;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::UpdateDeidentifyTemplate(
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::GetDeidentifyTemplate(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetDeidentifyTemplateRequest request;
  request.set_name(name);
  return connection_->GetDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::GetDeidentifyTemplate(
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDeidentifyTemplate(request);
}

StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::ListDeidentifyTemplates(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request;
  request.set_parent(parent);
  return connection_->ListDeidentifyTemplates(request);
}

StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceClient::ListDeidentifyTemplates(
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDeidentifyTemplates(std::move(request));
}

Status DlpServiceClient::DeleteDeidentifyTemplate(std::string const& name,
                                                  Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest request;
  request.set_name(name);
  return connection_->DeleteDeidentifyTemplate(request);
}

Status DlpServiceClient::DeleteDeidentifyTemplate(
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDeidentifyTemplate(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::CreateJobTrigger(
    std::string const& parent,
    google::privacy::dlp::v2::JobTrigger const& job_trigger, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateJobTriggerRequest request;
  request.set_parent(parent);
  *request.mutable_job_trigger() = job_trigger;
  return connection_->CreateJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::CreateJobTrigger(
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::UpdateJobTrigger(
    std::string const& name,
    google::privacy::dlp::v2::JobTrigger const& job_trigger,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateJobTriggerRequest request;
  request.set_name(name);
  *request.mutable_job_trigger() = job_trigger;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::UpdateJobTrigger(
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceClient::HybridInspectJobTrigger(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::HybridInspectJobTriggerRequest request;
  request.set_name(name);
  return connection_->HybridInspectJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceClient::HybridInspectJobTrigger(
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->HybridInspectJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceClient::GetJobTrigger(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetJobTriggerRequest request;
  request.set_name(name);
  return connection_->GetJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceClient::GetJobTrigger(
    google::privacy::dlp::v2::GetJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetJobTrigger(request);
}

StreamRange<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::ListJobTriggers(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListJobTriggersRequest request;
  request.set_parent(parent);
  return connection_->ListJobTriggers(request);
}

StreamRange<google::privacy::dlp::v2::JobTrigger>
DlpServiceClient::ListJobTriggers(
    google::privacy::dlp::v2::ListJobTriggersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListJobTriggers(std::move(request));
}

Status DlpServiceClient::DeleteJobTrigger(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteJobTriggerRequest request;
  request.set_name(name);
  return connection_->DeleteJobTrigger(request);
}

Status DlpServiceClient::DeleteJobTrigger(
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::ActivateJobTrigger(
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ActivateJobTrigger(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::CreateDiscoveryConfig(
    std::string const& parent,
    google::privacy::dlp::v2::DiscoveryConfig const& discovery_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateDiscoveryConfigRequest request;
  request.set_parent(parent);
  *request.mutable_discovery_config() = discovery_config;
  return connection_->CreateDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::CreateDiscoveryConfig(
    google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::UpdateDiscoveryConfig(
    std::string const& name,
    google::privacy::dlp::v2::DiscoveryConfig const& discovery_config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateDiscoveryConfigRequest request;
  request.set_name(name);
  *request.mutable_discovery_config() = discovery_config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::UpdateDiscoveryConfig(
    google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::GetDiscoveryConfig(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetDiscoveryConfigRequest request;
  request.set_name(name);
  return connection_->GetDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::GetDiscoveryConfig(
    google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDiscoveryConfig(request);
}

StreamRange<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::ListDiscoveryConfigs(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListDiscoveryConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListDiscoveryConfigs(request);
}

StreamRange<google::privacy::dlp::v2::DiscoveryConfig>
DlpServiceClient::ListDiscoveryConfigs(
    google::privacy::dlp::v2::ListDiscoveryConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDiscoveryConfigs(std::move(request));
}

Status DlpServiceClient::DeleteDiscoveryConfig(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteDiscoveryConfigRequest request;
  request.set_name(name);
  return connection_->DeleteDiscoveryConfig(request);
}

Status DlpServiceClient::DeleteDiscoveryConfig(
    google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDiscoveryConfig(request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::CreateDlpJob(
    std::string const& parent,
    google::privacy::dlp::v2::InspectJobConfig const& inspect_job,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateDlpJobRequest request;
  request.set_parent(parent);
  *request.mutable_inspect_job() = inspect_job;
  return connection_->CreateDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::CreateDlpJob(
    std::string const& parent,
    google::privacy::dlp::v2::RiskAnalysisJobConfig const& risk_job,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateDlpJobRequest request;
  request.set_parent(parent);
  *request.mutable_risk_job() = risk_job;
  return connection_->CreateDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::CreateDlpJob(
    google::privacy::dlp::v2::CreateDlpJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateDlpJob(request);
}

StreamRange<google::privacy::dlp::v2::DlpJob> DlpServiceClient::ListDlpJobs(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListDlpJobsRequest request;
  request.set_parent(parent);
  return connection_->ListDlpJobs(request);
}

StreamRange<google::privacy::dlp::v2::DlpJob> DlpServiceClient::ListDlpJobs(
    google::privacy::dlp::v2::ListDlpJobsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListDlpJobs(std::move(request));
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::GetDlpJob(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetDlpJobRequest request;
  request.set_name(name);
  return connection_->GetDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceClient::GetDlpJob(
    google::privacy::dlp::v2::GetDlpJobRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetDlpJob(request);
}

Status DlpServiceClient::DeleteDlpJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteDlpJobRequest request;
  request.set_name(name);
  return connection_->DeleteDlpJob(request);
}

Status DlpServiceClient::DeleteDlpJob(
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteDlpJob(request);
}

Status DlpServiceClient::CancelDlpJob(
    google::privacy::dlp::v2::CancelDlpJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::CreateStoredInfoType(
    std::string const& parent,
    google::privacy::dlp::v2::StoredInfoTypeConfig const& config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateStoredInfoTypeRequest request;
  request.set_parent(parent);
  *request.mutable_config() = config;
  return connection_->CreateStoredInfoType(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::CreateStoredInfoType(
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateStoredInfoType(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::UpdateStoredInfoType(
    std::string const& name,
    google::privacy::dlp::v2::StoredInfoTypeConfig const& config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateStoredInfoTypeRequest request;
  request.set_name(name);
  *request.mutable_config() = config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateStoredInfoType(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::UpdateStoredInfoType(
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateStoredInfoType(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::GetStoredInfoType(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetStoredInfoTypeRequest request;
  request.set_name(name);
  return connection_->GetStoredInfoType(request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::GetStoredInfoType(
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetStoredInfoType(request);
}

StreamRange<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::ListStoredInfoTypes(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListStoredInfoTypesRequest request;
  request.set_parent(parent);
  return connection_->ListStoredInfoTypes(request);
}

StreamRange<google::privacy::dlp::v2::StoredInfoType>
DlpServiceClient::ListStoredInfoTypes(
    google::privacy::dlp::v2::ListStoredInfoTypesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListStoredInfoTypes(std::move(request));
}

Status DlpServiceClient::DeleteStoredInfoType(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteStoredInfoTypeRequest request;
  request.set_name(name);
  return connection_->DeleteStoredInfoType(request);
}

Status DlpServiceClient::DeleteStoredInfoType(
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteStoredInfoType(request);
}

StreamRange<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceClient::ListProjectDataProfiles(std::string const& parent,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListProjectDataProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListProjectDataProfiles(request);
}

StreamRange<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceClient::ListProjectDataProfiles(
    google::privacy::dlp::v2::ListProjectDataProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListProjectDataProfiles(std::move(request));
}

StreamRange<google::privacy::dlp::v2::TableDataProfile>
DlpServiceClient::ListTableDataProfiles(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListTableDataProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListTableDataProfiles(request);
}

StreamRange<google::privacy::dlp::v2::TableDataProfile>
DlpServiceClient::ListTableDataProfiles(
    google::privacy::dlp::v2::ListTableDataProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTableDataProfiles(std::move(request));
}

StreamRange<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceClient::ListColumnDataProfiles(std::string const& parent,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListColumnDataProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListColumnDataProfiles(request);
}

StreamRange<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceClient::ListColumnDataProfiles(
    google::privacy::dlp::v2::ListColumnDataProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListColumnDataProfiles(std::move(request));
}

StatusOr<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceClient::GetProjectDataProfile(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetProjectDataProfileRequest request;
  request.set_name(name);
  return connection_->GetProjectDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::ProjectDataProfile>
DlpServiceClient::GetProjectDataProfile(
    google::privacy::dlp::v2::GetProjectDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetProjectDataProfile(request);
}

StreamRange<google::privacy::dlp::v2::FileStoreDataProfile>
DlpServiceClient::ListFileStoreDataProfiles(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListFileStoreDataProfilesRequest request;
  request.set_parent(parent);
  return connection_->ListFileStoreDataProfiles(request);
}

StreamRange<google::privacy::dlp::v2::FileStoreDataProfile>
DlpServiceClient::ListFileStoreDataProfiles(
    google::privacy::dlp::v2::ListFileStoreDataProfilesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListFileStoreDataProfiles(std::move(request));
}

StatusOr<google::privacy::dlp::v2::FileStoreDataProfile>
DlpServiceClient::GetFileStoreDataProfile(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetFileStoreDataProfileRequest request;
  request.set_name(name);
  return connection_->GetFileStoreDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::FileStoreDataProfile>
DlpServiceClient::GetFileStoreDataProfile(
    google::privacy::dlp::v2::GetFileStoreDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFileStoreDataProfile(request);
}

Status DlpServiceClient::DeleteFileStoreDataProfile(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteFileStoreDataProfileRequest request;
  request.set_name(name);
  return connection_->DeleteFileStoreDataProfile(request);
}

Status DlpServiceClient::DeleteFileStoreDataProfile(
    google::privacy::dlp::v2::DeleteFileStoreDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteFileStoreDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::TableDataProfile>
DlpServiceClient::GetTableDataProfile(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetTableDataProfileRequest request;
  request.set_name(name);
  return connection_->GetTableDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::TableDataProfile>
DlpServiceClient::GetTableDataProfile(
    google::privacy::dlp::v2::GetTableDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTableDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceClient::GetColumnDataProfile(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetColumnDataProfileRequest request;
  request.set_name(name);
  return connection_->GetColumnDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::ColumnDataProfile>
DlpServiceClient::GetColumnDataProfile(
    google::privacy::dlp::v2::GetColumnDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetColumnDataProfile(request);
}

Status DlpServiceClient::DeleteTableDataProfile(std::string const& name,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteTableDataProfileRequest request;
  request.set_name(name);
  return connection_->DeleteTableDataProfile(request);
}

Status DlpServiceClient::DeleteTableDataProfile(
    google::privacy::dlp::v2::DeleteTableDataProfileRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteTableDataProfile(request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceClient::HybridInspectDlpJob(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::HybridInspectDlpJobRequest request;
  request.set_name(name);
  return connection_->HybridInspectDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceClient::HybridInspectDlpJob(
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->HybridInspectDlpJob(request);
}

Status DlpServiceClient::FinishDlpJob(
    google::privacy::dlp::v2::FinishDlpJobRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->FinishDlpJob(request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceClient::CreateConnection(
    std::string const& parent,
    google::privacy::dlp::v2::Connection const& connection, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::CreateConnectionRequest request;
  request.set_parent(parent);
  *request.mutable_connection() = connection;
  return connection_->CreateConnection(request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceClient::CreateConnection(
    google::privacy::dlp::v2::CreateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateConnection(request);
}

StatusOr<google::privacy::dlp::v2::Connection> DlpServiceClient::GetConnection(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::GetConnectionRequest request;
  request.set_name(name);
  return connection_->GetConnection(request);
}

StatusOr<google::privacy::dlp::v2::Connection> DlpServiceClient::GetConnection(
    google::privacy::dlp::v2::GetConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConnection(request);
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceClient::ListConnections(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::ListConnectionsRequest request;
  request.set_parent(parent);
  return connection_->ListConnections(request);
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceClient::ListConnections(
    google::privacy::dlp::v2::ListConnectionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListConnections(std::move(request));
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceClient::SearchConnections(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::SearchConnectionsRequest request;
  request.set_parent(parent);
  return connection_->SearchConnections(request);
}

StreamRange<google::privacy::dlp::v2::Connection>
DlpServiceClient::SearchConnections(
    google::privacy::dlp::v2::SearchConnectionsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SearchConnections(std::move(request));
}

Status DlpServiceClient::DeleteConnection(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::DeleteConnectionRequest request;
  request.set_name(name);
  return connection_->DeleteConnection(request);
}

Status DlpServiceClient::DeleteConnection(
    google::privacy::dlp::v2::DeleteConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteConnection(request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceClient::UpdateConnection(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::privacy::dlp::v2::UpdateConnectionRequest request;
  request.set_name(name);
  return connection_->UpdateConnection(request);
}

StatusOr<google::privacy::dlp::v2::Connection>
DlpServiceClient::UpdateConnection(
    google::privacy::dlp::v2::UpdateConnectionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConnection(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2
}  // namespace cloud
}  // namespace google
