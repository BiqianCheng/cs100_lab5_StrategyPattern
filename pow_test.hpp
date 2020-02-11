#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"
#include "op.hpp"

TEST(powTest, powEvaluateNonZero) {
    Op* value1 = new Op(2);
    Op* value2 = new Op(3);
    POW* test = new POW(value1, value2);
    EXPECT_EQ(test->evaluate(), 8);
}

#endif
