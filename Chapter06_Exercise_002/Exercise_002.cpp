// Exercise_002.cpp
#include <iostream>
#include <array>

constexpr int LENGTH = 4;

int main() {
	std::array<double, LENGTH> donations;
	double sum = 0;
	double average = 0;
	int numberOfValues = 0;

	std::cout << "Enter values of donations.\n";

	for (int i = 0; i < LENGTH; i++) {
		std::cout << "Donation " << i + 1<< ": ";

		if (std::cin >> donations[i]) {
			sum += donations[i];
			numberOfValues++;
		}
		else {
			std::cout << "You entered not a number! Entering values had been stoped.\n";
			break;
		}
	}


	if (numberOfValues > 0) {
		average = sum / numberOfValues;

		int valuesBiggerAverage = 0;

		for (int i = 0; i < LENGTH; i++) {
			if (donations[i] > average) {
				valuesBiggerAverage++;
			}
		}

		std::cout << "Average: " << average << std::endl;
		std::cout << "Number of values bigger than the average: " << valuesBiggerAverage << std::endl;
	}
	else {
		std::cout << "No valid donations were entered.\n";
	}


	return 0;
}