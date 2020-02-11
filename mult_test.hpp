#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

TEST(multTest, multEvaluateNonZero) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(12);
    Mult* test = new Mult(value1, value2);
    EXPECT_EQ(test->evaluate(), 96);
}

#endif //__MULT_TEST_HPP__
