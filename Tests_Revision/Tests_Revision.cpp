#include "pch.h"
#include "CppUnitTest.h"
#include "../SD3b_1_Revision/RecursionRevision.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsRevision
{
	TEST_CLASS(TestsRevision)
	{
	public:

		TEST_METHOD(getMax)
		{
			int pow = power(5);
			Assert::AreEqual(pow, 32);
		}
	};
}