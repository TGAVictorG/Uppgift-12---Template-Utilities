#pragma once
namespace CommonUtilities
{
	///	• Max – tar två argument av samma typ och returnerar det största
	template<typename T>
	T Max(const T &value1, const T &value2);

	///	• Min – tar två argument av samma typ och returnerar det minsta
	template<typename T>
	T Min(const T &value1, const T &value2);

	///	• Abs – tar ett argument och returnerar alltid en positivt mängd av samma storlek
	template<typename T>
	T Abs(const T &value);

	///	• Clamp – tar tre argument av samma typ : min, max, value. Om value är
	///	mindre än min så returneras min.Om value är större än max så returneras
	///	max, annars returneras value.
	template<typename T>
	T Clamp(const T value, const T& min, const T& max);

	///	• Lerp – Tar två argument av samma typ samt ett tredje som är en float(a, b, c). Det tredje argumentet är en procentsats(a + c(b – a)).
	template<typename T>
	T Lerp(const T value1, const T& value2, float t);

	///	• Swap – tar två argument av samma typ och byter data mellan dessa.
	template<typename T>
	void Swap(T& value1, T& value2);
};

