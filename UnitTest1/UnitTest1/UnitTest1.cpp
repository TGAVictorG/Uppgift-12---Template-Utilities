#include "pch.h"
#include "CppUnitTest.h"
#include "CommonUtilities.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(MinTest)
		{
			//  � Det minsta talet ligger i den f�rsta parametern
			Assert::IsTrue(CommonUtilities::Min(5, 8) == 5);
			//	� Det minsta talet ligger i den andra parametern
			Assert::IsTrue(CommonUtilities::Min(25, 3) == 3);
			////	� F�rsta parametern �r negativ
			Assert::IsTrue(CommonUtilities::Min(-2, 7) == -2);
			////	� Andra parametern �r negativ
			Assert::IsTrue(CommonUtilities::Min(8, -3) == -3);
			////	� B�da parametrarna �r negativa, f�rsta parametern �r minst
			Assert::IsTrue(CommonUtilities::Min(-8, -5) == -8);
			////	� B�da parametrarna �r negativa, andra parametern �r minst
			Assert::IsTrue(CommonUtilities::Min(-3, -7) == -7);
		}

		TEST_METHOD(MaxTest)
		{
			//  � Det st�rsta talet ligger i den f�rsta parametern
			Assert::IsTrue(CommonUtilities::Max(7, 5) == 7);
			//	� Det st�rsta talet ligger i den andra parametern
			Assert::IsTrue(CommonUtilities::Max(4, 9) == 9);
			//	� F�rsta parametern �r negativ
			Assert::IsTrue(CommonUtilities::Max(-3, 22) == 22);
			//	� Andra parametern �r negativ
			Assert::IsTrue(CommonUtilities::Max(3, -22) == 3);
			//	� B�da parametrarna �r negativa, f�rsta parametern �r st�rst
			Assert::IsTrue(CommonUtilities::Max(-2, -12) == -2);
			//	� B�da parametrarna �r negativa, andra parametern �r st�rst
			Assert::IsTrue(CommonUtilities::Max(-15, -5) == -5);
		}

		TEST_METHOD(ClampTest)
		{
			//  � Stoppa in ett tal som �r mellan angivet talomf�ng
			Assert::IsTrue(CommonUtilities::Clamp(5, 3, 8) == 5);
			//	� Stoppa in ett tal som �r precis p� maxgr�nsen till angivet talomf�ng.
			Assert::IsTrue(CommonUtilities::Clamp(8, 3, 8) == 8);
			//	� Stoppa in ett tal som �r precis p� mingr�nsen till angivet talomf�ng.
			Assert::IsTrue(CommonUtilities::Clamp(3, 3, 8) == 3);
			//	� Stoppa in ett tal som �r h�gre �n talomf�nget.
			Assert::IsTrue(CommonUtilities::Clamp(12, 3, 8) == 8);
			//	� Stoppa in ett tal som �r l�gre �n talomf�nget.
			Assert::IsTrue(CommonUtilities::Clamp(1, 3, 8) == 3);
			//	� Testa med negativa tal.
			Assert::IsTrue(CommonUtilities::Clamp(-8, -5, -1) == -5);
			Assert::IsTrue(CommonUtilities::Clamp(-3, -5, -1) == -3);
			Assert::IsTrue(CommonUtilities::Clamp(0, -5, -1) == -1);
			//	� Testa med blandat positiva och negativa tal
			Assert::IsTrue(CommonUtilities::Clamp(-8, -5, 10) == -5);
			Assert::IsTrue(CommonUtilities::Clamp(12, -5, 10) == 10);
			Assert::IsTrue(CommonUtilities::Clamp(3, -5, 10) == 3);
			//	� S�tt min och max till samma v�rde.
			Assert::IsTrue(CommonUtilities::Clamp(3, 3, 3) == 3);
			Assert::IsTrue(CommonUtilities::Clamp(4, 3, 3) == 3);
			Assert::IsTrue(CommonUtilities::Clamp(2, 3, 3) == 3);
			//	� S�tt min h�gre �n max.
			Assert::IsTrue(CommonUtilities::Clamp(5, 7, 3) == 5);
			Assert::IsTrue(CommonUtilities::Clamp(10, 7, 3) == 7);
			Assert::IsTrue(CommonUtilities::Clamp(1, 7, 3) == 3);
		}

		TEST_METHOD(AbsTest)
		{
			//  � Stoppa in ett negativt tal
			Assert::IsTrue(CommonUtilities::Abs(-5) == 5);
			//	� Stoppa in ett positivt tal
			Assert::IsTrue(CommonUtilities::Abs(8) == 8);
			//	� Stoppa in 0
			Assert::IsTrue(CommonUtilities::Abs(0) == 0);
		}

		TEST_METHOD(SwapTest)
		{
			//  � Stoppa in ett negativt tal
			int first = 12;
			int second = -5;
			CommonUtilities::Swap(first, second);
			Assert::IsTrue(first == -5);
			Assert::IsTrue(second == 12);
		}

		TEST_METHOD(LerpTest)
		{
			//  � F�rsta talet �r negativt och det andra positivt
			float first = -10.0f;
			float second = 20.0f;
			Assert::AreEqual(-2.5f, CommonUtilities::Lerp(first, second, .25f));
			Assert::AreEqual(12.5f, CommonUtilities::Lerp(first, second, .75f));

			//	� F�rsta talet �r positivt och det andra �r negativt
			first = 20.0f;
			second = -10.0f;

			Assert::AreEqual(5.0f, CommonUtilities::Lerp(first, second, .5f));
			//	� Lerp - v�rdet �r 0
			Assert::AreEqual(first, CommonUtilities::Lerp(first, second, 0.0f));
			//	� Lerp - v�rdet �r 1
			Assert::AreEqual(second, CommonUtilities::Lerp(first, second, 1.0f));

			Assert::AreEqual(5.0f, CommonUtilities::Lerp(first, second, .5f));
		}
	};
}

