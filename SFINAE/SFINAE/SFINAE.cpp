// SFINAE.cpp : Defines the entry point for the application.
//

#include "SFINAE.h"

#include <ostream>
#include <type_traits>

int main()
{
	SFINAE::Module m(3);
	std::cout << (m % 12) << std::endl;

	// double
	// SFINAE::Module md(3.0);
	// std::cout << (md % 12.0) << std::endl;

	return 0;
}
