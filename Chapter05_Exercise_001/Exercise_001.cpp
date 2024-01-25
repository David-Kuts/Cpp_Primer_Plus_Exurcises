// Exercise_001.cpp
#include <iostream>

int main() {

	int firstNumber = 0;
	int secondNUmber = 0;

	std::cout << "Enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Enter the second number: ";
	std::cin >> secondNUmber;

	int sum = 0;

	for (int i = firstNumber; i <= secondNUmber; i++) {
		sum += i;
	}

	std::cout << "The sum of the numbers between " << firstNumber << " and " << secondNUmber << " is: " << sum << std::endl;

	return 0;
}