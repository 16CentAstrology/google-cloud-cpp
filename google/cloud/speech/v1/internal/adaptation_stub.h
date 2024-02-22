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
// source: google/cloud/speech/v1/cloud_speech_adaptation.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_ADAPTATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_ADAPTATION_STUB_H

#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/speech/v1/cloud_speech_adaptation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AdaptationStub {
 public:
  virtual ~AdaptationStub() = 0;

  virtual StatusOr<google::cloud::speech::v1::PhraseSet> CreatePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::CreatePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::PhraseSet> GetPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::GetPhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::ListPhraseSetResponse>
  ListPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::ListPhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::PhraseSet> UpdatePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::UpdatePhraseSetRequest const& request) = 0;

  virtual Status DeletePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::DeletePhraseSetRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::CustomClass> CreateCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::CreateCustomClassRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::CustomClass> GetCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::GetCustomClassRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::ListCustomClassesResponse>
  ListCustomClasses(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::ListCustomClassesRequest const& request) = 0;

  virtual StatusOr<google::cloud::speech::v1::CustomClass> UpdateCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::UpdateCustomClassRequest const& request) = 0;

  virtual Status DeleteCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::DeleteCustomClassRequest const& request) = 0;
};

class DefaultAdaptationStub : public AdaptationStub {
 public:
  explicit DefaultAdaptationStub(
      std::unique_ptr<google::cloud::speech::v1::Adaptation::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::speech::v1::PhraseSet> CreatePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::CreatePhraseSetRequest const& request)
      override;

  StatusOr<google::cloud::speech::v1::PhraseSet> GetPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::GetPhraseSetRequest const& request) override;

  StatusOr<google::cloud::speech::v1::ListPhraseSetResponse> ListPhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::ListPhraseSetRequest const& request) override;

  StatusOr<google::cloud::speech::v1::PhraseSet> UpdatePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::UpdatePhraseSetRequest const& request)
      override;

  Status DeletePhraseSet(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::DeletePhraseSetRequest const& request)
      override;

  StatusOr<google::cloud::speech::v1::CustomClass> CreateCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::CreateCustomClassRequest const& request)
      override;

  StatusOr<google::cloud::speech::v1::CustomClass> GetCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::GetCustomClassRequest const& request) override;

  StatusOr<google::cloud::speech::v1::ListCustomClassesResponse>
  ListCustomClasses(grpc::ClientContext& context, Options const& options,
                    google::cloud::speech::v1::ListCustomClassesRequest const&
                        request) override;

  StatusOr<google::cloud::speech::v1::CustomClass> UpdateCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::UpdateCustomClassRequest const& request)
      override;

  Status DeleteCustomClass(
      grpc::ClientContext& context, Options const& options,
      google::cloud::speech::v1::DeleteCustomClassRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::speech::v1::Adaptation::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_ADAPTATION_STUB_H
