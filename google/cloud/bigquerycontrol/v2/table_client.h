// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/v2/table.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_TABLE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_TABLE_CLIENT_H

#include "google/cloud/bigquerycontrol/v2/table_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// TableService provides methods for managing BigQuery tables and table-like
/// entities such as views and snapshots.
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
class TableServiceClient {
 public:
  explicit TableServiceClient(
      std::shared_ptr<TableServiceConnection> connection, Options opts = {});
  ~TableServiceClient();

  ///@{
  /// @name Copy and move support
  TableServiceClient(TableServiceClient const&) = default;
  TableServiceClient& operator=(TableServiceClient const&) = default;
  TableServiceClient(TableServiceClient&&) = default;
  TableServiceClient& operator=(TableServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(TableServiceClient const& a,
                         TableServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(TableServiceClient const& a,
                         TableServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets the specified table resource by table ID.
  /// This method does not return the data in the table, it only returns the
  /// table resource, which describes the structure of this table.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.GetTableRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.v2.Table])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.GetTableRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L560}
  /// [google.cloud.bigquery.v2.Table]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L284}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::v2::Table> GetTable(
      google::cloud::bigquery::v2::GetTableRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new, empty table in the dataset.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.InsertTableRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.v2.Table])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.InsertTableRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L607}
  /// [google.cloud.bigquery.v2.Table]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L284}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::v2::Table> InsertTable(
      google::cloud::bigquery::v2::InsertTableRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates information in an existing table. The update method replaces the
  /// entire table resource, whereas the patch method only replaces fields that
  /// are provided in the submitted table resource.
  /// This method supports RFC5789 patch semantics.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.UpdateOrPatchTableRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.v2.Table])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.Table]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L284}
  /// [google.cloud.bigquery.v2.UpdateOrPatchTableRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L618}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::v2::Table> PatchTable(
      google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates information in an existing table. The update method replaces the
  /// entire Table resource, whereas the patch method only replaces fields that
  /// are provided in the submitted Table resource.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.UpdateOrPatchTableRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.bigquery.v2.Table])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.Table]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L284}
  /// [google.cloud.bigquery.v2.UpdateOrPatchTableRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L618}
  ///
  // clang-format on
  StatusOr<google::cloud::bigquery::v2::Table> UpdateTable(
      google::cloud::bigquery::v2::UpdateOrPatchTableRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the table specified by tableId from the dataset.
  /// If the table contains data, all the data will be deleted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.DeleteTableRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.DeleteTableRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L636}
  ///
  // clang-format on
  Status DeleteTable(
      google::cloud::bigquery::v2::DeleteTableRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists all tables in the specified dataset. Requires the READER dataset
  /// role.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.bigquery.v2.ListTablesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.bigquery.v2.ListFormatTable], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.bigquery.v2.ListFormatTable]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L674}
  /// [google.cloud.bigquery.v2.ListTablesRequest]: @googleapis_reference_link{google/cloud/bigquery/v2/table.proto#L648}
  ///
  // clang-format on
  StreamRange<google::cloud::bigquery::v2::ListFormatTable> ListTables(
      google::cloud::bigquery::v2::ListTablesRequest request,
      Options opts = {});

 private:
  std::shared_ptr<TableServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_TABLE_CLIENT_H
