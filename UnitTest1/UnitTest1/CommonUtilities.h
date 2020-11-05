#pragma once
namespace CommonUtilities
{
	template<typename T>
	T Max(const T& aValue1, const T& aValue2)
	{
		return aValue1 > aValue2 ? aValue1 : aValue2;
	}

	template<typename T>
	T Min(const T& aValue1, const T& aValue2)
	{
		return aValue1 < aValue2 ? aValue1 : aValue2;
	}

	template<typename T>
	T Abs(const T& aValue)
	{
		return aValue < 0 ? aValue * -1 : aValue;
	}

	template<typename T>
	T Clamp(const T aValue, const T& aMinValue, const T& aMaxValue)
	{
		T min;
		T max;

		if (aMinValue > aMaxValue)
		{
			min = aMaxValue;
			max = aMinValue;
		}
		else
		{
			min = aMinValue;
			max = aMaxValue;
		}

		return aValue > max ? max : (aValue < min ? min : aValue);
	}

	template<typename T>
	T Lerp(const T aValue1, const T& aValue2, float anInterpolant)
	{
		return aValue1 + anInterpolant * (aValue2 - aValue1);
	}

	template<typename T>
	void Swap(T& aValue1, T& aValue2)
	{
		T temp = aValue1;
		aValue1 = aValue2;
		aValue2 = temp;
	}
};

