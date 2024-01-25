// Exercise_004.cpp
#include <iostream>

constexpr int startInvestment = 100;

int main() {
	double dafnaBalance = startInvestment;
	double kleoBalance = startInvestment;

	std::cout << "Year" << '\t' << "Dana" << '\t' << "Kleo" << std::endl;

	for (int year = 1; kleoBalance <= dafnaBalance; year++) {
		dafnaBalance += startInvestment * 0.1;
		kleoBalance += kleoBalance * 0.05;

		std::cout << year << '\t' << dafnaBalance << '\t' << kleoBalance << std::endl;
	}

	return 0;
}