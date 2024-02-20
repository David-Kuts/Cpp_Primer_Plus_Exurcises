// Exercise_006.cpp
#include <iostream>
#include "stonewt.h"

int main() {
	Stonewt incognito1 = 275;
	Stonewt wolfe1(285.7);
	Stonewt taft1(210, 80);
	Stonewt incognito2 = 2750;
	Stonewt wolfe2(2850.7);
	Stonewt taft2(210, 80);

	Stonewt weights[6] = { incognito1, wolfe1, taft1, incognito2, wolfe2, taft2 };

	std::cout << "incognito1 <= incognito2 is " << (incognito1 <= incognito2) << std::endl;
	std::cout << "wolfe1 < wolfe2 is " << (wolfe1 < wolfe2) << std::endl;
	std::cout << "taft1 > taft2 is " << (taft1 > taft2) << std::endl;
	std::cout << "incognito1 >= incognito2 is " << (incognito1 >= incognito2) << std::endl;
	std::cout << "wolfe1 != wolfe2 is " << (wolfe1 != wolfe2) << std::endl;
	std::cout << "taft1 == taft2 is " << (taft1 == taft2) << std::endl;

	return 0;
}