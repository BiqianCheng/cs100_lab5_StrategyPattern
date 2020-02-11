#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"

TEST(subTest, subEvaluateNonZero) {
    Op* value1 = new Op(12);
    Op* value2 = new Op(8);
    Sub* test = new Sub(value1, value2);
    EXPECT_EQ(test->evaluate(), 4);
}

#endif 
