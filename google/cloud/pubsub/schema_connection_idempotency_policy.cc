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
// source: google/pubsub/v1/schema.proto

#include "google/cloud/pubsub/schema_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SchemaServiceConnectionIdempotencyPolicy::
    ~SchemaServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<SchemaServiceConnectionIdempotencyPolicy>
SchemaServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SchemaServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::CreateSchema(
    google::pubsub::v1::CreateSchemaRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::GetSchema(
    google::pubsub::v1::GetSchemaRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::ListSchemas(
    google::pubsub::v1::ListSchemasRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::ListSchemaRevisions(
    google::pubsub::v1::ListSchemaRevisionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::CommitSchema(
    google::pubsub::v1::CommitSchemaRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::RollbackSchema(
    google::pubsub::v1::RollbackSchemaRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::DeleteSchemaRevision(
    google::pubsub::v1::DeleteSchemaRevisionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::DeleteSchema(
    google::pubsub::v1::DeleteSchemaRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::ValidateSchema(
    google::pubsub::v1::ValidateSchemaRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::ValidateMessage(
    google::pubsub::v1::ValidateMessageRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SchemaServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<SchemaServiceConnectionIdempotencyPolicy>
MakeDefaultSchemaServiceConnectionIdempotencyPolicy() {
  return std::make_unique<SchemaServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub
}  // namespace cloud
}  // namespace google
