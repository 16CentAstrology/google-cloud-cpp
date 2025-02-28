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
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_MOCKS_MOCK_REGION_SECURITY_POLICIES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_MOCKS_MOCK_REGION_SECURITY_POLICIES_CONNECTION_H

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RegionSecurityPoliciesConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RegionSecurityPoliciesClient`. To
 * do so, construct an object of type `RegionSecurityPoliciesClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRegionSecurityPoliciesConnection
    : public compute_region_security_policies_v1::
          RegionSecurityPoliciesConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddRule(Matcher<google::cloud::cpp::compute::region_security_policies::v1::AddRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddRule,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   AddRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, AddRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, AddRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   AddRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// AddRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              AddRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSecurityPolicy(Matcher<google::cloud::cpp::compute::region_security_policies::v1::DeleteSecurityPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSecurityPolicy,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   DeleteSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteSecurityPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              DeleteSecurityPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   DeleteSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteSecurityPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              DeleteSecurityPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>,
              GetSecurityPolicy,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   GetSecurityPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>,
              GetRule,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   GetRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertSecurityPolicy(Matcher<google::cloud::cpp::compute::region_security_policies::v1::InsertSecurityPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSecurityPolicy,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   InsertSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, InsertSecurityPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              InsertSecurityPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   InsertSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// InsertSecurityPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              InsertSecurityPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>),
              ListRegionSecurityPolicies,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   ListRegionSecurityPoliciesRequest request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchSecurityPolicy(Matcher<google::cloud::cpp::compute::region_security_policies::v1::PatchSecurityPolicyRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchSecurityPolicy,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   PatchSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchSecurityPolicy(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>,
              PatchSecurityPolicy,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   PatchSecurityPolicyRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchSecurityPolicy(Matcher<google::cloud::cpp::compute::v1::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchSecurityPolicy,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchRule(Matcher<google::cloud::cpp::compute::region_security_policies::v1::PatchRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRule,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   PatchRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, PatchRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, PatchRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   PatchRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// PatchRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              PatchRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveRule(Matcher<google::cloud::cpp::compute::region_security_policies::v1::RemoveRuleRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveRule,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   RemoveRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, RemoveRule(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, RemoveRule,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   RemoveRuleRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// RemoveRule(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              RemoveRule,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetLabels(Matcher<google::cloud::cpp::compute::region_security_policies::v1::SetLabelsRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::region_security_policies::v1::
                   SetLabelsRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, SetLabels(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::cloud::cpp::compute::v1::Operation>, SetLabels,
              (NoAwaitTag,
               google::cloud::cpp::compute::region_security_policies::v1::
                   SetLabelsRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// SetLabels(Matcher<google::cloud::cpp::compute::v1::Operation const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::cpp::compute::v1::Operation>>,
              SetLabels,
              (google::cloud::cpp::compute::v1::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_MOCKS_MOCK_REGION_SECURITY_POLICIES_CONNECTION_H
