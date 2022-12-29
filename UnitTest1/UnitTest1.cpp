#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 21;
			int c[k] = { 82, 68, 21, 74, 75, 67, 60, 78, 36, 27, 61, 49, 21, 77, 71, 19, -76, 53, 42, 35, 38 };
			Assert::AreEqual(896, Sum(c, k));

		}
	};
}
