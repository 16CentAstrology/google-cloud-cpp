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
// source:
// google/cloud/compute/interconnect_remote_locations/v1/interconnect_remote_locations.proto

#include "google/cloud/compute/interconnect_remote_locations/v1/internal/interconnect_remote_locations_rest_stub_factory.h"
#include "google/cloud/compute/interconnect_remote_locations/v1/internal/interconnect_remote_locations_rest_logging_decorator.h"
#include "google/cloud/compute/interconnect_remote_locations/v1/internal/interconnect_remote_locations_rest_metadata_decorator.h"
#include "google/cloud/compute/interconnect_remote_locations/v1/internal/interconnect_remote_locations_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/algorithm.h"
#include "google/cloud/internal/populate_rest_options.h"
#include "google/cloud/log.h"
#include "google/cloud/options.h"
#include "google/cloud/rest_options.h"
#include "absl/strings/match.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_interconnect_remote_locations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<InterconnectRemoteLocationsRestStub>
CreateDefaultInterconnectRemoteLocationsRestStub(Options const& options) {
  auto opts = internal::PopulateRestOptions(options);
  std::shared_ptr<InterconnectRemoteLocationsRestStub> stub =
      std::make_shared<DefaultInterconnectRemoteLocationsRestStub>(
          std::move(opts));
  stub = std::make_shared<InterconnectRemoteLocationsRestMetadata>(
      std::move(stub));
  if (internal::Contains(options.get<LoggingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for REST rpc calls";
    stub = std::make_shared<InterconnectRemoteLocationsRestLogging>(
        std::move(stub), options.get<RestTracingOptionsOption>(),
        options.get<LoggingComponentsOption>());
  }
  return stub;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_remote_locations_v1_internal
}  // namespace cloud
}  // namespace google
