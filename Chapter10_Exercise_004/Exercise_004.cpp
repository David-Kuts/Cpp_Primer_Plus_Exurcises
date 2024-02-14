// Exercise_004.cpp
#include <iostream>
#include "sales.h"

int main() {
	double arr1[] = { 2.2, 3.4, 5.3, 1.1, 7.2, 8.2, 2.2, 0.2 };
	double arr2[] = { 22.2, 31.4, 5.3, 1.1, 71.2, 8.2, 2.2, 10.2 };

	SALES::Sales temp;
	SALES::Sales s1(arr1, 5), s2(arr2, 2), s3 = temp.setSales();

	s1.showSales();
	s2.showSales();
	s3.showSales();

	return 0;
}