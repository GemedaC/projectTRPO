#include "../googletest/googletest/include/gtest/gtest.h"
#include "..\src\funcCalc.h"

TEST(DefaultTestStep, StepTwo)
{
	EXPECT_EQ (4, Step(2,2))
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

