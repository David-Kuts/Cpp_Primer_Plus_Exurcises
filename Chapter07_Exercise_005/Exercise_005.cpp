// Exercise_005.cpp
#include <iostream>

unsigned long getFactorial(int number);

int main() {
	std::cout << "Enter a number to get factorial: ";

	int number = 0;

	while (std::cin >> number) {
		std::cout << getFactorial(number) << std::endl;
		std::cout << "Enter a number to get factorial: ";
	}
	
	return 0;
}

unsigned long getFactorial(int number) {
	if (number == 0) {
		return 1;
	} else {
		return number * getFactorial(number - 1);
	}
	return 0;
}
