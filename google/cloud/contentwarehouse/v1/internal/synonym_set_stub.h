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
// source: google/cloud/contentwarehouse/v1/synonymset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_SYNONYM_SET_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_SYNONYM_SET_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/contentwarehouse/v1/synonymset_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SynonymSetServiceStub {
 public:
  virtual ~SynonymSetServiceStub() = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
  CreateSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::CreateSynonymSetRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
  GetSynonymSet(grpc::ClientContext& context, Options const& options,
                google::cloud::contentwarehouse::v1::GetSynonymSetRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::SynonymSet>
  UpdateSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest const&
          request) = 0;

  virtual Status DeleteSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::contentwarehouse::v1::ListSynonymSetsResponse>
  ListSynonymSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::ListSynonymSetsRequest const&
          request) = 0;
};

class DefaultSynonymSetServiceStub : public SynonymSetServiceStub {
 public:
  explicit DefaultSynonymSetServiceStub(
      std::unique_ptr<
          google::cloud::contentwarehouse::v1::SynonymSetService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::contentwarehouse::v1::SynonymSet> CreateSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::CreateSynonymSetRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::SynonymSet> GetSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::GetSynonymSetRequest const& request)
      override;

  StatusOr<google::cloud::contentwarehouse::v1::SynonymSet> UpdateSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::UpdateSynonymSetRequest const&
          request) override;

  Status DeleteSynonymSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::DeleteSynonymSetRequest const&
          request) override;

  StatusOr<google::cloud::contentwarehouse::v1::ListSynonymSetsResponse>
  ListSynonymSets(
      grpc::ClientContext& context, Options const& options,
      google::cloud::contentwarehouse::v1::ListSynonymSetsRequest const&
          request) override;

 private:
  std::unique_ptr<
      google::cloud::contentwarehouse::v1::SynonymSetService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_INTERNAL_SYNONYM_SET_STUB_H
