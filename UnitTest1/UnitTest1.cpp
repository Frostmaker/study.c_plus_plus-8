#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8/defs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(SumTest)
	{
	public:
		
		TEST_METHOD(SumTestMethod1)
		{
			int a[4] = { 1, 2, 3, 4 };
			Assert::AreEqual(arr_sum(a, 4), 10);
		}

		TEST_METHOD(SumTestMethod2)
		{
			int a[10] = { 1, 2, 3, 4, 5, -5, -4, -3, -2, -1 };
			Assert::AreEqual(arr_sum(a, 10), 0);
		}
	};


	TEST_CLASS(MaxTest)
	{
	public:

		TEST_METHOD(MaxTestMethod1)
		{
			int a[4] = { 1, 2, 3, 4 };
			Assert::AreEqual(arr_max(a, 4), 4);
		}

		TEST_METHOD(MaxTestMethod2)
		{
			int a[4] = { 2, 2, 2, 2 };
			Assert::AreEqual(arr_max(a, 4), 2);
		}

		TEST_METHOD(MaxTestMethod3)
		{
			int a[11] = { 7, 0, 4, 2, 8, 23, 11, 75, 12, -12, 44 };
			Assert::AreEqual(arr_max(a, 11), 75);
		}
	};


	TEST_CLASS(CheckZeroTest)
	{
	public:

		TEST_METHOD(CheckZeroTestMethod1)
		{
			int a[4] = { 1, 2, 3, 4 };
			Assert::IsTrue(arr_without_zero(a, 4));
		}

		TEST_METHOD(CheckZeroTestMethod2)
		{
			int a[5] = { 1, 2, 3, 4, 0 };
			Assert::IsFalse(arr_without_zero(a, 5));
		}

		TEST_METHOD(CheckZeroTestMethod3)
		{
			int a[5] = { 0, 0, 3, 4, 5 };
			Assert::IsFalse(arr_without_zero(a, 5));
		}
	};


	TEST_CLASS(MedianTest)
	{
	public:

		TEST_METHOD(MedianTestMethod1)
		{
			double a[11] = { 9, 1, 0, 2, 3, 4, 6, 8, 7, 10, 5 };
			Assert::AreEqual(quickselect_median(a, 11), 5.0);
		}

		TEST_METHOD(MedianTestMethod2)
		{
			double a[12] = { 9, 1, 0, 2, 3, 4, 6, 8, 7, 10, 5, 11 };
			Assert::AreEqual(quickselect_median(a, 12), 5.5);
		}
	};
}
