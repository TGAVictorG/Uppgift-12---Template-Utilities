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
			//	� Det minsta talet ligger i den andra parametern
			//	� F�rsta parametern �r negativ
			//	� Andra parametern �r negativ
			//	� B�da parametrarna �r negativa, f�rsta parametern �r minst
			//	� B�da parametrarna �r negativa, andra parametern �r minst
		}

		TEST_METHOD(MaxTest)
		{
			//  � Det st�rsta talet ligger i den f�rsta parametern
			//	� Det st�rsta talet ligger i den andra parametern
			//	� F�rsta parametern �r negativ
			//	� Andra parametern �r negativ
			//	� B�da parametrarna �r negativa, f�rsta parametern �r st�rst
			//	� B�da parametrarna �r negativa, andra parametern �r st�rst
		}

		TEST_METHOD(ClampTest)
		{
			//  � Stoppa in ett tal som �r mellan angivet talomf�ng
			//	� Stoppa in ett tal som �r precis p� maxgr�nsen till angivet talomf�ng.
			//	� Stoppa in ett tal som �r precis p� mingr�nsen till angivet talomf�ng.
			//	� Stoppa in ett tal som �r h�gre �n talomf�nget.
			//	� Stoppa in ett tal som �r l�gre �n talomf�nget.
			//	� Testa med negativa tal.
			//	� Testa med blandat positiva och negativa tal
			//	� S�tt min och max till samma v�rde.
			//	� S�tt min h�gre �n max.
		}

		TEST_METHOD(AbsTest)
		{
			//  � Stoppa in ett negativt tal
			//	� Stoppa in ett positivt tal
		}
		TEST_METHOD(SwapTest)
		{
			//  � Stoppa in ett negativt tal
			//	� Stoppa in ett positivt tal
		}

		TEST_METHOD(LerpTest)
		{
			//  � F�rsta talet �r negativt och det andra positivt
			//	� F�rsta talet �r positivt och det andra �r negativt
			//	� Lerp - v�rdet �r 0
			//	� Lerp - v�rdet �r 1
			//	� Lerp - v�rdet �r 0.5
		}
	};
}

