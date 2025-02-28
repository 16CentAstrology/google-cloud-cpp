// Copyright 2021 Google LLC
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

#include "google/cloud/internal/async_read_write_stream_auth.h"
#include "google/cloud/completion_queue.h"
#include "google/cloud/testing_util/mock_grpc_authentication_strategy.h"
#include "google/cloud/testing_util/status_matchers.h"
#include "absl/memory/memory.h"
#include <gmock/gmock.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::google::cloud::testing_util::IsOk;
using ::google::cloud::testing_util::MockAuthenticationStrategy;
using ::testing::StrictMock;

struct FakeRequest {
  std::string key;
};

struct FakeResponse {
  std::string key;
  std::string value;
};

using BaseStream = AsyncStreamingReadWriteRpc<FakeRequest, FakeResponse>;
using AuthStream = AsyncStreamingReadWriteRpcAuth<FakeRequest, FakeResponse>;

class MockStream : public BaseStream {
 public:
  MOCK_METHOD(void, Cancel, (), (override));
  MOCK_METHOD(future<bool>, Start, (), (override));
  MOCK_METHOD(future<absl::optional<FakeResponse>>, Read, (), (override));
  MOCK_METHOD(future<bool>, Write, (FakeRequest const&, grpc::WriteOptions),
              (override));
  MOCK_METHOD(future<bool>, WritesDone, (), (override));
  MOCK_METHOD(future<Status>, Finish, (), (override));
};

TEST(AsyncStreamReadWriteAuth, Start) {
  auto factory = AuthStream::StreamFactory([](std::unique_ptr<
                                               grpc::ClientContext>) {
    auto mock = absl::make_unique<StrictMock<MockStream>>();
    EXPECT_CALL(*mock, Start).WillOnce([] { return make_ready_future(true); });
    EXPECT_CALL(*mock, Write)
        .WillOnce([](FakeRequest const&, grpc::WriteOptions) {
          return make_ready_future(true);
        });
    EXPECT_CALL(*mock, Read).WillOnce([] {
      return make_ready_future(absl::make_optional(FakeResponse{"k0", "v0"}));
    });
    EXPECT_CALL(*mock, WritesDone).WillOnce([] {
      return make_ready_future(true);
    });
    EXPECT_CALL(*mock, Finish).WillOnce([] {
      return make_ready_future(Status{});
    });
    return std::unique_ptr<BaseStream>(std::move(mock));
  });
  auto strategy = std::make_shared<StrictMock<MockAuthenticationStrategy>>();
  EXPECT_CALL(*strategy, AsyncConfigureContext)
      .WillOnce([](std::unique_ptr<grpc::ClientContext> context) {
        return make_ready_future(make_status_or(std::move(context)));
      });
  auto uut = absl::make_unique<AuthStream>(
      absl::make_unique<grpc::ClientContext>(), strategy, factory);
  EXPECT_TRUE(uut->Start().get());
  EXPECT_TRUE(uut->Write(FakeRequest{"k"}, grpc::WriteOptions()).get());
  auto response = uut->Read().get();
  ASSERT_TRUE(response.has_value());
  EXPECT_EQ(response->key, "k0");
  EXPECT_EQ(response->value, "v0");
  EXPECT_TRUE(uut->WritesDone().get());
  EXPECT_THAT(uut->Finish().get(), IsOk());
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
