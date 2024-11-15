#pragma once

namespace SFINAE {
	template <typename T> struct sf_integer
	{
		static const bool value = false;
	};

	template <> struct sf_integer<int>
	{
		static const bool value = true;
		using type = int;
	};

	template <> struct sf_integer<short>
	{
		static const bool value = true;
		using type = short;
	};

	template <> struct sf_integer<long>
	{
		static const bool value = true;
		using type = long;
	};

	template <> struct sf_integer<long long>
	{
		static const bool value = true;
		using type = long long;
	};

	template <> struct sf_integer<unsigned int>
	{
		static const bool value = true;
		using type = unsigned int;
	};

	template <> struct sf_integer<unsigned short>
	{
		static const bool value = true;
		using type = unsigned short;
	};

	template <> struct sf_integer<unsigned long>
	{
		static const bool value = true;
		using type = unsigned long;
	};

	template <> struct sf_integer<unsigned long long>
	{
		static const bool value = true;
		using type = unsigned long long;
	};

	template <typename T> constexpr bool is_integer = sf_integer<T>::value;

	template <typename T> using integer_t = typename sf_integer<T>::type;
} // namespace SFINAE