// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/v2/table.proto

#include "google/cloud/bigquerycontrol/v2/internal/table_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TableServiceTracingConnection::TableServiceTracingConnection(
    std::shared_ptr<bigquerycontrol_v2::TableServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceTracingConnection::GetTable(
    google::cloud::bigquery::v2::GetTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::GetTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetTable(request));
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceTracingConnection::InsertTable(
    google::cloud::bigquery::v2::InsertTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::InsertTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->InsertTable(request));
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceTracingConnection::PatchTable(
    google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::PatchTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->PatchTable(request));
}

StatusOr<google::cloud::bigquery::v2::Table>
TableServiceTracingConnection::UpdateTable(
    google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::UpdateTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateTable(request));
}

Status TableServiceTracingConnection::DeleteTable(
    google::cloud::bigquery::v2::DeleteTableRequest const& request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::DeleteTable");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteTable(request));
}

StreamRange<google::cloud::bigquery::v2::ListFormatTable>
TableServiceTracingConnection::ListTables(
    google::cloud::bigquery::v2::ListTablesRequest request) {
  auto span = internal::MakeSpan(
      "bigquerycontrol_v2::TableServiceConnection::ListTables");
  internal::OTelScope scope(span);
  auto sr = child_->ListTables(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::bigquery::v2::ListFormatTable>(std::move(span),
                                                    std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<bigquerycontrol_v2::TableServiceConnection>
MakeTableServiceTracingConnection(
    std::shared_ptr<bigquerycontrol_v2::TableServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<TableServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google
