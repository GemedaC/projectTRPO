#include "gtest/gtest.h"
#include "funcCalc.cpp"

TEST(DefaultTestStep, StepTwo)
{
	EXPECT_EQ(4, Step(2, 2));
	EXPECT_EQ(9, Step(3, 2));
}

TEST(DefaultTestPlus, PlusTest)
{
	EXPECT_EQ(7, Plus(2, 5));
	EXPECT_EQ(10, Plus(7, 3));
	EXPECT_EQ(1, Plus(-4, 5));
	EXPECT_EQ(3, Plus(7, -4));
}

TEST(DefaultTestMinus, MinusTest)
{
	EXPECT_EQ(4, Minus(9, 5));
	EXPECT_EQ(4, Minus(2, -2));
}

TEST(DefaultTestDel , DelTest)
{
	EXPECT_EQ(3, Del(9, 3));
	EXPECT_EQ(-1, Del(4, -4));
}

TEST(DefaultTestUmn, UmnTest)
{
	EXPECT_EQ(9, Umn(3, 3));
	EXPECT_EQ(-8, Umn(2, -4));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
