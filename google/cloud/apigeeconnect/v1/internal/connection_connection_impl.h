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
// source: google/cloud/apigeeconnect/v1/connection.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_CONNECTION_IMPL_H

#include "google/cloud/apigeeconnect/v1/connection_connection.h"
#include "google/cloud/apigeeconnect/v1/connection_connection_idempotency_policy.h"
#include "google/cloud/apigeeconnect/v1/connection_options.h"
#include "google/cloud/apigeeconnect/v1/internal/connection_retry_traits.h"
#include "google/cloud/apigeeconnect/v1/internal/connection_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConnectionServiceConnectionImpl
    : public apigeeconnect_v1::ConnectionServiceConnection {
 public:
  ~ConnectionServiceConnectionImpl() override = default;

  ConnectionServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<apigeeconnect_v1_internal::ConnectionServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::apigeeconnect::v1::Connection> ListConnections(
      google::cloud::apigeeconnect::v1::ListConnectionsRequest request)
      override;

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<apigeeconnect_v1_internal::ConnectionServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_CONNECTION_IMPL_H
