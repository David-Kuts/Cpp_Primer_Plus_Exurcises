// Exercise_005.cpp
#include <iostream>

constexpr int SIZE = 5;

template <typename T>
T max5(T arr[SIZE]) {
	T max = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int numbers1[SIZE] = { 2, 43, 23, 54, 0 };
	double numbers2[SIZE] = { 2.1, 43.3, 23.5, 54.6, 0.2 };

	std::cout << max5(numbers1) << std::endl;
	std::cout << max5(numbers2) << std::endl;


	return 0;
}