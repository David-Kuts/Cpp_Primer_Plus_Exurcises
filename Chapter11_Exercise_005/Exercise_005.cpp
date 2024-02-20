// Exercise_005.cpp
// compile with stonewt.cpp
#include <iostream>
#include "stonewt.h"

int main() {
	Stonewt incognito = 275; // uses constructor to initialize
	Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
	Stonewt taft(21, 8);

	std::cout << incognito << std::endl;
	std::cout << wolfe << std::endl;
	std::cout << taft << std::endl;


	incognito.setMode(Stonewt::INT_POUNDS);
	wolfe.setMode(Stonewt::FLOAT_POUNDS);

	std::cout << incognito << std::endl;
	std::cout << wolfe << std::endl;

	return 0;
}
