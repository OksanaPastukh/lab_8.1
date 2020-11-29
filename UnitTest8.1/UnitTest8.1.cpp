#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1/project8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			char str[9] = "12.4.6.8";
			c = find_index(str);
			Assert::AreEqual(c, 6);
		}
	};
}
