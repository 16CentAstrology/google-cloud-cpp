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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTENTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTENTS_CLIENT_H

#include "google/cloud/dialogflow_cx/intents_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing [Intents][google.cloud.dialogflow.cx.v3.Intent].
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
class IntentsClient {
 public:
  explicit IntentsClient(std::shared_ptr<IntentsConnection> connection,
                         Options opts = {});
  ~IntentsClient();

  ///@{
  // @name Copy and move support
  IntentsClient(IntentsClient const&) = default;
  IntentsClient& operator=(IntentsClient const&) = default;
  IntentsClient(IntentsClient&&) = default;
  IntentsClient& operator=(IntentsClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(IntentsClient const& a, IntentsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IntentsClient const& a, IntentsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Returns the list of all intents in the specified agent.
  ///
  /// @param parent  Required. The agent to list all intents for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListIntentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L235}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Intent> ListIntents(
      std::string const& parent, Options opts = {});

  ///
  /// Returns the list of all intents in the specified agent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::ListIntentsRequest,google/cloud/dialogflow/cx/v3/intent.proto#L235}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.ListIntentsRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L235}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StreamRange<google::cloud::dialogflow::cx::v3::Intent> ListIntents(
      google::cloud::dialogflow::cx::v3::ListIntentsRequest request,
      Options opts = {});

  ///
  /// Retrieves the specified intent.
  ///
  /// @param name  Required. The name of the intent.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/intents/<Intent ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L280}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> GetIntent(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves the specified intent.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::GetIntentRequest,google/cloud/dialogflow/cx/v3/intent.proto#L280}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.GetIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L280}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> GetIntent(
      google::cloud::dialogflow::cx::v3::GetIntentRequest const& request,
      Options opts = {});

  ///
  /// Creates an intent in the specified agent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param parent  Required. The agent to create an intent for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>`.
  /// @param intent  Required. The intent to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L305}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> CreateIntent(
      std::string const& parent,
      google::cloud::dialogflow::cx::v3::Intent const& intent,
      Options opts = {});

  ///
  /// Creates an intent in the specified agent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::CreateIntentRequest,google/cloud/dialogflow/cx/v3/intent.proto#L305}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.CreateIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L305}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> CreateIntent(
      google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request,
      Options opts = {});

  ///
  /// Updates the specified intent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param intent  Required. The intent to update.
  /// @param update_mask  The mask to control which fields get updated. If the
  /// mask is not present,
  ///  all fields will be updated.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L331}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> UpdateIntent(
      google::cloud::dialogflow::cx::v3::Intent const& intent,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the specified intent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::UpdateIntentRequest,google/cloud/dialogflow/cx/v3/intent.proto#L331}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::Intent,google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  /// [google.cloud.dialogflow.cx.v3.UpdateIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L331}
  /// [google.cloud.dialogflow.cx.v3.Intent]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L102}
  ///
  StatusOr<google::cloud::dialogflow::cx::v3::Intent> UpdateIntent(
      google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request,
      Options opts = {});

  ///
  /// Deletes the specified intent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param name  Required. The name of the intent to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/agents/<Agent
  ///  ID>/intents/<Intent ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L352}
  ///
  Status DeleteIntent(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified intent.
  ///
  /// Note: You should always train a flow prior to sending it queries. See the
  /// [training
  /// documentation](https://cloud.google.com/dialogflow/cx/docs/concept/training).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dialogflow::cx::v3::DeleteIntentRequest,google/cloud/dialogflow/cx/v3/intent.proto#L352}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dialogflow.cx.v3.DeleteIntentRequest]:
  /// @googleapis_reference_link{google/cloud/dialogflow/cx/v3/intent.proto#L352}
  ///
  Status DeleteIntent(
      google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<IntentsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTENTS_CLIENT_H
