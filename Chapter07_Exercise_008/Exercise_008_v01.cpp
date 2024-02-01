// Exercise_008_v01.cpp
#include <iostream>

constexpr int SEASONS = 4;
const char* Snames[SEASONS] = { "Spring", "Summer", "Fall", "Winter" };

void fill(double* pa);
void show(double* da);

int main() {
	double expenses[SEASONS];

	fill(expenses);
	show(expenses);

	return 0;
}

void fill(double* pa) {
	for (int i = 0; i < SEASONS; i++) {
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}
void show(double* da) {
	double total = 0.0;

	std::cout << "\nEXPENSES\n";

	for (int i = 0; i < SEASONS; i++) {
		std::cout << Snames[i] << ": $" << da[i] << std::endl;
		total += da[i];
	}

	std::cout << "Total Expenses: $" << total << std::endl;
}