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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_CONNECTION_H

#include "google/cloud/apigeeconnect/v1/connection_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace apigeeconnect_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ConnectionServiceTracingConnection
    : public apigeeconnect_v1::ConnectionServiceConnection {
 public:
  ~ConnectionServiceTracingConnection() override = default;

  explicit ConnectionServiceTracingConnection(
      std::shared_ptr<apigeeconnect_v1::ConnectionServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::apigeeconnect::v1::Connection> ListConnections(
      google::cloud::apigeeconnect::v1::ListConnectionsRequest request)
      override;

 private:
  std::shared_ptr<apigeeconnect_v1::ConnectionServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<apigeeconnect_v1::ConnectionServiceConnection>
MakeConnectionServiceTracingConnection(
    std::shared_ptr<apigeeconnect_v1::ConnectionServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace apigeeconnect_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APIGEECONNECT_V1_INTERNAL_CONNECTION_TRACING_CONNECTION_H
