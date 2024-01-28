// Exercise_005.cpp
#include <iostream>

int main() {

	double income = 0;
	double tax = 0;
	int taxRangeIndex = 0;

	std::cout << "Enter income: ";

	while (std::cin >> income) {
		tax = 0;

		if (income >= 0) {
			if (income > 35000) {
				tax += (income - 35000) * 0.2;
				income = 35000;
			}
			if (income > 20000) {
				tax += (income - 20000) * 0.15;
				income = 20000;
			}
			if (income > 10000) {
				tax += (income - 10000) * 0.10;
				income = 10000;
			}
			if (income > 5000) {
				tax += (income - 5000) * 0.05;
			}
			
			std::cout << "Tax: " << tax << std::endl;
			std::cout << "Enter income: ";
		}
		else {
			break;
		}
	}
	std::cout << "Tax: " << tax << std::endl;
	std::cout << "Bye";

	return 0;
}