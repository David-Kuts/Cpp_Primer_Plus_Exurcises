// Exercise_010.cpp
#include <iostream>

int main() {
	std::cout << "Enter number of lines: ";
	int lineNumber = 0;
	std::cin >> lineNumber;

	int points = lineNumber - 1;
	int asterisks = 0;

	for (int i = 0; i < lineNumber; i++) {
		for (int j = points; j > i; j--) {
			std::cout << '.';
		}
		for (int k = asterisks; k <= i; k++) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
	return 0;
}