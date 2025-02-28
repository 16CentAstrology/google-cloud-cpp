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
// source: google/cloud/optimization/v1/fleet_routing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_CLIENT_H

#include "google/cloud/optimization/fleet_routing_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace optimization {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service for optimizing vehicle tours.
///
/// Validity of certain types of fields:
///
///   * `google.protobuf.Timestamp`
///     * Times are in Unix time: seconds since 1970-01-01T00:00:00+00:00.
///     * seconds must be in [0, 253402300799],
///       i.e. in [1970-01-01T00:00:00+00:00, 9999-12-31T23:59:59+00:00].
///     * nanos must be unset or set to 0.
///   * `google.protobuf.Duration`
///     * seconds must be in [0, 253402300799],
///       i.e. in [1970-01-01T00:00:00+00:00, 9999-12-31T23:59:59+00:00].
///     * nanos must be unset or set to 0.
///   * `google.type.LatLng`
///     * latitude must be in [-90.0, 90.0].
///     * longitude must be in [-180.0, 180.0].
///     * at least one of latitude and longitude must be non-zero.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class FleetRoutingClient {
 public:
  explicit FleetRoutingClient(
      std::shared_ptr<FleetRoutingConnection> connection, Options opts = {});
  ~FleetRoutingClient();

  ///@{
  // @name Copy and move support
  FleetRoutingClient(FleetRoutingClient const&) = default;
  FleetRoutingClient& operator=(FleetRoutingClient const&) = default;
  FleetRoutingClient(FleetRoutingClient&&) = default;
  FleetRoutingClient& operator=(FleetRoutingClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(FleetRoutingClient const& a,
                         FleetRoutingClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(FleetRoutingClient const& a,
                         FleetRoutingClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Sends an `OptimizeToursRequest` containing a `ShipmentModel` and returns
  /// an `OptimizeToursResponse` containing `ShipmentRoute`s, which are a set of
  /// routes to be performed by vehicles minimizing the overall cost.
  ///
  /// A `ShipmentModel` model consists mainly of `Shipment`s that need to be
  /// carried out and `Vehicle`s that can be used to transport the `Shipment`s.
  /// The `ShipmentRoute`s assign `Shipment`s to `Vehicle`s. More specifically,
  /// they assign a series of `Visit`s to each vehicle, where a `Visit`
  /// corresponds to a `VisitRequest`, which is a pickup or delivery for a
  /// `Shipment`.
  ///
  /// The goal is to provide an assignment of `ShipmentRoute`s to `Vehicle`s
  /// that minimizes the total cost where cost has many components defined in
  /// the `ShipmentModel`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::optimization::v1::OptimizeToursRequest,google/cloud/optimization/v1/fleet_routing.proto#L109}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::optimization::v1::OptimizeToursResponse,google/cloud/optimization/v1/fleet_routing.proto#L357}
  ///
  /// [google.cloud.optimization.v1.OptimizeToursRequest]:
  /// @googleapis_reference_link{google/cloud/optimization/v1/fleet_routing.proto#L109}
  /// [google.cloud.optimization.v1.OptimizeToursResponse]:
  /// @googleapis_reference_link{google/cloud/optimization/v1/fleet_routing.proto#L357}
  ///
  StatusOr<google::cloud::optimization::v1::OptimizeToursResponse>
  OptimizeTours(
      google::cloud::optimization::v1::OptimizeToursRequest const& request,
      Options opts = {});

  ///
  /// Optimizes vehicle tours for one or more `OptimizeToursRequest`
  /// messages as a batch.
  ///
  /// This method is a Long Running Operation (LRO). The inputs for optimization
  /// (`OptimizeToursRequest` messages) and outputs (`OptimizeToursResponse`
  /// messages) are read/written from/to Cloud Storage in user-specified
  /// format. Like the `OptimizeTours` method, each `OptimizeToursRequest`
  /// contains a `ShipmentModel` and returns an `OptimizeToursResponse`
  /// containing `ShipmentRoute`s, which are a set of routes to be performed by
  /// vehicles minimizing the overall cost.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::optimization::v1::BatchOptimizeToursRequest,google/cloud/optimization/v1/fleet_routing.proto#L432}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::optimization::v1::BatchOptimizeToursResponse,google/cloud/optimization/v1/fleet_routing.proto#L471}
  ///
  /// [google.cloud.optimization.v1.BatchOptimizeToursRequest]:
  /// @googleapis_reference_link{google/cloud/optimization/v1/fleet_routing.proto#L432}
  /// [google.cloud.optimization.v1.BatchOptimizeToursResponse]:
  /// @googleapis_reference_link{google/cloud/optimization/v1/fleet_routing.proto#L471}
  ///
  future<StatusOr<google::cloud::optimization::v1::BatchOptimizeToursResponse>>
  BatchOptimizeTours(
      google::cloud::optimization::v1::BatchOptimizeToursRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<FleetRoutingConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_FLEET_ROUTING_CLIENT_H
