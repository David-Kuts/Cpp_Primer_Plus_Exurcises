// Exercise_005_Extra.cpp
#include <iostream>

double getFactorial(int number);

int main() {
	std::cout << "Enter a number to get factorial: ";

	int number = 0;

	while (std::cin >> number) {
		std::cout << getFactorial(number) << std::endl;
		std::cout << "Enter a number to get factorial: ";
	}


	return 0;
}

double getFactorial(int number) {
	double result = 1.0;

	for (int i = 1; i <= number; i++) {
		result *= i;
	}

	return result;
}

