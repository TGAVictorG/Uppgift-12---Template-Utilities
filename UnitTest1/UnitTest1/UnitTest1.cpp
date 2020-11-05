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
			//  • Det minsta talet ligger i den första parametern
			Assert::IsTrue(CommonUtilities::Min(5, 8) == 5);
			//	• Det minsta talet ligger i den andra parametern
			Assert::IsTrue(CommonUtilities::Min(25, 3) == 3);
			////	• Första parametern är negativ
			Assert::IsTrue(CommonUtilities::Min(-2, 7) == -2);
			////	• Andra parametern är negativ
			Assert::IsTrue(CommonUtilities::Min(8, -3) == -3);
			////	• Båda parametrarna är negativa, första parametern är minst
			Assert::IsTrue(CommonUtilities::Min(-8, -5) == -8);
			////	• Båda parametrarna är negativa, andra parametern är minst
			Assert::IsTrue(CommonUtilities::Min(-3, -7) == -7);
		}

		TEST_METHOD(MaxTest)
		{
			//  • Det största talet ligger i den första parametern
			Assert::IsTrue(CommonUtilities::Max(7, 5) == 7);
			//	• Det största talet ligger i den andra parametern
			Assert::IsTrue(CommonUtilities::Max(4, 9) == 9);
			//	• Första parametern är negativ
			Assert::IsTrue(CommonUtilities::Max(-3, 22) == 22);
			//	• Andra parametern är negativ
			Assert::IsTrue(CommonUtilities::Max(3, -22) == 3);
			//	• Båda parametrarna är negativa, första parametern är störst
			Assert::IsTrue(CommonUtilities::Max(-2, -12) == -2);
			//	• Båda parametrarna är negativa, andra parametern är störst
			Assert::IsTrue(CommonUtilities::Max(-15, -5) == -5);
		}

		TEST_METHOD(ClampTest)
		{
			//  • Stoppa in ett tal som är mellan angivet talomfång
			Assert::IsTrue(CommonUtilities::Clamp(5, 3, 8) == 5);
			//	• Stoppa in ett tal som är precis på maxgränsen till angivet talomfång.
			Assert::IsTrue(CommonUtilities::Clamp(8, 3, 8) == 8);
			//	• Stoppa in ett tal som är precis på mingränsen till angivet talomfång.
			Assert::IsTrue(CommonUtilities::Clamp(3, 3, 8) == 3);
			//	• Stoppa in ett tal som är högre än talomfånget.
			Assert::IsTrue(CommonUtilities::Clamp(12, 3, 8) == 8);
			//	• Stoppa in ett tal som är lägre än talomfånget.
			Assert::IsTrue(CommonUtilities::Clamp(1, 3, 8) == 3);
			//	• Testa med negativa tal.
			Assert::IsTrue(CommonUtilities::Clamp(-8, -5, -1) == -5);
			Assert::IsTrue(CommonUtilities::Clamp(-3, -5, -1) == -3);
			Assert::IsTrue(CommonUtilities::Clamp(0, -5, -1) == -1);
			//	• Testa med blandat positiva och negativa tal
			Assert::IsTrue(CommonUtilities::Clamp(-8, -5, 10) == -5);
			Assert::IsTrue(CommonUtilities::Clamp(12, -5, 10) == 10);
			Assert::IsTrue(CommonUtilities::Clamp(3, -5, 10) == 3);
			//	• Sätt min och max till samma värde.
			Assert::IsTrue(CommonUtilities::Clamp(3, 3, 3) == 3);
			Assert::IsTrue(CommonUtilities::Clamp(4, 3, 3) == 3);
			Assert::IsTrue(CommonUtilities::Clamp(2, 3, 3) == 3);
			//	• Sätt min högre än max.
			Assert::IsTrue(CommonUtilities::Clamp(5, 7, 3) == 5);
			Assert::IsTrue(CommonUtilities::Clamp(10, 7, 3) == 7);
			Assert::IsTrue(CommonUtilities::Clamp(1, 7, 3) == 3);
		}

		TEST_METHOD(AbsTest)
		{
			//  • Stoppa in ett negativt tal
			Assert::IsTrue(CommonUtilities::Abs(-5) == 5);
			//	• Stoppa in ett positivt tal
			Assert::IsTrue(CommonUtilities::Abs(8) == 8);
			//	• Stoppa in 0
			Assert::IsTrue(CommonUtilities::Abs(0) == 0);
		}

		TEST_METHOD(SwapTest)
		{
			//  • Stoppa in ett negativt tal
			int first = 12;
			int second = -5;
			CommonUtilities::Swap(first, second);
			Assert::IsTrue(first == -5);
			Assert::IsTrue(second == 12);
		}

		TEST_METHOD(LerpTest)
		{
			//  • Första talet är negativt och det andra positivt
			float first = -10.0f;
			float second = 20.0f;
			Assert::AreEqual(-2.5f, CommonUtilities::Lerp(first, second, .25f));
			Assert::AreEqual(12.5f, CommonUtilities::Lerp(first, second, .75f));

			//	• Första talet är positivt och det andra är negativt
			first = 20.0f;
			second = -10.0f;

			Assert::AreEqual(5.0f, CommonUtilities::Lerp(first, second, .5f));
			//	• Lerp - värdet är 0
			Assert::AreEqual(first, CommonUtilities::Lerp(first, second, 0.0f));
			//	• Lerp - värdet är 1
			Assert::AreEqual(second, CommonUtilities::Lerp(first, second, 1.0f));

			Assert::AreEqual(5.0f, CommonUtilities::Lerp(first, second, .5f));
		}
	};
}

