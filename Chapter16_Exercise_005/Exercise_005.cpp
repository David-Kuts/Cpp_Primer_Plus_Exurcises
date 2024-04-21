// Exercise_005
#include <iostream>
#include <string>
#include <algorithm>

template <class T>
int reduce(T ar[], int n) {
	std::sort(ar, ar + n);
	T* endUnique = std::unique(ar, ar + n);

	return endUnique - ar;
}


int main() {
	constexpr int SIZE = 10;
	long values[SIZE]{ 1111, 2222, 1111, 3333, 4444, 5555, 6666, 2222, 7777 };

	std::cout << "Original long array: ";
	for (int i = 0; i < SIZE; ++i) {
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;

	int newLongSize = reduce(values, SIZE);

	std::cout << "Reduced long array: ";
	for (int i = 0; i < newLongSize; ++i) {
		std::cout << values[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "New size of the long array: " << newLongSize << std::endl;


	std::string stringAr[]{ "apple", "banana", "apple", "orange", "banana", "banana" };

	std::cout << "Original string: ";
	for (int i = 0; i < sizeof(stringAr) / sizeof(stringAr[0]); ++i) {
		std::cout << stringAr[i] << " ";
	}
	std::cout << std::endl;

	int newStringSize = reduce(stringAr, sizeof(stringAr) / sizeof(stringAr[0]));

	std::cout << "Reduced string: ";
	for (int i = 0; i < newStringSize; ++i) {
		std::cout << stringAr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "New size of the string: " << newStringSize << std::endl;

	return 0;
}

