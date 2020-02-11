#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(addTest, addEvaluateNonZero) {
    Op* value1 = new Op(8);
    Op* value2 = new Op(12);
    ADD* test = new ADD(value1, value2);
    EXPECT_EQ(test->evaluate(), 20);
}

#endif 
