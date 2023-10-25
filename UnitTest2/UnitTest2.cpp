#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(1., 2.);
			Assert::AreEqual(t, 1.5474);
		}
	};
}

