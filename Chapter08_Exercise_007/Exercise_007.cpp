// Exercise_007.cpp
#include <iostream>

template <typename T> // template A
T sumArray(T arr[], int n) {
	std::cout << "template A\n";

	T sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}

template <typename T> // template B
T sumArray(T* arr[], int n) {
	std::cout << "template B\n";

	T sum = 0;

	for (int i = 0; i < n; i++) {
		sum += *arr[i];
	}

	return sum;
}

struct debts {
	char name[50];
	double amount;
};

int main() {
	using namespace std;

	int things[] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.5},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}

	cout << "Listing Mr. E's counts of things:\n";
	std::cout << sumArray(things, 6) << std::endl;
	cout << "Listing Mr. E's debts:\n";
	std::cout << sumArray(pd, 3) << std::endl;

	return 0;
}