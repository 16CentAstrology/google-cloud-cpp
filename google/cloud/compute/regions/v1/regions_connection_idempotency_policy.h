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
// source: google/cloud/compute/regions/v1/regions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/regions/v1/regions.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_regions_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionsConnectionIdempotencyPolicy {
 public:
  virtual ~RegionsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<RegionsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency GetRegion(
      google::cloud::cpp::compute::regions::v1::GetRegionRequest const&
          request);

  virtual google::cloud::Idempotency ListRegions(
      google::cloud::cpp::compute::regions::v1::ListRegionsRequest request);
};

std::unique_ptr<RegionsConnectionIdempotencyPolicy>
MakeDefaultRegionsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_regions_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGIONS_V1_REGIONS_CONNECTION_IDEMPOTENCY_POLICY_H
