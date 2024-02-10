// Exercise_004.cpp
#include <iostream>
#include "sales.h"

int main() {
	using SALES::setSales;

	SALES::Sales s1, s2, s3;
	double arr1[] = { 2.2, 3.4, 5.3, 1.1, 7.2, 8.2, 2.2, 0.2 };
	double arr2[] = { 22.2, 31.4, 5.3, 1.1, 71.2, 8.2, 2.2, 10.2 };
	
	setSales(s1, arr1, 5);
	SALES::showSales(s1);
	setSales(s1, arr2, 2);
	SALES::showSales(s1);
	setSales(s3);
	SALES::showSales(s3);

	return 0;
}