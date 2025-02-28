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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#include "google/cloud/vpcaccess/v1/vpc_access_client.h"
#include "google/cloud/vpcaccess/v1/vpc_access_connection_idempotency_policy.h"
#include "google/cloud/vpcaccess/v1/vpc_access_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/testing_util/example_driver.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// clang-format off
// main-dox-marker: vpcaccess_v1::VpcAccessServiceClient
// lro-marker: true
// clang-format on
namespace {

void SetClientEndpoint(std::vector<std::string> const& argv) {
  if (!argv.empty()) {
    throw google::cloud::testing_util::Usage{"set-client-endpoint"};
  }
  //! [set-client-endpoint]
  // This configuration is common with Private Google Access:
  //     https://cloud.google.com/vpc/docs/private-google-access
  auto options = google::cloud::Options{}.set<google::cloud::EndpointOption>(
      "private.googleapis.com");
  auto client = google::cloud::vpcaccess_v1::VpcAccessServiceClient(
      google::cloud::vpcaccess_v1::MakeVpcAccessServiceConnection(options));
  //! [set-client-endpoint]
}

//! [custom-idempotency-policy]
class CustomIdempotencyPolicy
    : public google::cloud::vpcaccess_v1::
          VpcAccessServiceConnectionIdempotencyPolicy {
 public:
  ~CustomIdempotencyPolicy() override = default;
  std::unique_ptr<
      google::cloud::vpcaccess_v1::VpcAccessServiceConnectionIdempotencyPolicy>
  clone() const override {
    return std::make_unique<CustomIdempotencyPolicy>(*this);
  }
  // Override inherited functions to define as needed.
};
//! [custom-idempotency-policy]

void SetRetryPolicy(std::vector<std::string> const& argv) {
  if (!argv.empty()) {
    throw google::cloud::testing_util::Usage{"set-client-retry-policy"};
  }
  //! [set-retry-policy]
  auto options =
      google::cloud::Options{}
          .set<google::cloud::vpcaccess_v1::
                   VpcAccessServiceConnectionIdempotencyPolicyOption>(
              CustomIdempotencyPolicy().clone())
          .set<google::cloud::vpcaccess_v1::VpcAccessServiceRetryPolicyOption>(
              google::cloud::vpcaccess_v1::
                  VpcAccessServiceLimitedErrorCountRetryPolicy(3)
                      .clone())
          .set<
              google::cloud::vpcaccess_v1::VpcAccessServiceBackoffPolicyOption>(
              google::cloud::ExponentialBackoffPolicy(
                  /*initial_delay=*/std::chrono::milliseconds(200),
                  /*maximum_delay=*/std::chrono::seconds(45),
                  /*scaling=*/2.0)
                  .clone());
  auto connection =
      google::cloud::vpcaccess_v1::MakeVpcAccessServiceConnection(options);

  // c1 and c2 share the same retry policies
  auto c1 = google::cloud::vpcaccess_v1::VpcAccessServiceClient(connection);
  auto c2 = google::cloud::vpcaccess_v1::VpcAccessServiceClient(connection);

  // You can override any of the policies in a new client. This new client
  // will share the policies from c1 (or c2) *except* for the retry policy.
  auto c3 = google::cloud::vpcaccess_v1::VpcAccessServiceClient(
      connection,
      google::cloud::Options{}
          .set<google::cloud::vpcaccess_v1::VpcAccessServiceRetryPolicyOption>(
              google::cloud::vpcaccess_v1::
                  VpcAccessServiceLimitedTimeRetryPolicy(
                      std::chrono::minutes(5))
                      .clone()));

  // You can also override the policies in a single call:
  // c3.SomeRpc(..., google::cloud::Options{}
  //     .set<google::cloud::vpcaccess_v1::VpcAccessServiceRetryPolicyOption>(
  //       google::cloud::vpcaccess_v1::VpcAccessServiceLimitedErrorCountRetryPolicy(10).clone()));
  //! [set-retry-policy]
}

void SetPollingPolicy(std::vector<std::string> const& argv) {
  if (!argv.empty()) {
    throw google::cloud::testing_util::Usage{"set-client-policy-policy"};
  }
  //! [set-polling-policy]

  // The polling policy controls how the client waits for long-running
  // operations. `GenericPollingPolicy<>` combines existing policies.
  // In this case, keep polling until the operation completes (with success
  // or error) or 45 minutes, whichever happens first. Initially pause for
  // 10 seconds between polling requests, increasing the pause by a factor
  // of 4 until it becomes 2 minutes.
  auto options =
      google::cloud::Options{}
          .set<
              google::cloud::vpcaccess_v1::VpcAccessServicePollingPolicyOption>(
              google::cloud::GenericPollingPolicy<
                  google::cloud::vpcaccess_v1::
                      VpcAccessServiceRetryPolicyOption::Type,
                  google::cloud::vpcaccess_v1::
                      VpcAccessServiceBackoffPolicyOption::Type>(
                  google::cloud::vpcaccess_v1::
                      VpcAccessServiceLimitedTimeRetryPolicy(
                          /*maximum_duration=*/std::chrono::minutes(45))
                          .clone(),
                  google::cloud::ExponentialBackoffPolicy(
                      /*initial_delay=*/std::chrono::seconds(10),
                      /*maximum_delay=*/std::chrono::minutes(2),
                      /*scaling=*/4.0)
                      .clone())
                  .clone());

  auto connection =
      google::cloud::vpcaccess_v1::MakeVpcAccessServiceConnection(options);

  // c1 and c2 share the same polling policies.
  auto c1 = google::cloud::vpcaccess_v1::VpcAccessServiceClient(connection);
  auto c2 = google::cloud::vpcaccess_v1::VpcAccessServiceClient(connection);
  //! [set-polling-policy]
}

void WithServiceAccount(std::vector<std::string> const& argv) {
  if (argv.size() != 1 || argv[0] == "--help") {
    throw google::cloud::testing_util::Usage{"with-service-account <keyfile>"};
  }
  //! [with-service-account]
  [](std::string const& keyfile) {
    auto is = std::ifstream(keyfile);
    is.exceptions(std::ios::badbit);  // Minimal error handling in examples
    auto contents = std::string(std::istreambuf_iterator<char>(is.rdbuf()), {});
    auto options =
        google::cloud::Options{}.set<google::cloud::UnifiedCredentialsOption>(
            google::cloud::MakeServiceAccountCredentials(contents));
    return google::cloud::vpcaccess_v1::VpcAccessServiceClient(
        google::cloud::vpcaccess_v1::MakeVpcAccessServiceConnection(options));
  }
  //! [with-service-account]
  (argv.at(0));
}

void AutoRun(std::vector<std::string> const& argv) {
  namespace examples = ::google::cloud::testing_util;
  using ::google::cloud::internal::GetEnv;
  if (!argv.empty()) throw examples::Usage{"auto"};
  examples::CheckEnvironmentVariablesAreSet(
      {"GOOGLE_CLOUD_CPP_TEST_SERVICE_ACCOUNT_KEYFILE"});
  auto const keyfile =
      GetEnv("GOOGLE_CLOUD_CPP_TEST_SERVICE_ACCOUNT_KEYFILE").value();

  std::cout << "\nRunning SetClientEndpoint() example" << std::endl;
  SetClientEndpoint({});

  std::cout << "\nRunning SetRetryPolicy() example" << std::endl;
  SetRetryPolicy({});

  std::cout << "\nRunning SetPollingPolicy() example" << std::endl;
  SetPollingPolicy({});

  std::cout << "\nRunning WithServiceAccount() example" << std::endl;
  WithServiceAccount({keyfile});
}

}  // namespace

int main(int argc, char* argv[]) {  // NOLINT(bugprone-exception-escape)
  google::cloud::testing_util::Example example({
      {"set-client-endpoint", SetClientEndpoint},
      {"set-retry-policy", SetRetryPolicy},
      {"set-polling-policy", SetPollingPolicy},
      {"with-service-account", WithServiceAccount},
      {"auto", AutoRun},
  });
  return example.Run(argc, argv);
}
