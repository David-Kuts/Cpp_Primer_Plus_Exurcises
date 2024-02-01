// Exercise_006.cpp
#include <iostream>

double fillArray(double arr[], int size);
void showArray(const double arr[], int size);
void reverseArray(double arr[], int size);

int main() {
	int arrSize;

	std::cout << "Enter an array size: ";
	std::cin >> arrSize;

	double* p_arr = new double[arrSize];
	int actualArraySize = fillArray(p_arr, arrSize);

	showArray(p_arr, actualArraySize);
	reverseArray(p_arr, actualArraySize);
	showArray(p_arr, actualArraySize);

	delete[] p_arr;
	return 0;
}

double fillArray(double arr[], int size) {
	int indexQuantity = 0;

	std::cout << "Enter a number (not a number to quit): ";

	for (int i = 0; i < size; i++) {
		double tmp;
		if (std::cin >> tmp) {
			arr[i] = tmp;
			indexQuantity = i + 1;
			std::cout << "Enter a number (not a number to quit): ";
		} else {
			return indexQuantity;
		}
	}

	return indexQuantity;
}

void showArray(const double arr[], int size) {
	std::cout << "Array values: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}

	std::cout << std::endl;
}

void reverseArray(double arr[], int size) {
	for (int i = 1, j = size - 2; i < j; i++, j--) {
		double tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}