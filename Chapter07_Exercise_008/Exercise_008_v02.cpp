// Exercise_008_v02.cpp
#include <iostream>

const int SEASONS = 4;
const char* Snames[SEASONS] = { "Spring", "Summer", "Fall", "Winter" };

struct Expenses {
	double expenses[SEASONS] = {};
};

void fill(Expenses* pa);
void show(const Expenses* da);

int main() {
	Expenses ex1 = {};
	fill(&ex1);
	show(&ex1);

	return 0;
}

void fill(Expenses* pa) {
	for (int i = 0; i < SEASONS; i++) {
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa->expenses[i];
	}
}
void show(const Expenses* da) {
	double total = 0.0;

	std::cout << "\nEXPENSES\n";

	for (int i = 0; i < SEASONS; i++) {
		std::cout << Snames[i] << ": $" << da->expenses[i] << std::endl;
		total += da->expenses[i];
	}

	std::cout << "Total Expenses: $" << total << std::endl;
}