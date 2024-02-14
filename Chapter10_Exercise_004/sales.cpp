// Sales.cpp
#include <iostream>
#include "sales.h"

namespace SALES {
	Sales::Sales(const double ar[], int n) {

		if (n > 4) {
			for (int i = 0; i < QUARTERS; i++) {
				sales[i] = ar[i];
			}
		} else {
			for (int i = 0; i < n; i++) {
				sales[i] = ar[i];
			}

			for (int i = 0 + n; i < QUARTERS; i++) {
				sales[i] = 0.0;
			}
		}

		max = sales[0];
		min = sales[0];
		double sum = 0;

		for (int i = 0; i < QUARTERS; i++) {
			if (max < sales[i]) {
				max = sales[i];
			}
			if (min > sales[i]) {
				min = sales[i];
			}

			sum += sales[i];
		}

		average = sum / QUARTERS;
	}

	Sales Sales::setSales() {
		Sales temp;
		std::cout << "Enter sales values." << std::endl;

		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "#" << i + 1 << ": ";
			std::cin >> temp.sales[i];
		}

		return temp = Sales(temp.sales, 4);
	}

	void Sales::showSales() const {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << '#' << i + 1 << ": " << '\t' << "min: " << min << '\t' << "max: " << max << '\t' << "average: " << average << std::endl;
		}
	}
}