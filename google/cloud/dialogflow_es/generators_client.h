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
// source: google/cloud/dialogflow/v2/generator.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_GENERATORS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_GENERATORS_CLIENT_H

#include "google/cloud/dialogflow_es/generators_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Generator Service for LLM powered Agent Assist. This service manages the
/// configurations of user owned Generators, such as description, context and
/// instruction, input/output format, etc. The generator resources will be used
/// inside a conversation and will be triggered by TriggerEvent to query LLM for
/// answers.
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
class GeneratorsClient {
 public:
  explicit GeneratorsClient(std::shared_ptr<GeneratorsConnection> connection,
                            Options opts = {});
  ~GeneratorsClient();

  ///@{
  /// @name Copy and move support
  GeneratorsClient(GeneratorsClient const&) = default;
  GeneratorsClient& operator=(GeneratorsClient const&) = default;
  GeneratorsClient(GeneratorsClient&&) = default;
  GeneratorsClient& operator=(GeneratorsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(GeneratorsClient const& a, GeneratorsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GeneratorsClient const& a, GeneratorsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a generator.
  ///
  /// @param parent  Required. The project/location to create generator for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>`
  /// @param generator  Required. The generator to create.
  /// @param generator_id  Optional. The ID to use for the generator, which will become the final
  ///  component of the generator's resource name.
  ///  @n
  ///  The generator ID must be compliant with the regression fomula
  ///  `[a-zA-Z][a-zA-Z0-9_-]*` with the characters length in range of [3,64].
  ///  If the field is not provided, an Id will be auto-generated.
  ///  If the field is provided, the caller is resposible for
  ///  1. the uniqueness of the ID, otherwise the request will be rejected.
  ///  2. the consistency for whether to use custom ID or not under a project to
  ///  better ensure uniqueness.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L95}
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> CreateGenerator(
      std::string const& parent,
      google::cloud::dialogflow::v2::Generator const& generator,
      std::string const& generator_id, Options opts = {});

  // clang-format off
  ///
  /// Creates a generator.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateGeneratorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L95}
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> CreateGenerator(
      google::cloud::dialogflow::v2::CreateGeneratorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a generator.
  ///
  /// @param name  Required. The generator resource name to retrieve. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/generators/<Generator ID>`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.GetGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L122}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> GetGenerator(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves a generator.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetGeneratorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.GetGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L122}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> GetGenerator(
      google::cloud::dialogflow::v2::GetGeneratorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists generators.
  ///
  /// @param parent  Required. The project/location to list generators for. Format:
  ///  `projects/<Project ID>/locations/<Location ID>`
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
  ///     [google.cloud.dialogflow.v2.Generator], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.ListGeneratorsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L134}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Generator> ListGenerators(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists generators.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListGeneratorsRequest].
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
  ///     [google.cloud.dialogflow.v2.Generator], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.ListGeneratorsRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L134}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::Generator> ListGenerators(
      google::cloud::dialogflow::v2::ListGeneratorsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a generator.
  ///
  /// @param name  Required. The generator resource name to delete. Format:
  ///  `projects/<Project ID>/locations/<Location ID>/generators/<Generator ID>`
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
  /// [google.cloud.dialogflow.v2.DeleteGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L163}
  ///
  // clang-format on
  Status DeleteGenerator(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a generator.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteGeneratorRequest].
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
  /// [google.cloud.dialogflow.v2.DeleteGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L163}
  ///
  // clang-format on
  Status DeleteGenerator(
      google::cloud::dialogflow::v2::DeleteGeneratorRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a generator.
  ///
  /// @param generator  Required. The generator to update.
  ///  The name field of generator is to identify the generator to update.
  /// @param update_mask  Optional. The list of fields to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.UpdateGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L175}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> UpdateGenerator(
      google::cloud::dialogflow::v2::Generator const& generator,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates a generator.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateGeneratorRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.Generator])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.Generator]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L360}
  /// [google.cloud.dialogflow.v2.UpdateGeneratorRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/generator.proto#L175}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::Generator> UpdateGenerator(
      google::cloud::dialogflow::v2::UpdateGeneratorRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<GeneratorsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_GENERATORS_CLIENT_H
