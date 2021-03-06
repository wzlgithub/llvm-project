//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <functional>

// binary_negate
//  deprecated in C++17

// UNSUPPORTED: clang-4.0
// UNSUPPORTED: c++98, c++03, c++11, c++14
// REQUIRES: verify-support

// MODULES_DEFINES: _LIBCPP_ENABLE_DEPRECATION_WARNINGS
#define _LIBCPP_ENABLE_DEPRECATION_WARNINGS

#include <functional>

#include "test_macros.h"

struct Predicate {
    typedef int first_argument_type;
    typedef int second_argument_type;
    bool operator()(first_argument_type, second_argument_type) const { return true; }
};

int main() {
    std::binary_negate<Predicate> f((Predicate())); // expected-error{{'binary_negate<Predicate>' is deprecated}}
    (void)f;
}
