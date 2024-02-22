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
// source: google/appengine/v1/appengine.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_FIREWALL_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_FIREWALL_METADATA_DECORATOR_H

#include "google/cloud/appengine/v1/internal/firewall_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class FirewallMetadata : public FirewallStub {
 public:
  ~FirewallMetadata() override = default;
  FirewallMetadata(std::shared_ptr<FirewallStub> child,
                   std::multimap<std::string, std::string> fixed_metadata,
                   std::string api_client_header = "");

  StatusOr<google::appengine::v1::ListIngressRulesResponse> ListIngressRules(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::ListIngressRulesRequest const& request) override;

  StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
  BatchUpdateIngressRules(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::BatchUpdateIngressRulesRequest const& request)
      override;

  StatusOr<google::appengine::v1::FirewallRule> CreateIngressRule(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::CreateIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> GetIngressRule(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetIngressRuleRequest const& request) override;

  StatusOr<google::appengine::v1::FirewallRule> UpdateIngressRule(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::UpdateIngressRuleRequest const& request) override;

  Status DeleteIngressRule(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::DeleteIngressRuleRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<FirewallStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_FIREWALL_METADATA_DECORATOR_H
