//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <random>

// template<class IntType = int>
// class geometric_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

int main()
{
    {
        typedef std::geometric_distribution<> D;
        typedef D::param_type param_type;
        param_type p0(.7);
        param_type p;
        p = p0;
        assert(p.p() == .7);
    }
}
