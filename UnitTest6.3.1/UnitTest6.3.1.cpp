#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab6.3.1\Lab6.3.1\Lab6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:
		 
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { 1, 2, 3 };
			int min = Min(a, 3, 1, a[0]);
			Assert::AreEqual(min, 1);
		}
	};
}
