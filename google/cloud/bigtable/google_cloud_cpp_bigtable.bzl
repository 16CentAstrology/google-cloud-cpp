# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# DO NOT EDIT -- GENERATED BY CMake -- Change the CMakeLists.txt file if needed

"""Automatically generated source lists for google_cloud_cpp_bigtable - DO NOT EDIT."""

google_cloud_cpp_bigtable_hdrs = [
    "admin/bigtable_instance_admin_client.h",
    "admin/bigtable_instance_admin_connection.h",
    "admin/bigtable_instance_admin_connection_idempotency_policy.h",
    "admin/bigtable_instance_admin_options.h",
    "admin/bigtable_table_admin_client.h",
    "admin/bigtable_table_admin_connection.h",
    "admin/bigtable_table_admin_connection_idempotency_policy.h",
    "admin/bigtable_table_admin_options.h",
    "admin/internal/bigtable_instance_admin_auth_decorator.h",
    "admin/internal/bigtable_instance_admin_connection_impl.h",
    "admin/internal/bigtable_instance_admin_logging_decorator.h",
    "admin/internal/bigtable_instance_admin_metadata_decorator.h",
    "admin/internal/bigtable_instance_admin_option_defaults.h",
    "admin/internal/bigtable_instance_admin_retry_traits.h",
    "admin/internal/bigtable_instance_admin_stub.h",
    "admin/internal/bigtable_instance_admin_stub_factory.h",
    "admin/internal/bigtable_table_admin_auth_decorator.h",
    "admin/internal/bigtable_table_admin_connection_impl.h",
    "admin/internal/bigtable_table_admin_logging_decorator.h",
    "admin/internal/bigtable_table_admin_metadata_decorator.h",
    "admin/internal/bigtable_table_admin_option_defaults.h",
    "admin/internal/bigtable_table_admin_retry_traits.h",
    "admin/internal/bigtable_table_admin_stub.h",
    "admin/internal/bigtable_table_admin_stub_factory.h",
    "admin_client.h",
    "app_profile_config.h",
    "async_row_reader.h",
    "cell.h",
    "client_options.h",
    "cluster_config.h",
    "cluster_list_responses.h",
    "column_family.h",
    "completion_queue.h",
    "data_client.h",
    "expr.h",
    "filters.h",
    "iam_binding.h",
    "iam_policy.h",
    "idempotent_mutation_policy.h",
    "instance_admin.h",
    "instance_admin_client.h",
    "instance_config.h",
    "instance_list_responses.h",
    "instance_update_config.h",
    "internal/admin_client_params.h",
    "internal/async_bulk_apply.h",
    "internal/async_retry_op.h",
    "internal/async_row_reader.h",
    "internal/async_row_sampler.h",
    "internal/async_streaming_read.h",
    "internal/bigtable_auth_decorator.h",
    "internal/bigtable_channel_refresh.h",
    "internal/bigtable_logging_decorator.h",
    "internal/bigtable_metadata_decorator.h",
    "internal/bigtable_round_robin.h",
    "internal/bigtable_stub.h",
    "internal/bigtable_stub_factory.h",
    "internal/bulk_mutator.h",
    "internal/client_options_defaults.h",
    "internal/common_client.h",
    "internal/connection_refresh_state.h",
    "internal/convert_policies.h",
    "internal/data_connection.h",
    "internal/data_connection_impl.h",
    "internal/default_row_reader.h",
    "internal/defaults.h",
    "internal/google_bytes_traits.h",
    "internal/legacy_async_bulk_apply.h",
    "internal/legacy_async_row_sampler.h",
    "internal/legacy_row_reader.h",
    "internal/logging_data_client.h",
    "internal/prefix_range_end.h",
    "internal/readrowsparser.h",
    "internal/row_reader_impl.h",
    "internal/rpc_policy_parameters.h",
    "internal/rpc_policy_parameters.inc",
    "internal/unary_client_utils.h",
    "internal/wait_for_consistency.h",
    "metadata_update_policy.h",
    "mutation_batcher.h",
    "mutation_branch.h",
    "mutations.h",
    "options.h",
    "polling_policy.h",
    "read_modify_write_rule.h",
    "resource_names.h",
    "row.h",
    "row_key.h",
    "row_key_sample.h",
    "row_range.h",
    "row_reader.h",
    "row_set.h",
    "rpc_backoff_policy.h",
    "rpc_retry_policy.h",
    "table.h",
    "table_admin.h",
    "table_config.h",
    "version.h",
    "version_info.h",
]

google_cloud_cpp_bigtable_srcs = [
    "admin/bigtable_instance_admin_client.cc",
    "admin/bigtable_instance_admin_connection.cc",
    "admin/bigtable_instance_admin_connection_idempotency_policy.cc",
    "admin/bigtable_table_admin_client.cc",
    "admin/bigtable_table_admin_connection.cc",
    "admin/bigtable_table_admin_connection_idempotency_policy.cc",
    "admin/internal/bigtable_instance_admin_auth_decorator.cc",
    "admin/internal/bigtable_instance_admin_connection_impl.cc",
    "admin/internal/bigtable_instance_admin_logging_decorator.cc",
    "admin/internal/bigtable_instance_admin_metadata_decorator.cc",
    "admin/internal/bigtable_instance_admin_option_defaults.cc",
    "admin/internal/bigtable_instance_admin_stub.cc",
    "admin/internal/bigtable_instance_admin_stub_factory.cc",
    "admin/internal/bigtable_table_admin_auth_decorator.cc",
    "admin/internal/bigtable_table_admin_connection_impl.cc",
    "admin/internal/bigtable_table_admin_logging_decorator.cc",
    "admin/internal/bigtable_table_admin_metadata_decorator.cc",
    "admin/internal/bigtable_table_admin_option_defaults.cc",
    "admin/internal/bigtable_table_admin_stub.cc",
    "admin/internal/bigtable_table_admin_stub_factory.cc",
    "admin_client.cc",
    "app_profile_config.cc",
    "client_options.cc",
    "cluster_config.cc",
    "data_client.cc",
    "expr.cc",
    "iam_binding.cc",
    "iam_policy.cc",
    "idempotent_mutation_policy.cc",
    "instance_admin.cc",
    "instance_admin_client.cc",
    "instance_config.cc",
    "instance_update_config.cc",
    "internal/admin_client_params.cc",
    "internal/async_bulk_apply.cc",
    "internal/async_row_sampler.cc",
    "internal/bigtable_auth_decorator.cc",
    "internal/bigtable_channel_refresh.cc",
    "internal/bigtable_logging_decorator.cc",
    "internal/bigtable_metadata_decorator.cc",
    "internal/bigtable_round_robin.cc",
    "internal/bigtable_stub.cc",
    "internal/bigtable_stub_factory.cc",
    "internal/bulk_mutator.cc",
    "internal/connection_refresh_state.cc",
    "internal/convert_policies.cc",
    "internal/data_connection.cc",
    "internal/data_connection_impl.cc",
    "internal/default_row_reader.cc",
    "internal/defaults.cc",
    "internal/google_bytes_traits.cc",
    "internal/legacy_async_bulk_apply.cc",
    "internal/legacy_async_row_sampler.cc",
    "internal/legacy_row_reader.cc",
    "internal/logging_data_client.cc",
    "internal/prefix_range_end.cc",
    "internal/readrowsparser.cc",
    "internal/wait_for_consistency.cc",
    "metadata_update_policy.cc",
    "mutation_batcher.cc",
    "mutations.cc",
    "polling_policy.cc",
    "resource_names.cc",
    "row_range.cc",
    "row_reader.cc",
    "row_set.cc",
    "rpc_backoff_policy.cc",
    "rpc_retry_policy.cc",
    "table.cc",
    "table_admin.cc",
    "table_config.cc",
    "version.cc",
]
