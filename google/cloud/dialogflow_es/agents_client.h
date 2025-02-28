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
// source: google/cloud/dialogflow/v2/agent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CLIENT_H

#include "google/cloud/dialogflow_es/agents_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Agents][google.cloud.dialogflow.v2.Agent].
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
class AgentsClient {
 public:
  explicit AgentsClient(std::shared_ptr<AgentsConnection> connection,
                        Options opts = {});
  ~AgentsClient();

  ///@{
  // @name Copy and move support
  AgentsClient(AgentsClient const&) = default;
  AgentsClient& operator=(AgentsClient const&) = default;
  AgentsClient(AgentsClient&&) = default;
  AgentsClient& operator=(AgentsClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(AgentsClient const& a, AgentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(AgentsClient const& a, AgentsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Retrieves the specified agent.
  ///
  /// @param parent  Required. The project that the agent to fetch is associated
  /// with.
  ///  Format: `projects/<Project ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.GetAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L375}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StatusOr<google::cloud::dialogflow::v2::Agent> GetAgent(
      std::string const& parent, Options opts = {});

  ///
  /// Retrieves the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetAgentRequest,google/cloud/dialogflow/v2/agent.proto#L375}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.GetAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L375}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StatusOr<google::cloud::dialogflow::v2::Agent> GetAgent(
      google::cloud::dialogflow::v2::GetAgentRequest const& request,
      Options opts = {});

  ///
  /// Creates/updates the specified agent.
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param agent  Required. The agent to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.SetAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L387}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StatusOr<google::cloud::dialogflow::v2::Agent> SetAgent(
      google::cloud::dialogflow::v2::Agent const& agent, Options opts = {});

  ///
  /// Creates/updates the specified agent.
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::SetAgentRequest,google/cloud/dialogflow/v2/agent.proto#L387}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.SetAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L387}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StatusOr<google::cloud::dialogflow::v2::Agent> SetAgent(
      google::cloud::dialogflow::v2::SetAgentRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified agent.
  ///
  /// @param parent  Required. The project that the agent to delete is
  /// associated with.
  ///  Format: `projects/<Project ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L396}
  ///
  Status DeleteAgent(std::string const& parent, Options opts = {});

  ///
  /// Deletes the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::DeleteAgentRequest,google/cloud/dialogflow/v2/agent.proto#L396}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.v2.DeleteAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L396}
  ///
  Status DeleteAgent(
      google::cloud::dialogflow::v2::DeleteAgentRequest const& request,
      Options opts = {});

  ///
  /// Returns the list of agents.
  ///
  /// Since there is at most one conversational agent per project, this method
  /// is useful primarily for listing all agents across projects the caller has
  /// access to. One can achieve that with a wildcard project collection id "-".
  /// Refer to [List
  /// Sub-Collections](https://cloud.google.com/apis/design/design_patterns#list_sub-collections).
  ///
  /// @param parent  Required. The project to list agents from.
  ///  Format: `projects/<Project ID or '-'>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.SearchAgentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L408}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StreamRange<google::cloud::dialogflow::v2::Agent> SearchAgents(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of agents.
  ///
  /// Since there is at most one conversational agent per project, this method
  /// is useful primarily for listing all agents across projects the caller has
  /// access to. One can achieve that with a wildcard project collection id "-".
  /// Refer to [List
  /// Sub-Collections](https://cloud.google.com/apis/design/design_patterns#list_sub-collections).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::SearchAgentsRequest,google/cloud/dialogflow/v2/agent.proto#L408}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::Agent,google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  /// [google.cloud.dialogflow.v2.SearchAgentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L408}
  /// [google.cloud.dialogflow.v2.Agent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L255}
  ///
  StreamRange<google::cloud::dialogflow::v2::Agent> SearchAgents(
      google::cloud::dialogflow::v2::SearchAgentsRequest request,
      Options opts = {});

  ///
  /// Trains the specified agent.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param parent  Required. The project that the agent to train is associated
  /// with.
  ///  Format: `projects/<Project ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.v2.TrainAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L438}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> TrainAgent(
      std::string const& parent, Options opts = {});

  ///
  /// Trains the specified agent.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::TrainAgentRequest,google/cloud/dialogflow/v2/agent.proto#L438}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.v2.TrainAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L438}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> TrainAgent(
      google::cloud::dialogflow::v2::TrainAgentRequest const& request,
      Options opts = {});

  ///
  /// Exports the specified agent to a ZIP file.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`:
  /// [ExportAgentResponse][google.cloud.dialogflow.v2.ExportAgentResponse]
  ///
  /// @param parent  Required. The project that the agent to export is
  /// associated with.
  ///  Format: `projects/<Project ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::ExportAgentResponse,google/cloud/dialogflow/v2/agent.proto#L474}
  ///
  /// [google.cloud.dialogflow.v2.ExportAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L450}
  /// [google.cloud.dialogflow.v2.ExportAgentResponse]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L474}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
  ExportAgent(std::string const& parent, Options opts = {});

  ///
  /// Exports the specified agent to a ZIP file.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`:
  /// [ExportAgentResponse][google.cloud.dialogflow.v2.ExportAgentResponse]
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ExportAgentRequest,google/cloud/dialogflow/v2/agent.proto#L450}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::ExportAgentResponse,google/cloud/dialogflow/v2/agent.proto#L474}
  ///
  /// [google.cloud.dialogflow.v2.ExportAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L450}
  /// [google.cloud.dialogflow.v2.ExportAgentResponse]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L474}
  ///
  future<StatusOr<google::cloud::dialogflow::v2::ExportAgentResponse>>
  ExportAgent(google::cloud::dialogflow::v2::ExportAgentRequest const& request,
              Options opts = {});

  ///
  /// Imports the specified agent from a ZIP file.
  ///
  /// Uploads new intents and entity types without deleting the existing ones.
  /// Intents and entity types with the same name are replaced with the new
  /// versions from
  /// [ImportAgentRequest][google.cloud.dialogflow.v2.ImportAgentRequest]. After
  /// the import, the imported draft agent will be trained automatically (unless
  /// disabled in agent settings). However, once the import is done, training
  /// may not be completed yet. Please call
  /// [TrainAgent][google.cloud.dialogflow.v2.Agents.TrainAgent] and wait for
  /// the operation it returns in order to train explicitly.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// The operation only tracks when importing is complete, not when it is done
  /// training.
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::ImportAgentRequest,google/cloud/dialogflow/v2/agent.proto#L487}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.v2.ImportAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L487}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> ImportAgent(
      google::cloud::dialogflow::v2::ImportAgentRequest const& request,
      Options opts = {});

  ///
  /// Restores the specified agent from a ZIP file.
  ///
  /// Replaces the current agent version with a new one. All the intents and
  /// entity types in the older version are deleted. After the restore, the
  /// restored draft agent will be trained automatically (unless disabled in
  /// agent settings). However, once the restore is done, training may not be
  /// completed yet. Please call
  /// [TrainAgent][google.cloud.dialogflow.v2.Agents.TrainAgent] and wait for
  /// the operation it returns in order to train explicitly.
  ///
  /// This method is a [long-running
  /// operation](https://cloud.google.com/dialogflow/es/docs/how/long-running-operations).
  /// The returned `Operation` type has the following method-specific fields:
  ///
  /// - `metadata`: An empty [Struct
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#struct)
  /// - `response`: An [Empty
  ///   message](https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#empty)
  ///
  /// The operation only tracks when restoring is complete, not when it is done
  /// training.
  ///
  /// Note: You should always train an agent prior to sending it queries. See
  /// the [training
  /// documentation](https://cloud.google.com/dialogflow/es/docs/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::RestoreAgentRequest,google/cloud/dialogflow/v2/agent.proto#L515}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::protobuf::Struct,google/protobuf/struct.proto#L51}
  ///
  /// [google.cloud.dialogflow.v2.RestoreAgentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L515}
  /// [google.protobuf.Struct]:
  /// @googleapis_reference_link{google/protobuf/struct.proto#L51}
  ///
  future<StatusOr<google::protobuf::Struct>> RestoreAgent(
      google::cloud::dialogflow::v2::RestoreAgentRequest const& request,
      Options opts = {});

  ///
  /// Gets agent validation result. Agent validation is performed during
  /// training time and is updated automatically when training is completed.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::v2::GetValidationResultRequest,google/cloud/dialogflow/v2/agent.proto#L543}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::v2::ValidationResult,google/cloud/dialogflow/v2/validation_result.proto#L71}
  ///
  /// [google.cloud.dialogflow.v2.GetValidationResultRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/agent.proto#L543}
  /// [google.cloud.dialogflow.v2.ValidationResult]:
  /// @googleapis_reference_link{google/cloud/dialogflow/v2/validation_result.proto#L71}
  ///
  StatusOr<google::cloud::dialogflow::v2::ValidationResult> GetValidationResult(
      google::cloud::dialogflow::v2::GetValidationResultRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<AgentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_AGENTS_CLIENT_H
