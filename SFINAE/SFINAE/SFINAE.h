// SFINAE.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "types.h"

#include <iostream>

namespace SFINAE {
	template <typename T, typename = integer_t<T>> class Module
	{
	  private:
		T m_men;

	  public:
		Module(T mem = T()) : m_men {mem}
		{}

		template <typename S, typename = integer_t<S>> T operator%(S m)
		{
			return (this->m_men % m);
		}

		friend std::ostream& operator<<(std::ostream& os, Module m)
		{
			os << m.m_men;
		}
	};
} // namespace SFINAE

// TODO: Reference additional headers your program requires here.
