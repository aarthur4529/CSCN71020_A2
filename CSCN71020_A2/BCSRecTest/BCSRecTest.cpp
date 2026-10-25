
#include "CppUnitTest.h"
#include "../BCSRec/functions.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int setLength(int input)
{
	if (input > 0 && input < 100)
	{
		int length = input;
		return length;
	}

	return(1);
}

int setWidth(int input)
{
	if (input > 0 && input < 100)
	{
		int width = input;
		return width;
	}
	return 1;
}

int getPerimeter(int length, int width) 
{
	int perimeter = setLength(length) + setLength(length) + setWidth(width);
	return perimeter;
}

int getArea(int length, int width) 
{
	int area = setLength(length) * setWidth(width);
	return area;
}


namespace BCSRecTest
{
	TEST_CLASS(BCSRecTest)
	{
	public:
		
		TEST_METHOD(PerimeterTest1)
		{
			int length = 0;
			int width = 100;
			int p = getPerimeter(length, width);
			Assert::AreEqual(p, 3);
		}

		TEST_METHOD(PerimeterTest2)
		{
			int length = 2;
			int width = 10;
			int p = getPerimeter(length, width);
			Assert::AreEqual(p, 14);
		}

		TEST_METHOD(PerimeterTest3)
		{
			int length = 50;
			int width = 4;
			int p = getPerimeter(length, width);
			Assert::AreEqual(p, 104);
		}

		TEST_METHOD(PerimeterTest4)
		{
			int length = -2;
			int width = -8;
			int p = getPerimeter(length, width);
			Assert::AreEqual(p, 3);
		}

		TEST_METHOD(PerimeterTest5)
		{
			int length = 1;
			int width = 99;
			int p = getPerimeter(length, width);
			Assert::AreEqual(p, 101);
		}

		TEST_METHOD(AreaTest1)
		{
			int length = 1;
			int width = 100;
			int a = getArea(length, width);
			Assert::AreEqual(a, 1);
		}

		TEST_METHOD(AreaTest2)
		{
			int length = 0;
			int width = 99;
			int a = getArea(length, width);
			Assert::AreEqual(a, 99);
		}

		TEST_METHOD(AreaTest3)
		{
			int length = 60;
			int width = 40;
			int a = getArea(length, width);
			Assert::AreEqual(a, 2400);
		}

		TEST_METHOD(AreaTest4)
		{
			int length = 6;
			int width = 4;
			int a = getArea(length, width);
			Assert::AreEqual(a, 24);
		}

		TEST_METHOD(AreaTest5)
		{
			int length = -8;
			int width = -6;
			int a = getArea(length, width);
			Assert::AreEqual(a, 1);
		}

		TEST_METHOD(LengthTest1)
		{
			int length = 100;
			int l = setLength(length);
			Assert::AreEqual(l, 1);
		}

		TEST_METHOD(LengthTest2)
		{
			int length = -6;
			int l = setLength(length);
			Assert::AreEqual(l, 1);
		}

		TEST_METHOD(LengthTest3)
		{
			int length = 0;
			int l = setLength(length);
			Assert::AreEqual(l, 1);
		}

		TEST_METHOD(LengthTest5)
		{
			int length = 60;
			int l = setLength(length);
			Assert::AreEqual(l, 60);
		}

		TEST_METHOD(WidthTest1)
		{
			int width = 100;
			int w = setWidth(width);
			Assert::AreEqual(w, 1);
		}

		TEST_METHOD(WidthTest2)
		{
			int width = -20;
			int w = setWidth(width);
			Assert::AreEqual(w, 1);
		}

		TEST_METHOD(WidthTest3)
		{
			int width = 50;
			int w = setWidth(width);
			Assert::AreEqual(w, 50);
		}

		TEST_METHOD(WidthTest5)
		{
			int width = 0;
			int w = setWidth(width);
			Assert::AreEqual(w, 1);
		}
	};
}
