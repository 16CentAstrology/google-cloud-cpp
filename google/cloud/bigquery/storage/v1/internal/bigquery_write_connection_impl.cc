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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_connection_impl.h"
#include "google/cloud/bigquery/storage/v1/internal/bigquery_write_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_storage_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<bigquery_storage_v1::BigQueryWriteRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<bigquery_storage_v1::BigQueryWriteRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<bigquery_storage_v1::BigQueryWriteBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<bigquery_storage_v1::BigQueryWriteConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          bigquery_storage_v1::BigQueryWriteConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

BigQueryWriteConnectionImpl::BigQueryWriteConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_storage_v1_internal::BigQueryWriteStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      BigQueryWriteConnection::options())) {}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnectionImpl::CreateWriteStream(
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateWriteStream(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
              request) {
        return stub_->CreateWriteStream(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnectionImpl::GetWriteStream(
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetWriteStream(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
                 request) {
        return stub_->GetWriteStream(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
BigQueryWriteConnectionImpl::FinalizeWriteStream(
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FinalizeWriteStream(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::storage::v1::
                 FinalizeWriteStreamRequest const& request) {
        return stub_->FinalizeWriteStream(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
BigQueryWriteConnectionImpl::BatchCommitWriteStreams(
    google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->BatchCommitWriteStreams(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::storage::v1::
                 BatchCommitWriteStreamsRequest const& request) {
        return stub_->BatchCommitWriteStreams(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
BigQueryWriteConnectionImpl::FlushRows(
    google::cloud::bigquery::storage::v1::FlushRowsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->FlushRows(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::bigquery::storage::v1::FlushRowsRequest const&
                 request) {
        return stub_->FlushRows(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_storage_v1_internal
}  // namespace cloud
}  // namespace google
