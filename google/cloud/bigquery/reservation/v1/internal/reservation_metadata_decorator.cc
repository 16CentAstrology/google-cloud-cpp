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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/reservation/v1/internal/reservation_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/reservation/v1/reservation.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquery_reservation_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationServiceMetadata::ReservationServiceMetadata(
    std::shared_ptr<ReservationServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceMetadata::CreateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
ReservationServiceMetadata::ListReservations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListReservations(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceMetadata::GetReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetReservation(context, options, request);
}

Status ReservationServiceMetadata::DeleteReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceMetadata::UpdateReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("reservation.name=",
                           internal::UrlEncode(request.reservation().name())));
  return child_->UpdateReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceMetadata::CreateCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateCapacityCommitment(context, options, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
ReservationServiceMetadata::ListCapacityCommitments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListCapacityCommitments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceMetadata::GetCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetCapacityCommitment(context, options, request);
}

Status ReservationServiceMetadata::DeleteCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteCapacityCommitment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceMetadata::UpdateCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("capacity_commitment.name=",
                   internal::UrlEncode(request.capacity_commitment().name())));
  return child_->UpdateCapacityCommitment(context, options, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
ReservationServiceMetadata::SplitCapacityCommitment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->SplitCapacityCommitment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceMetadata::MergeCapacityCommitments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->MergeCapacityCommitments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceMetadata::CreateAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
ReservationServiceMetadata::ListAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListAssignments(context, options, request);
}

Status ReservationServiceMetadata::DeleteAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
ReservationServiceMetadata::SearchAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchAssignments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
ReservationServiceMetadata::SearchAllAssignments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchAllAssignments(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceMetadata::MoveAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->MoveAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceMetadata::UpdateAssignment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("assignment.name=",
                           internal::UrlEncode(request.assignment().name())));
  return child_->UpdateAssignment(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceMetadata::GetBiReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBiReservation(context, options, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceMetadata::UpdateBiReservation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  SetMetadata(
      context, options,
      absl::StrCat("bi_reservation.name=",
                   internal::UrlEncode(request.bi_reservation().name())));
  return child_->UpdateBiReservation(context, options, request);
}

void ReservationServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void ReservationServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                             Options const& options) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_reservation_v1_internal
}  // namespace cloud
}  // namespace google
