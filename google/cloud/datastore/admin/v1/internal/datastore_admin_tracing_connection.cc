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
// source: google/datastore/admin/v1/datastore_admin.proto

#include "google/cloud/datastore/admin/v1/internal/datastore_admin_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace datastore_admin_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatastoreAdminTracingConnection::DatastoreAdminTracingConnection(
    std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::datastore::admin::v1::ExportEntitiesResponse>>
DatastoreAdminTracingConnection::ExportEntities(
    google::datastore::admin::v1::ExportEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ExportEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportEntities(request));
}

StatusOr<google::longrunning::Operation>
DatastoreAdminTracingConnection::ExportEntities(
    NoAwaitTag,
    google::datastore::admin::v1::ExportEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ExportEntities");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ExportEntities(NoAwaitTag{}, request));
}

future<StatusOr<google::datastore::admin::v1::ExportEntitiesResponse>>
DatastoreAdminTracingConnection::ExportEntities(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ExportEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ExportEntities(operation));
}

future<StatusOr<google::datastore::admin::v1::ImportEntitiesMetadata>>
DatastoreAdminTracingConnection::ImportEntities(
    google::datastore::admin::v1::ImportEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ImportEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportEntities(request));
}

StatusOr<google::longrunning::Operation>
DatastoreAdminTracingConnection::ImportEntities(
    NoAwaitTag,
    google::datastore::admin::v1::ImportEntitiesRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ImportEntities");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ImportEntities(NoAwaitTag{}, request));
}

future<StatusOr<google::datastore::admin::v1::ImportEntitiesMetadata>>
DatastoreAdminTracingConnection::ImportEntities(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ImportEntities");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ImportEntities(operation));
}

future<StatusOr<google::datastore::admin::v1::Index>>
DatastoreAdminTracingConnection::CreateIndex(
    google::datastore::admin::v1::CreateIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::CreateIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateIndex(request));
}

StatusOr<google::longrunning::Operation>
DatastoreAdminTracingConnection::CreateIndex(
    NoAwaitTag,
    google::datastore::admin::v1::CreateIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::CreateIndex");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->CreateIndex(NoAwaitTag{}, request));
}

future<StatusOr<google::datastore::admin::v1::Index>>
DatastoreAdminTracingConnection::CreateIndex(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::CreateIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->CreateIndex(operation));
}

future<StatusOr<google::datastore::admin::v1::Index>>
DatastoreAdminTracingConnection::DeleteIndex(
    google::datastore::admin::v1::DeleteIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::DeleteIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteIndex(request));
}

StatusOr<google::longrunning::Operation>
DatastoreAdminTracingConnection::DeleteIndex(
    NoAwaitTag,
    google::datastore::admin::v1::DeleteIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::DeleteIndex");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span, child_->DeleteIndex(NoAwaitTag{}, request));
}

future<StatusOr<google::datastore::admin::v1::Index>>
DatastoreAdminTracingConnection::DeleteIndex(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::DeleteIndex");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteIndex(operation));
}

StatusOr<google::datastore::admin::v1::Index>
DatastoreAdminTracingConnection::GetIndex(
    google::datastore::admin::v1::GetIndexRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::GetIndex");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIndex(request));
}

StreamRange<google::datastore::admin::v1::Index>
DatastoreAdminTracingConnection::ListIndexes(
    google::datastore::admin::v1::ListIndexesRequest request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ListIndexes");
  internal::OTelScope scope(span);
  auto sr = child_->ListIndexes(std::move(request));
  return internal::MakeTracedStreamRange<google::datastore::admin::v1::Index>(
      std::move(span), std::move(sr));
}

StreamRange<google::longrunning::Operation>
DatastoreAdminTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
DatastoreAdminTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status DatastoreAdminTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status DatastoreAdminTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "datastore_admin_v1::DatastoreAdminConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection>
MakeDatastoreAdminTracingConnection(
    std::shared_ptr<datastore_admin_v1::DatastoreAdminConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DatastoreAdminTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_admin_v1_internal
}  // namespace cloud
}  // namespace google
