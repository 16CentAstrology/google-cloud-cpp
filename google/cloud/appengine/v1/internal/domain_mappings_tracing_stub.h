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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_DOMAIN_MAPPINGS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_DOMAIN_MAPPINGS_TRACING_STUB_H

#include "google/cloud/appengine/v1/internal/domain_mappings_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace appengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DomainMappingsTracingStub : public DomainMappingsStub {
 public:
  ~DomainMappingsTracingStub() override = default;

  explicit DomainMappingsTracingStub(std::shared_ptr<DomainMappingsStub> child);

  StatusOr<google::appengine::v1::ListDomainMappingsResponse>
  ListDomainMappings(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::ListDomainMappingsRequest const& request) override;

  StatusOr<google::appengine::v1::DomainMapping> GetDomainMapping(
      grpc::ClientContext& context, Options const& options,
      google::appengine::v1::GetDomainMappingRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateDomainMapping(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::appengine::v1::CreateDomainMappingRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDomainMapping(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::appengine::v1::UpdateDomainMappingRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDomainMapping(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::appengine::v1::DeleteDomainMappingRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<DomainMappingsStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<DomainMappingsStub> MakeDomainMappingsTracingStub(
    std::shared_ptr<DomainMappingsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_APPENGINE_V1_INTERNAL_DOMAIN_MAPPINGS_TRACING_STUB_H
