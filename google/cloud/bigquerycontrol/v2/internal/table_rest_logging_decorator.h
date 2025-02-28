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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_TABLE_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_TABLE_REST_LOGGING_DECORATOR_H

#include "google/cloud/bigquerycontrol/v2/internal/table_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/v2/table.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TableServiceRestLogging : public TableServiceRestStub {
 public:
  ~TableServiceRestLogging() override = default;
  TableServiceRestLogging(std::shared_ptr<TableServiceRestStub> child,
                          TracingOptions tracing_options,
                          std::set<std::string> components);

  StatusOr<google::cloud::bigquery::v2::Table> GetTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::GetTableRequest const& request) override;

  StatusOr<google::cloud::bigquery::v2::Table> InsertTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::InsertTableRequest const& request) override;

  StatusOr<google::cloud::bigquery::v2::Table> PatchTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request)
      override;

  StatusOr<google::cloud::bigquery::v2::Table> UpdateTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request)
      override;

  Status DeleteTable(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::DeleteTableRequest const& request) override;

  StatusOr<google::cloud::bigquery::v2::TableList> ListTables(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::bigquery::v2::ListTablesRequest const& request) override;

 private:
  std::shared_ptr<TableServiceRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_TABLE_REST_LOGGING_DECORATOR_H
