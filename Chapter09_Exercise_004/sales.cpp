// Sales.cpp
#include <iostream>
#include "sales.h"

namespace SALES {
	void setSales(Sales& s, const double ar[], int n) {

		if (n > 4) {
			for (int i = 0; i < QUARTERS; i++) {
				s.sales[i] = ar[i];
			}
		} else {
			for (int i = 0; i < n; i++) {
				s.sales[i] = ar[i];
			}

			for (int i = 0 + n; i < QUARTERS; i++) {
				s.sales[i] = 0.0;
			}
		}

		s.max = s.sales[0];
		s.min = s.sales[0];
		double sum = 0;

		for (int i = 0; i < QUARTERS; i++) {
			if (s.max < s.sales[i]) {
				s.max = s.sales[i];
			}
			if (s.min > s.sales[i]) {
				s.min = s.sales[i];
			}

			sum += s.sales[i];
		}

		s.average = sum / QUARTERS;
	}

	void setSales(Sales& s) {
		double arr[4] = {};

		std::cout << "Enter sales values." << std::endl;

		for (int i = 0; i < QUARTERS; i++) {
			std::cout << "#" << i + 1 << ": ";
			std::cin >> arr[i];
		}

		setSales(s, arr, 4);
	}

	void showSales(const Sales& s) {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << '#' << i + 1 << ": " << '\t' << "min: " << s.min << '\t' << "max: " << s.max << '\t' << "average: " << s.average << std::endl;
		}
	}
}