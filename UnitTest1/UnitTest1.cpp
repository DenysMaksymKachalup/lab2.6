#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.6/Time.h"
#include "../lab2.6/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 4);
			++a;
			int q = a.getF();
			Assert::AreEqual(q, 2);
		}
	};
}
