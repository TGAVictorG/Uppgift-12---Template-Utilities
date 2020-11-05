#include "pch.h"
#include "CommonUtilities.h"

namespace CommonUtilities
{
	template<typename T>
	T Max(const T& value1, const T& value2)
	{
		return value1 > value2 ? value1 : value2;
	}

	template<typename T>
	T Min(const T& value1, const T& value2)
	{
		return value1 < value2 ? value1 : value2;
	}

	template<typename T>
	T Abs(const T& value)
	{
		return value < 0 ? value * -1 : value;
	}

	template<typename T>
	T Clamp(const T value, const T& min, const T& max)
	{
		return value > max ? max : (value < min ? min : value);
	}

	template<typename T>
	T Lerp(const T value1, const T& value2, float t)
	{
		return value1 + t(value2 - value1);
	}

	template<typename T>
	void Swap(T& value1, T& value2)
	{
		T temp = value1;
		value1 = value2;
		value2 = temp;
	}
}