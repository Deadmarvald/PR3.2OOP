#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.2/Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT32
{
	TEST_CLASS(UT32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man t, m;
			t.SetAge(1);
	
			ChangeAge(t);
			m.SetAge(2);

			Assert::AreEqual(t.GetAge(), m.GetAge());
		}
	};
}