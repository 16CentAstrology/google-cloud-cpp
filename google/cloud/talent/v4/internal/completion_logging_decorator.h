// Copyright 2022 Google LLC
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
// source: google/cloud/talent/v4/completion_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPLETION_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPLETION_LOGGING_DECORATOR_H

#include "google/cloud/talent/v4/internal/completion_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace talent_v4_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CompletionLogging : public CompletionStub {
 public:
  ~CompletionLogging() override = default;
  CompletionLogging(std::shared_ptr<CompletionStub> child,
                    TracingOptions tracing_options,
                    std::set<std::string> const& components);

  StatusOr<google::cloud::talent::v4::CompleteQueryResponse> CompleteQuery(
      grpc::ClientContext& context, Options const& options,
      google::cloud::talent::v4::CompleteQueryRequest const& request) override;

 private:
  std::shared_ptr<CompletionStub> child_;
  TracingOptions tracing_options_;
  bool stream_logging_;
};  // CompletionLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_INTERNAL_COMPLETION_LOGGING_DECORATOR_H
