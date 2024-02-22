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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_link_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/document_link_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentLinkServiceStub::~DocumentLinkServiceStub() = default;

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse>
DefaultDocumentLinkServiceStub::ListLinkedTargets(
    grpc::ClientContext& context, Options const&,
    google::cloud::contentwarehouse::v1::ListLinkedTargetsRequest const&
        request) {
  google::cloud::contentwarehouse::v1::ListLinkedTargetsResponse response;
  auto status = grpc_stub_->ListLinkedTargets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse>
DefaultDocumentLinkServiceStub::ListLinkedSources(
    grpc::ClientContext& context, Options const&,
    google::cloud::contentwarehouse::v1::ListLinkedSourcesRequest const&
        request) {
  google::cloud::contentwarehouse::v1::ListLinkedSourcesResponse response;
  auto status = grpc_stub_->ListLinkedSources(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::contentwarehouse::v1::DocumentLink>
DefaultDocumentLinkServiceStub::CreateDocumentLink(
    grpc::ClientContext& context, Options const&,
    google::cloud::contentwarehouse::v1::CreateDocumentLinkRequest const&
        request) {
  google::cloud::contentwarehouse::v1::DocumentLink response;
  auto status = grpc_stub_->CreateDocumentLink(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultDocumentLinkServiceStub::DeleteDocumentLink(
    grpc::ClientContext& context, Options const&,
    google::cloud::contentwarehouse::v1::DeleteDocumentLinkRequest const&
        request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteDocumentLink(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
