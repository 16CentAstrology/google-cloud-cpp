// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/integration_tests/golden/v1/internal/golden_thing_admin_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/testing_util/scoped_log.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::cloud::testing_util::IsOk;
using ::google::test::admin::database::v1::GetBackupRequest;
using ::testing::HasSubstr;
using ::testing::IsEmpty;
using ::testing::IsNull;

class GoldenStubFactoryTest : public ::testing::Test {
 protected:
  static Status TransientError() {
    return Status(StatusCode::kUnavailable, "try-again");
  }

  testing_util::ScopedLog log_;
};

TEST_F(GoldenStubFactoryTest, DefaultStubWithoutLogging) {
  auto default_stub = CreateDefaultGoldenThingAdminStub(CompletionQueue{}, {});
  auto const log_lines = log_.ExtractLines();
  EXPECT_THAT(log_lines, IsEmpty());
}

TEST_F(GoldenStubFactoryTest, DefaultStubWithLogging) {
  Options options;
  options.set<TracingComponentsOption>({"rpc"});
  auto default_stub =
      CreateDefaultGoldenThingAdminStub(CompletionQueue{}, options);
  auto const log_lines = log_.ExtractLines();
  EXPECT_THAT(log_lines, Contains(HasSubstr("Enabled logging for gRPC calls")));
}

TEST_F(GoldenStubFactoryTest, DefaultStubWithAuth) {
  Options options;
  options.set<EndpointOption>("localhost:1")
      .set<UnifiedCredentialsOption>(MakeAccessTokenCredentials(
          "invalid-access-token",
          std::chrono::system_clock::now() + std::chrono::minutes(15)));
  auto default_stub =
      CreateDefaultGoldenThingAdminStub(CompletionQueue{}, options);
  grpc::ClientContext context;
  auto response = default_stub->GetBackup(context, GetBackupRequest{});
  EXPECT_THAT(response, Not(IsOk()));
  EXPECT_THAT(context.credentials(), Not(IsNull()));
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
