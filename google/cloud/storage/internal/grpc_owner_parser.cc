// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/grpc_owner_parser.h"

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

google::storage::v2::Owner GrpcOwnerParser::ToProto(Owner rhs) {
  google::storage::v2::Owner result;
  *result.mutable_entity() = std::move(rhs.entity);
  *result.mutable_entity_id() = std::move(rhs.entity_id);
  return result;
}

Owner GrpcOwnerParser::FromProto(google::storage::v2::Owner rhs) {
  Owner result;
  result.entity = std::move(*rhs.mutable_entity());
  result.entity_id = std::move(*rhs.mutable_entity_id());
  return result;
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
