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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/routing_matcher.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageMetadata::StorageMetadata(
    std::shared_ptr<StorageStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

Status StorageMetadata::DeleteBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteBucketRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.name().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.name())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteBucket(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageMetadata::GetBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetBucketRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.name().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.name())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetBucket(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageMetadata::CreateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateBucketRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().project().empty()) {
    params.push_back(absl::StrCat(
        "project=", internal::UrlEncode(request.bucket().project())));
  } else if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateBucket(context, options, request);
}

StatusOr<google::storage::v2::ListBucketsResponse> StorageMetadata::ListBuckets(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListBucketsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListBuckets(context, options, request);
}

StatusOr<google::storage::v2::Bucket>
StorageMetadata::LockBucketRetentionPolicy(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->LockBucketRetentionPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> StorageMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.resource().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.resource())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> StorageMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.resource().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.resource())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
StorageMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::iam::v1::TestIamPermissionsRequest>{
        "bucket=",
        {
            {[](google::iam::v1::TestIamPermissionsRequest const& request)
                 -> std::string const& { return request.resource(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/objects/.*",
                        std::regex::optimize}},
            {[](google::iam::v1::TestIamPermissionsRequest const& request)
                 -> std::string const& { return request.resource(); },
             absl::nullopt},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::storage::v2::Bucket> StorageMetadata::UpdateBucket(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateBucketRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().name().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket().name())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->UpdateBucket(context, options, request);
}

Status StorageMetadata::DeleteNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteNotificationConfigRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::v2::DeleteNotificationConfigRequest>{
        "bucket=",
        {
            {[](google::storage::v2::DeleteNotificationConfigRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageMetadata::GetNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetNotificationConfigRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::v2::GetNotificationConfigRequest>{
        "bucket=",
        {
            {[](google::storage::v2::GetNotificationConfigRequest const&
                    request) -> std::string const& { return request.name(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::NotificationConfig>
StorageMetadata::CreateNotificationConfig(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateNotificationConfigRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateNotificationConfig(context, options, request);
}

StatusOr<google::storage::v2::ListNotificationConfigsResponse>
StorageMetadata::ListNotificationConfigs(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListNotificationConfigsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListNotificationConfigs(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageMetadata::ComposeObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ComposeObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.destination().bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=", internal::UrlEncode(request.destination().bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ComposeObject(context, options, request);
}

Status StorageMetadata::DeleteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteObject(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageMetadata::RestoreObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RestoreObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->RestoreObject(context, options, request);
}

StatusOr<google::storage::v2::CancelResumableWriteResponse>
StorageMetadata::CancelResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CancelResumableWriteRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::v2::CancelResumableWriteRequest>{
        "bucket=",
        {
            {[](google::storage::v2::CancelResumableWriteRequest const& request)
                 -> std::string const& { return request.upload_id(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CancelResumableWrite(context, options, request);
}

StatusOr<google::storage::v2::Object> StorageMetadata::GetObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetObject(context, options, request);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageMetadata::ReadObject(
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::storage::v2::ReadObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, options);
  } else {
    SetMetadata(*context, options, absl::StrJoin(params, "&"));
  }
  return child_->ReadObject(std::move(context), options, request);
}

StatusOr<google::storage::v2::Object> StorageMetadata::UpdateObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.object().bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=", internal::UrlEncode(request.object().bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->UpdateObject(context, options, request);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageMetadata::WriteObject(std::shared_ptr<grpc::ClientContext> context,
                             Options const& options) {
  SetMetadata(*context, options);
  return child_->WriteObject(std::move(context), options);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::storage::v2::BidiWriteObjectRequest,
    google::storage::v2::BidiWriteObjectResponse>>
StorageMetadata::AsyncBidiWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  SetMetadata(*context, *options);
  return child_->AsyncBidiWriteObject(cq, std::move(context),
                                      std::move(options));
}

StatusOr<google::storage::v2::ListObjectsResponse> StorageMetadata::ListObjects(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListObjectsRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.parent().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.parent())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListObjects(context, options, request);
}

StatusOr<google::storage::v2::RewriteResponse> StorageMetadata::RewriteObject(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::RewriteObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  if (!request.source_bucket().empty()) {
    params.push_back(absl::StrCat(
        "source_bucket=", internal::UrlEncode(request.source_bucket())));
  }

  if (!request.destination_bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=", internal::UrlEncode(request.destination_bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->RewriteObject(context, options, request);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageMetadata::StartResumableWrite(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::StartResumableWriteRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.write_object_spec().resource().bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=",
        internal::UrlEncode(request.write_object_spec().resource().bucket())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->StartResumableWrite(context, options, request);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageMetadata::QueryWriteStatus(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::v2::QueryWriteStatusRequest>{
        "bucket=",
        {
            {[](google::storage::v2::QueryWriteStatusRequest const& request)
                 -> std::string const& { return request.upload_id(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->QueryWriteStatus(context, options, request);
}

StatusOr<google::storage::v2::ServiceAccount>
StorageMetadata::GetServiceAccount(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetServiceAccountRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.project().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetServiceAccount(context, options, request);
}

StatusOr<google::storage::v2::CreateHmacKeyResponse>
StorageMetadata::CreateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.project().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->CreateHmacKey(context, options, request);
}

Status StorageMetadata::DeleteHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.project().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->DeleteHmacKey(context, options, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageMetadata::GetHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::GetHmacKeyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.project().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->GetHmacKey(context, options, request);
}

StatusOr<google::storage::v2::ListHmacKeysResponse>
StorageMetadata::ListHmacKeys(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::ListHmacKeysRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.project().empty()) {
    params.push_back(
        absl::StrCat("project=", internal::UrlEncode(request.project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->ListHmacKeys(context, options, request);
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageMetadata::UpdateHmacKey(
    grpc::ClientContext& context, Options const& options,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.hmac_key().project().empty()) {
    params.push_back(absl::StrCat(
        "project=", internal::UrlEncode(request.hmac_key().project())));
  }

  if (params.empty()) {
    SetMetadata(context, options);
  } else {
    SetMetadata(context, options, absl::StrJoin(params, "&"));
  }
  return child_->UpdateHmacKey(context, options, request);
}

future<StatusOr<google::storage::v2::Object>>
StorageMetadata::AsyncComposeObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::ComposeObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.destination().bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=", internal::UrlEncode(request.destination().bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncComposeObject(cq, std::move(context), std::move(options),
                                    request);
}

future<Status> StorageMetadata::AsyncDeleteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::DeleteObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncDeleteObject(cq, std::move(context), std::move(options),
                                   request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageMetadata::AsyncReadObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::ReadObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.bucket().empty()) {
    params.push_back(
        absl::StrCat("bucket=", internal::UrlEncode(request.bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncReadObject(cq, std::move(context), std::move(options),
                                 request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageMetadata::AsyncWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options) {
  SetMetadata(*context, *options);
  return child_->AsyncWriteObject(cq, std::move(context), std::move(options));
}

future<StatusOr<google::storage::v2::RewriteResponse>>
StorageMetadata::AsyncRewriteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::RewriteObjectRequest const& request) {
  std::vector<std::string> params;
  params.reserve(2);

  if (!request.source_bucket().empty()) {
    params.push_back(absl::StrCat(
        "source_bucket=", internal::UrlEncode(request.source_bucket())));
  }

  if (!request.destination_bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=", internal::UrlEncode(request.destination_bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncRewriteObject(cq, std::move(context), std::move(options),
                                    request);
}

future<StatusOr<google::storage::v2::StartResumableWriteResponse>>
StorageMetadata::AsyncStartResumableWrite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::StartResumableWriteRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  if (!request.write_object_spec().resource().bucket().empty()) {
    params.push_back(absl::StrCat(
        "bucket=",
        internal::UrlEncode(request.write_object_spec().resource().bucket())));
  }

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncStartResumableWrite(cq, std::move(context),
                                          std::move(options), request);
}

future<StatusOr<google::storage::v2::QueryWriteStatusResponse>>
StorageMetadata::AsyncQueryWriteStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  std::vector<std::string> params;
  params.reserve(1);

  static auto* bucket_matcher = [] {
    return new google::cloud::internal::RoutingMatcher<
        google::storage::v2::QueryWriteStatusRequest>{
        "bucket=",
        {
            {[](google::storage::v2::QueryWriteStatusRequest const& request)
                 -> std::string const& { return request.upload_id(); },
             std::regex{"(projects/[^/]+/buckets/[^/]+)/.*",
                        std::regex::optimize}},
        }};
  }();
  bucket_matcher->AppendParam(request, params);

  if (params.empty()) {
    SetMetadata(*context, *options);
  } else {
    SetMetadata(*context, *options, absl::StrJoin(params, "&"));
  }
  return child_->AsyncQueryWriteStatus(cq, std::move(context),
                                       std::move(options), request);
}

void StorageMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options,
                                  std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void StorageMetadata::SetMetadata(grpc::ClientContext& context,
                                  Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
