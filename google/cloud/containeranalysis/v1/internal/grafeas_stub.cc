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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/v1/internal/grafeas_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <grafeas/v1/grafeas.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace containeranalysis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GrafeasStub::~GrafeasStub() = default;

StatusOr<grafeas::v1::Occurrence> DefaultGrafeasStub::GetOccurrence(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::GetOccurrenceRequest const& request) {
  grafeas::v1::Occurrence response;
  auto status = grpc_stub_->GetOccurrence(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::ListOccurrencesResponse>
DefaultGrafeasStub::ListOccurrences(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::ListOccurrencesRequest const& request) {
  grafeas::v1::ListOccurrencesResponse response;
  auto status = grpc_stub_->ListOccurrences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultGrafeasStub::DeleteOccurrence(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::DeleteOccurrenceRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteOccurrence(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<grafeas::v1::Occurrence> DefaultGrafeasStub::CreateOccurrence(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::CreateOccurrenceRequest const& request) {
  grafeas::v1::Occurrence response;
  auto status = grpc_stub_->CreateOccurrence(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
DefaultGrafeasStub::BatchCreateOccurrences(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::BatchCreateOccurrencesRequest const& request) {
  grafeas::v1::BatchCreateOccurrencesResponse response;
  auto status =
      grpc_stub_->BatchCreateOccurrences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::Occurrence> DefaultGrafeasStub::UpdateOccurrence(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::UpdateOccurrenceRequest const& request) {
  grafeas::v1::Occurrence response;
  auto status = grpc_stub_->UpdateOccurrence(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::Note> DefaultGrafeasStub::GetOccurrenceNote(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::GetOccurrenceNoteRequest const& request) {
  grafeas::v1::Note response;
  auto status = grpc_stub_->GetOccurrenceNote(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::Note> DefaultGrafeasStub::GetNote(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::GetNoteRequest const& request) {
  grafeas::v1::Note response;
  auto status = grpc_stub_->GetNote(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::ListNotesResponse> DefaultGrafeasStub::ListNotes(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::ListNotesRequest const& request) {
  grafeas::v1::ListNotesResponse response;
  auto status = grpc_stub_->ListNotes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultGrafeasStub::DeleteNote(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::DeleteNoteRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteNote(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<grafeas::v1::Note> DefaultGrafeasStub::CreateNote(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::CreateNoteRequest const& request) {
  grafeas::v1::Note response;
  auto status = grpc_stub_->CreateNote(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::BatchCreateNotesResponse>
DefaultGrafeasStub::BatchCreateNotes(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::BatchCreateNotesRequest const& request) {
  grafeas::v1::BatchCreateNotesResponse response;
  auto status = grpc_stub_->BatchCreateNotes(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::Note> DefaultGrafeasStub::UpdateNote(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::UpdateNoteRequest const& request) {
  grafeas::v1::Note response;
  auto status = grpc_stub_->UpdateNote(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<grafeas::v1::ListNoteOccurrencesResponse>
DefaultGrafeasStub::ListNoteOccurrences(
    grpc::ClientContext& context, Options const&,
    grafeas::v1::ListNoteOccurrencesRequest const& request) {
  grafeas::v1::ListNoteOccurrencesResponse response;
  auto status = grpc_stub_->ListNoteOccurrences(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1_internal
}  // namespace cloud
}  // namespace google
