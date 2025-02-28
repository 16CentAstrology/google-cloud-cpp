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
// source: google/devtools/cloudtrace/v1/trace.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_LOGGING_DECORATOR_H

#include "google/cloud/trace/v1/internal/trace_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace trace_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TraceServiceLogging : public TraceServiceStub {
 public:
  ~TraceServiceLogging() override = default;
  TraceServiceLogging(std::shared_ptr<TraceServiceStub> child,
                      TracingOptions tracing_options,
                      std::set<std::string> const& components);

  StatusOr<google::devtools::cloudtrace::v1::ListTracesResponse> ListTraces(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudtrace::v1::ListTracesRequest const& request)
      override;

  StatusOr<google::devtools::cloudtrace::v1::Trace> GetTrace(
      grpc::ClientContext& context, Options const& options,
      google::devtools::cloudtrace::v1::GetTraceRequest const& request)
      override;

  Status PatchTraces(grpc::ClientContext& context, Options const& options,
                     google::devtools::cloudtrace::v1::PatchTracesRequest const&
                         request) override;

 private:
  std::shared_ptr<TraceServiceStub> child_;
  TracingOptions tracing_options_;
};  // TraceServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRACE_V1_INTERNAL_TRACE_LOGGING_DECORATOR_H
