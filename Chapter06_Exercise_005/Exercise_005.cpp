// Exercise_005.cpp
#include <iostream>

int main() {

	double income = 0;
	double tax = 0;
	int taxRangeIndex = 0;

	std::cout << "Enter income: ";

	while (std::cin >> income) {
		if (income >= 0) {
			if (income > 35000) {
				taxRangeIndex = 4;
			}
			else if (income > 20000) {
				taxRangeIndex = 3;
			}
			else if (income > 10000) {
				taxRangeIndex = 2;
			}
			else if (income > 5000) {
				taxRangeIndex = 1;
			}
			else {
				taxRangeIndex = 0;
			}

			switch (taxRangeIndex) {
				case 4:
					tax += (income - 35000) * 0.2;
					income = 35000;
				case 3:
					tax += (income - 20000) * 0.15;
					income = 20000;
				case 2:
					tax += (income - 10000) * 0.10;
					income = 10000;
				case 1:
					tax += (income - 5000) * 0.05;
				case 0:
					std::cout << "Tax: " << tax << std::endl;
					std::cout << "Enter income: ";

					tax = 0;
			}
		}
		else {
			std::cout << "Bye";
			break;
		}
	}
	std::cout << "Tax: " << tax << std::endl;
	std::cout << "Bye";

	return 0;
}