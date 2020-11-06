#include "gtest/gtest.h"
#include "..\src\funcCalc.cpp"

TEST(DefaultTestStep, StepTwo)
{
	EXPECT_EQ(4, Step(2, 2));
	EXPECT_EQ(9, Step(3, 2));
}

TEST(DefaultTestPlus, PlusTest)
{
	EXPECT_EQ(7, Plus(2, 5));
	EXPECT_EQ(10, Plus(7, 3);
	EXPECT_EQ(1, Plus(-4, 5));
	EXPECT_EQ(3, Plus(7, -4));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
