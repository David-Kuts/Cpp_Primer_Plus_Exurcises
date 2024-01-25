// Exercise_003.cpp
#include <iostream>

int main() {
	int number = 0;

	std::cout << "Enter a number of 0 to exit: ";
	std::cin >> number;

	int sum = 0;

	while (number != 0) {
		sum += number;

		std::cout << "The sum is " << sum << std::endl;
		std::cout << "Enter a number of 0 to exit: ";
		std::cin >> number;
	}

	return 0;
}