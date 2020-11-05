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
			//	• Det minsta talet ligger i den andra parametern
			//	• Första parametern är negativ
			//	• Andra parametern är negativ
			//	• Båda parametrarna är negativa, första parametern är minst
			//	• Båda parametrarna är negativa, andra parametern är minst
		}

		TEST_METHOD(MaxTest)
		{
			//  • Det största talet ligger i den första parametern
			//	• Det största talet ligger i den andra parametern
			//	• Första parametern är negativ
			//	• Andra parametern är negativ
			//	• Båda parametrarna är negativa, första parametern är störst
			//	• Båda parametrarna är negativa, andra parametern är störst
		}

		TEST_METHOD(ClampTest)
		{
			//  • Stoppa in ett tal som är mellan angivet talomfång
			//	• Stoppa in ett tal som är precis på maxgränsen till angivet talomfång.
			//	• Stoppa in ett tal som är precis på mingränsen till angivet talomfång.
			//	• Stoppa in ett tal som är högre än talomfånget.
			//	• Stoppa in ett tal som är lägre än talomfånget.
			//	• Testa med negativa tal.
			//	• Testa med blandat positiva och negativa tal
			//	• Sätt min och max till samma värde.
			//	• Sätt min högre än max.
		}

		TEST_METHOD(AbsTest)
		{
			//  • Stoppa in ett negativt tal
			//	• Stoppa in ett positivt tal
		}
		TEST_METHOD(SwapTest)
		{
			//  • Stoppa in ett negativt tal
			//	• Stoppa in ett positivt tal
		}

		TEST_METHOD(LerpTest)
		{
			//  • Första talet är negativt och det andra positivt
			//	• Första talet är positivt och det andra är negativt
			//	• Lerp - värdet är 0
			//	• Lerp - värdet är 1
			//	• Lerp - värdet är 0.5
		}
	};
}

