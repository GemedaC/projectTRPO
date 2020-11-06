#include "pch.h"
#include "CppUnitTest.h"
#include "../src/funcCalc.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCalc
{
	TEST_CLASS(UnitTestCalc)
	{
	public:
		
		TEST_METHOD(DefaultTestPlus)
		{
			float sum = Plus(2, 2);
			Assert::IsTrue(sum == 4);
		}
		TEST_METHOD(DefaultTestMinus)
		{
			float sum = Minus(3, 2);
			Assert::IsTrue(sum == 1);
		}
		TEST_METHOD(DefaultTestMDel)
		{
			float sum = Del(3, 3);
			Assert::IsTrue(sum == 1);
		}
		TEST_METHOD(DefaultTestMUmn)
		{
			float sum = Umn(2, 6);
			Assert::IsTrue(sum == 12);
		}
		TEST_METHOD(DefaultTestMStep)
		{
			float sum = Step(3, 2);
			Assert::IsTrue(sum == 9);
		}
	};
}
