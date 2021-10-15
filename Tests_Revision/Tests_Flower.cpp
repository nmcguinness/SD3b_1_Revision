#include "pch.h"
#include "CppUnitTest.h"
#include "../SD3b_1_Revision/Flower.h"
//#include "../SD3b_1_Revision/Flower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsRevision
{
	TEST_CLASS(Tests_Flower)
	{
	public:

		TEST_METHOD(testConstructor)
		{
			Flower f1("petunia", 4, 1.50);
			Flower* pF = &f1;

			Assert::IsNotNull(pF);
			Assert::AreEqual("petunia" == f1.getName(), true);
			Assert::AreEqual(4 == f1.getPetals(), true);
		}

		TEST_METHOD(testEqualityOperator)
		{
			Flower f1("petunia", 4, 1.50);
			Flower f2("petunia", 4, 1.50);

			bool areEqual = f1 == f2;

			Assert::AreEqual(areEqual, true);
		}
	};
}