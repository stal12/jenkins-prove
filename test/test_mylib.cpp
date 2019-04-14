#include <iostream>
#include <stdexcept>

#include <gtest/gtest.h>

#include "mylib.h"


TEST(SumTest, Zero) {
	EXPECT_EQ(0, Sum(3, -3));
}