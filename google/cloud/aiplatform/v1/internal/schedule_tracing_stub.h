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
// source: google/cloud/aiplatform/v1/schedule_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SCHEDULE_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SCHEDULE_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/schedule_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ScheduleServiceTracingStub : public ScheduleServiceStub {
 public:
  ~ScheduleServiceTracingStub() override = default;

  explicit ScheduleServiceTracingStub(
      std::shared_ptr<ScheduleServiceStub> child);

  StatusOr<google::cloud::aiplatform::v1::Schedule> CreateSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateScheduleRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSchedule(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::DeleteScheduleRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Schedule> GetSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetScheduleRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListSchedulesResponse> ListSchedules(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListSchedulesRequest const& request)
      override;

  Status PauseSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::PauseScheduleRequest const& request)
      override;

  Status ResumeSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ResumeScheduleRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Schedule> UpdateSchedule(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateScheduleRequest const& request)
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
  std::shared_ptr<ScheduleServiceStub> child_;
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
std::shared_ptr<ScheduleServiceStub> MakeScheduleServiceTracingStub(
    std::shared_ptr<ScheduleServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SCHEDULE_TRACING_STUB_H
