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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/v2/export_connection.h"
#include "google/cloud/profiler/v2/export_options.h"
#include "google/cloud/profiler/v2/internal/export_connection_impl.h"
#include "google/cloud/profiler/v2/internal/export_option_defaults.h"
#include "google/cloud/profiler/v2/internal/export_stub_factory.h"
#include "google/cloud/profiler/v2/internal/export_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace profiler_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExportServiceConnection::~ExportServiceConnection() = default;

StreamRange<google::devtools::cloudprofiler::v2::Profile>
ExportServiceConnection::ListProfiles(
    google::devtools::cloudprofiler::v2::
        ListProfilesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::devtools::cloudprofiler::v2::Profile>>();
}

std::shared_ptr<ExportServiceConnection> MakeExportServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ExportServicePolicyOptionList>(options,
                                                                __func__);
  options =
      profiler_v2_internal::ExportServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = profiler_v2_internal::CreateDefaultExportServiceStub(
      std::move(auth), options);
  return profiler_v2_internal::MakeExportServiceTracingConnection(
      std::make_shared<profiler_v2_internal::ExportServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_v2
}  // namespace cloud
}  // namespace google
