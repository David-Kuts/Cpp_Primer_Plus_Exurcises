// Exercise_002.cpp
#include <iostream>
#include <array>

constexpr int ARR_SIZE = 100;

int main() {
	std::array<long double, ARR_SIZE> factorials;

	factorials[1] = factorials[0] = 1L;

	for (int i = 2; i < ARR_SIZE; i++) {
		factorials[i] = i * factorials[i - 1];
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		std::cout << i << "! = " << factorials[i] << std::endl;
	}

	return 0;
}