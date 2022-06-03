#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_6.7/Array.h"
#include "../oop_laba_6.7/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestoop67
{
	TEST_CLASS(UnitTestoop67)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array b;
			int a = b.size();
			Assert::AreEqual(a, 10);
		}
	};
}
