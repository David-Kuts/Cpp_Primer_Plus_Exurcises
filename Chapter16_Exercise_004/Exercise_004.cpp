// Exercise_004
#include <iostream>
#include <algorithm>


int reduce(long ar[], int n);

int main() {
	constexpr int SIZE = 10;
	long values[SIZE]{ 1111, 2222, 1111, 3333, 4444, 5555, 6666, 2222, 7777 };

	std::cout << "Original array: ";
	for (int i = 0; i < SIZE; ++i) {
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;

	int newSize = reduce(values, SIZE);

	std::cout << "Reduced array: ";
	for (int i = 0; i < newSize; ++i) {
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "New size of the array: " << newSize << std::endl;

	return 0;
}

int reduce(long ar[], int n) {
	std::sort(ar, ar + n);
	long* endUnique = std::unique(ar, ar + n);

	return endUnique - ar;
}
