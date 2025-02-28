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
// source: google/cloud/contactcenterinsights/v1/contact_center_insights.proto

#include "google/cloud/contactcenterinsights/internal/contact_center_insights_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contactcenterinsights/v1/contact_center_insights.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace contactcenterinsights_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContactCenterInsightsLogging::ContactCenterInsightsLogging(
    std::shared_ptr<ContactCenterInsightsStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsLogging::CreateConversation(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::CreateConversationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 CreateConversationRequest const& request) {
        return child_->CreateConversation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsLogging::UpdateConversation(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdateConversationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 UpdateConversationRequest const& request) {
        return child_->UpdateConversation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Conversation>
ContactCenterInsightsLogging::GetConversation(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetConversationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 GetConversationRequest const& request) {
        return child_->GetConversation(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListConversationsResponse>
ContactCenterInsightsLogging::ListConversations(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListConversationsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 ListConversationsRequest const& request) {
        return child_->ListConversations(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status ContactCenterInsightsLogging::DeleteConversation(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::DeleteConversationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 DeleteConversationRequest const& request) {
        return child_->DeleteConversation(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncCreateAnalysis(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::contactcenterinsights::v1::CreateAnalysisRequest const&
              request) {
        return child_->AsyncCreateAnalysis(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Analysis>
ContactCenterInsightsLogging::GetAnalysis(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::GetAnalysisRequest const&
                 request) { return child_->GetAnalysis(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListAnalysesResponse>
ContactCenterInsightsLogging::ListAnalyses(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::contactcenterinsights::v1::ListAnalysesRequest const&
              request) { return child_->ListAnalyses(context, request); },
      context, request, __func__, tracing_options_);
}

Status ContactCenterInsightsLogging::DeleteAnalysis(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::contactcenterinsights::v1::DeleteAnalysisRequest const&
              request) { return child_->DeleteAnalysis(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncBulkAnalyzeConversations(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::
        BulkAnalyzeConversationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 BulkAnalyzeConversationsRequest const& request) {
        return child_->AsyncBulkAnalyzeConversations(cq, std::move(context),
                                                     request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncIngestConversations(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::IngestConversationsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 IngestConversationsRequest const& request) {
        return child_->AsyncIngestConversations(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncExportInsightsData(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::ExportInsightsDataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 ExportInsightsDataRequest const& request) {
        return child_->AsyncExportInsightsData(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncCreateIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::CreateIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 CreateIssueModelRequest const& request) {
        return child_->AsyncCreateIssueModel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsLogging::UpdateIssueModel(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdateIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 UpdateIssueModelRequest const& request) {
        return child_->UpdateIssueModel(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::IssueModel>
ContactCenterInsightsLogging::GetIssueModel(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::contactcenterinsights::v1::GetIssueModelRequest const&
              request) { return child_->GetIssueModel(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssueModelsResponse>
ContactCenterInsightsLogging::ListIssueModels(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListIssueModelsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 ListIssueModelsRequest const& request) {
        return child_->ListIssueModels(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncDeleteIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::DeleteIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 DeleteIssueModelRequest const& request) {
        return child_->AsyncDeleteIssueModel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncDeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::DeployIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 DeployIssueModelRequest const& request) {
        return child_->AsyncDeployIssueModel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncUndeployIssueModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::contactcenterinsights::v1::UndeployIssueModelRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::contactcenterinsights::v1::
                 UndeployIssueModelRequest const& request) {
        return child_->AsyncUndeployIssueModel(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsLogging::GetIssue(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetIssueRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::GetIssueRequest const&
                 request) { return child_->GetIssue(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListIssuesResponse>
ContactCenterInsightsLogging::ListIssues(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::ListIssuesRequest const&
                 request) { return child_->ListIssues(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Issue>
ContactCenterInsightsLogging::UpdateIssue(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::UpdateIssueRequest const&
                 request) { return child_->UpdateIssue(context, request); },
      context, request, __func__, tracing_options_);
}

Status ContactCenterInsightsLogging::DeleteIssue(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::DeleteIssueRequest const&
                 request) { return child_->DeleteIssue(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::contactcenterinsights::v1::CalculateIssueModelStatsResponse>
ContactCenterInsightsLogging::CalculateIssueModelStats(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::
        CalculateIssueModelStatsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 CalculateIssueModelStatsRequest const& request) {
        return child_->CalculateIssueModelStats(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsLogging::CreatePhraseMatcher(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::CreatePhraseMatcherRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 CreatePhraseMatcherRequest const& request) {
        return child_->CreatePhraseMatcher(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsLogging::GetPhraseMatcher(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetPhraseMatcherRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 GetPhraseMatcherRequest const& request) {
        return child_->GetPhraseMatcher(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListPhraseMatchersResponse>
ContactCenterInsightsLogging::ListPhraseMatchers(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListPhraseMatchersRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 ListPhraseMatchersRequest const& request) {
        return child_->ListPhraseMatchers(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status ContactCenterInsightsLogging::DeletePhraseMatcher(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::DeletePhraseMatcherRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 DeletePhraseMatcherRequest const& request) {
        return child_->DeletePhraseMatcher(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::PhraseMatcher>
ContactCenterInsightsLogging::UpdatePhraseMatcher(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdatePhraseMatcherRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::
                 UpdatePhraseMatcherRequest const& request) {
        return child_->UpdatePhraseMatcher(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::CalculateStatsResponse>
ContactCenterInsightsLogging::CalculateStats(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::contactcenterinsights::v1::CalculateStatsRequest const&
              request) { return child_->CalculateStats(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsLogging::GetSettings(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::GetSettingsRequest const&
                 request) { return child_->GetSettings(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::Settings>
ContactCenterInsightsLogging::UpdateSettings(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::contactcenterinsights::v1::UpdateSettingsRequest const&
              request) { return child_->UpdateSettings(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsLogging::CreateView(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::CreateViewRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::CreateViewRequest const&
                 request) { return child_->CreateView(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsLogging::GetView(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::GetViewRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::GetViewRequest const&
                 request) { return child_->GetView(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::ListViewsResponse>
ContactCenterInsightsLogging::ListViews(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::ListViewsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::ListViewsRequest const&
                 request) { return child_->ListViews(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::contactcenterinsights::v1::View>
ContactCenterInsightsLogging::UpdateView(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::UpdateViewRequest const&
                 request) { return child_->UpdateView(context, request); },
      context, request, __func__, tracing_options_);
}

Status ContactCenterInsightsLogging::DeleteView(
    grpc::ClientContext& context,
    google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::contactcenterinsights::v1::DeleteViewRequest const&
                 request) { return child_->DeleteView(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ContactCenterInsightsLogging::AsyncGetOperation(
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

future<Status> ContactCenterInsightsLogging::AsyncCancelOperation(
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
}  // namespace contactcenterinsights_internal
}  // namespace cloud
}  // namespace google
