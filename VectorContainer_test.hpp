#ifndef __VECTORCONTAINER_TEST_HPP__
#define __VECTORCONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "VectorContainer.hpp"
#include "op.hpp"


TEST(VectorContainerTestSet, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 1);
    EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

#endif