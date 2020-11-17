#include "pch.h"
#include "CppUnitTest.h"
#include "../ASTD2.1/Sort.h"
#include "../ASTD2.1/Sort.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		int* test1; char* test2;
		TEST_METHOD_INITIALIZE(setUp)
		{
			test1 = new int[9]; // { 1, 7, 6, 3, 5, 2, 8, 4, 9, } 123456789
			test2 = new char[12];  // "hateunittest"	aeehinsttttu
		}
		TEST_METHOD_CLEANUP(cleanUp) {
			delete test1; delete test2;
		}

		TEST_METHOD(binarySearch)
		{
			test1[0] = 1;
			test1[1] = 2;
			test1[2] = 3;
			test1[3] = 4;
			test1[4] = 5;
			test1[5] = 6;
			test1[6] = 7;
			test1[7] = 8;
			test1[8] = 9;
			Assert::AreEqual(BinarySearch(test1, 9, 2), 1);
			Assert::AreEqual(BinarySearch(test1, 9, 3), 2);
			Assert::AreEqual(BinarySearch(test1, 9, 4), 3);
			Assert::AreEqual(BinarySearch(test1, 9, 5), 4);
			Assert::AreEqual(BinarySearch(test1, 9, 6), 5);
			Assert::AreEqual(BinarySearch(test1, 9, 7), 6);
			Assert::AreEqual(BinarySearch(test1, 9, 8), 7);
			Assert::AreEqual(BinarySearch(test1, 9, 9), 8);
			Assert::AreEqual(BinarySearch(test1, 9, 10), 9);
		}

		TEST_METHOD(quickSort)
		{
			test1[0] = 1;
			test1[1] = 7;
			test1[2] = 6;
			test1[3] = 3;
			test1[4] = 5;
			test1[5] = 2;
			test1[6] = 8;
			test1[7] = 4;
			test1[8] = 9;
			QuickSort(test1, 9);
			Assert::AreEqual(test1[0], 1);
			Assert::AreEqual(test1[1], 2);
			Assert::AreEqual(test1[2], 3);
			Assert::AreEqual(test1[3], 4);
			Assert::AreEqual(test1[4], 5);
			Assert::AreEqual(test1[5], 6);
			Assert::AreEqual(test1[6], 7);
			Assert::AreEqual(test1[7], 8);
			Assert::AreEqual(test1[8], 9);
		}

		TEST_METHOD(bubleSort)
		{
			test1[0] = 1;
			test1[1] = 7;
			test1[2] = 6;
			test1[3] = 3;
			test1[4] = 5;
			test1[5] = 2;
			test1[6] = 8;
			test1[7] = 4;
			test1[8] = 9;
			BubleSort(test1, 9);
			Assert::AreEqual(test1[0], 1);
			Assert::AreEqual(test1[1], 2);
			Assert::AreEqual(test1[2], 3);
			Assert::AreEqual(test1[3], 4);
			Assert::AreEqual(test1[4], 5);
			Assert::AreEqual(test1[5], 6);
			Assert::AreEqual(test1[6], 7);
			Assert::AreEqual(test1[7], 8);
			Assert::AreEqual(test1[8], 9);
		}

		TEST_METHOD(bogoSort)
		{
			test1[0] = 1;
			test1[1] = 7;
			test1[2] = 6;
			test1[3] = 3;
			test1[4] = 5;
			test1[5] = 2;
			test1[6] = 8;
			test1[7] = 4;
			test1[8] = 9;
			BogoSort(test1, 9);
			Assert::AreEqual(test1[0], 1);
			Assert::AreEqual(test1[1], 2);
			Assert::AreEqual(test1[2], 3);
			Assert::AreEqual(test1[3], 4);
			Assert::AreEqual(test1[4], 5);
			Assert::AreEqual(test1[5], 6);
			Assert::AreEqual(test1[6], 7);
			Assert::AreEqual(test1[7], 8);
			Assert::AreEqual(test1[8], 9);
		}

		TEST_METHOD(counting)
		{
			test2[0] = 'h';
			test2[1] = 'a';
			test2[2] = 't';
			test2[3] = 'e';
			test2[4] = 'u';
			test2[5] = 'n';
			test2[6] = 'i';
			test2[7] = 't';
			test2[8] = 't';
			test2[9] = 'e';
			test2[10] = 's';
			test2[11] = 't';
			CountingSort(test2, 12);
			Assert::AreEqual((int)test2[0], (int)'a');
			Assert::AreEqual((int)test2[1], (int)'e');
			Assert::AreEqual((int)test2[2], (int)'e');
			Assert::AreEqual((int)test2[3], (int)'h');
			Assert::AreEqual((int)test2[4], (int)'i');
			Assert::AreEqual((int)test2[5], (int)'n');
			Assert::AreEqual((int)test2[6], (int)'s');
			Assert::AreEqual((int)test2[7], (int)'t');
			Assert::AreEqual((int)test2[8], (int)'t');
			Assert::AreEqual((int)test2[9], (int)'t');
			Assert::AreEqual((int)test2[10], (int)'t');
			Assert::AreEqual((int)test2[11], (int)'u');
		}
	};
}