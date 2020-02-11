#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "div.hpp"

TEST(DIVTest, DIVEvaluateNonZero) {
    Op* value1 = new Op(20);
    Op* value2 = new Op(4);
    DIV* test = new DIV(value1, value2);
    EXPECT_EQ(test->evaluate(), 5);
}

#endif 
