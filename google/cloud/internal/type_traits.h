// Copyright 2022 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TYPE_TRAITS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TYPE_TRAITS_H

#include "google/cloud/version.h"
#include <iosfwd>
#include <type_traits>
#include <utility>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

/**
 * A helper to detect if expressions are valid and use SFINAE.
 *
 * This class will be introduced in C++17, it makes it easier to write SFINAE
 * expressions, basically you use `void_t< some expression here >` in the SFINAE
 * branch that is trying to test if `some expression here` is valid. If the
 * expression is valid it expands to `void` and your branch continues, if it is
 * invalid it fails and the default SFINAE branch is used.
 *
 * @see https://en.cppreference.com/w/cpp/types/void_t for more details about
 *   this class.
 */
template <typename...>
using void_t = void;

//@{
/**
 * A helper to detect if a type is output streamable.
 */
template <typename T, typename = void>
class IsOStreamable : public std::false_type {};

template <typename T>
class IsOStreamable<
    T, void_t<decltype(std::declval<std::ostream&>() << std::declval<T>())>>
    : public std::true_type {};
//@}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_TYPE_TRAITS_H
