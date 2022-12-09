#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_02rec/Lab_06_02rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int Test(int* r, int* c, const int n)
{
	for (int i = 0; i < 2 * n; i++)
	{
		Sort(r, 3, i);
		return r[i];
	}
	for (int i = 0; i < 2 * n; i++)
		Assert::AreEqual(r[i], c[i]);
}

namespace UnitTest0602rec
{
	TEST_CLASS(UnitTest0602rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int i = 0;
			int r[2 * n] = { 2, 3, 4, 5, 6, 7 };
			int c[2 * n] = { 5, 6, 7, 2, 3, 4 };
			Test(r, c, n);
		}
	};
}
