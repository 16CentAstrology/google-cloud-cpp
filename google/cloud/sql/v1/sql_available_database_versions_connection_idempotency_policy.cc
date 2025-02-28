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
// source: google/cloud/sql/v1/cloud_sql_available_database_versions.proto

#include "google/cloud/sql/v1/sql_available_database_versions_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy::
    ~SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy>
SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy>(*this);
}

std::unique_ptr<SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy>
MakeDefaultSqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      SqlAvailableDatabaseVersionsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
