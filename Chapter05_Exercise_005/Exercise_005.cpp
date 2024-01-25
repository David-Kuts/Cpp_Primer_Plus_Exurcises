// Exercise_005.cpp
#include <iostream>
#include <string>

int main() {
	std::string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int* p_monthlySalesAmounts = new int [12];

	std::cout << "Enter the sales amount for:" << std::endl;

	int totalSoldBookAmouts = 0;

	for (int i = 0; i < 12; i++) {
		std::cout << months[i] << ": ";
		std::cin >> p_monthlySalesAmounts[i];

		totalSoldBookAmouts += p_monthlySalesAmounts[i];
	}

	std::cout << "Tatal amout of the sold books:" << totalSoldBookAmouts << std::endl;

	delete p_monthlySalesAmounts;

	return 0;
}