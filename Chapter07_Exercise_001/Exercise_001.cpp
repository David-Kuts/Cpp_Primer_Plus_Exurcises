// Exercise_001.cpp
#include <iostream>

double culculateHarmonicMean(int x, int y);

int main() {
	int x, y;

	std::cout << "Enter two numbers to culculate harmonic mean: ";

	while (std::cin >> x >> y) {
		if (x != 0 && y != 0) {
			std::cout << "Harmonic mean: " << culculateHarmonicMean(x, y) << std::endl;
			std::cout << "Enter another two numbers: ";
		} else {
			break;
		}
	}

	return 0;
}

double culculateHarmonicMean(int x, int y) {
	return (2.0 * x * y / (x + y));
}
