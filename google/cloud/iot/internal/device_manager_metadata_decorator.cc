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
// source: google/cloud/iot/v1/device_manager.proto

#include "google/cloud/iot/internal/device_manager_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/iot/v1/device_manager.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iot_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DeviceManagerMetadata::DeviceManagerMetadata(
    std::shared_ptr<DeviceManagerStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerMetadata::CreateDeviceRegistry(
    grpc::ClientContext& context,
    google::cloud::iot::v1::CreateDeviceRegistryRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateDeviceRegistry(context, request);
}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerMetadata::GetDeviceRegistry(
    grpc::ClientContext& context,
    google::cloud::iot::v1::GetDeviceRegistryRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDeviceRegistry(context, request);
}

StatusOr<google::cloud::iot::v1::DeviceRegistry>
DeviceManagerMetadata::UpdateDeviceRegistry(
    grpc::ClientContext& context,
    google::cloud::iot::v1::UpdateDeviceRegistryRequest const& request) {
  SetMetadata(context,
              "device_registry.name=" + request.device_registry().name());
  return child_->UpdateDeviceRegistry(context, request);
}

Status DeviceManagerMetadata::DeleteDeviceRegistry(
    grpc::ClientContext& context,
    google::cloud::iot::v1::DeleteDeviceRegistryRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteDeviceRegistry(context, request);
}

StatusOr<google::cloud::iot::v1::ListDeviceRegistriesResponse>
DeviceManagerMetadata::ListDeviceRegistries(
    grpc::ClientContext& context,
    google::cloud::iot::v1::ListDeviceRegistriesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDeviceRegistries(context, request);
}

StatusOr<google::cloud::iot::v1::Device> DeviceManagerMetadata::CreateDevice(
    grpc::ClientContext& context,
    google::cloud::iot::v1::CreateDeviceRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateDevice(context, request);
}

StatusOr<google::cloud::iot::v1::Device> DeviceManagerMetadata::GetDevice(
    grpc::ClientContext& context,
    google::cloud::iot::v1::GetDeviceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetDevice(context, request);
}

StatusOr<google::cloud::iot::v1::Device> DeviceManagerMetadata::UpdateDevice(
    grpc::ClientContext& context,
    google::cloud::iot::v1::UpdateDeviceRequest const& request) {
  SetMetadata(context, "device.name=" + request.device().name());
  return child_->UpdateDevice(context, request);
}

Status DeviceManagerMetadata::DeleteDevice(
    grpc::ClientContext& context,
    google::cloud::iot::v1::DeleteDeviceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteDevice(context, request);
}

StatusOr<google::cloud::iot::v1::ListDevicesResponse>
DeviceManagerMetadata::ListDevices(
    grpc::ClientContext& context,
    google::cloud::iot::v1::ListDevicesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListDevices(context, request);
}

StatusOr<google::cloud::iot::v1::DeviceConfig>
DeviceManagerMetadata::ModifyCloudToDeviceConfig(
    grpc::ClientContext& context,
    google::cloud::iot::v1::ModifyCloudToDeviceConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ModifyCloudToDeviceConfig(context, request);
}

StatusOr<google::cloud::iot::v1::ListDeviceConfigVersionsResponse>
DeviceManagerMetadata::ListDeviceConfigVersions(
    grpc::ClientContext& context,
    google::cloud::iot::v1::ListDeviceConfigVersionsRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListDeviceConfigVersions(context, request);
}

StatusOr<google::cloud::iot::v1::ListDeviceStatesResponse>
DeviceManagerMetadata::ListDeviceStates(
    grpc::ClientContext& context,
    google::cloud::iot::v1::ListDeviceStatesRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ListDeviceStates(context, request);
}

StatusOr<google::iam::v1::Policy> DeviceManagerMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DeviceManagerMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DeviceManagerMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::iot::v1::SendCommandToDeviceResponse>
DeviceManagerMetadata::SendCommandToDevice(
    grpc::ClientContext& context,
    google::cloud::iot::v1::SendCommandToDeviceRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->SendCommandToDevice(context, request);
}

StatusOr<google::cloud::iot::v1::BindDeviceToGatewayResponse>
DeviceManagerMetadata::BindDeviceToGateway(
    grpc::ClientContext& context,
    google::cloud::iot::v1::BindDeviceToGatewayRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->BindDeviceToGateway(context, request);
}

StatusOr<google::cloud::iot::v1::UnbindDeviceFromGatewayResponse>
DeviceManagerMetadata::UnbindDeviceFromGateway(
    grpc::ClientContext& context,
    google::cloud::iot::v1::UnbindDeviceFromGatewayRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->UnbindDeviceFromGateway(context, request);
}

void DeviceManagerMetadata::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DeviceManagerMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iot_internal
}  // namespace cloud
}  // namespace google
