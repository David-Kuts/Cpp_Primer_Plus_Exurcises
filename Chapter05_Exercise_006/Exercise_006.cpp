// Exercise_006.cpp
#include <iostream>
#include <string>

constexpr int YEARS = 3;
constexpr int MONTHS = 12;

int main() {
	std::string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int monthlySalesAmounts[YEARS][MONTHS];

	std::cout << "Enter the sales amount for:" << std::endl;

	int totalSoldBookAmouts = 0;
	
	for (int i = 0; i < YEARS; i++) {
		for (int j = 0; j < MONTHS; j++) {
			std::cout << "Year " << i + 1 << '\t' << months[j] << ": ";
			std::cin >> monthlySalesAmounts[i][j];

			totalSoldBookAmouts += monthlySalesAmounts[i][j];
		}
	}

	std::cout << "Tatal amout of the sold books:" << totalSoldBookAmouts << std::endl;

	return 0;
}