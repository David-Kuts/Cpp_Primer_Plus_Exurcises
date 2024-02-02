// Exercise_010.cpp
#include <iostream>

double culculat(double x, double y, double (*pFun)(double, double));
double add(double x, double y);
double multiply(double x, double y);
double substract(double x, double y);

int main() {
	double a = 2.5;
	double b = 10.4;
	double (*pFuns[3]) (double, double) = {add, multiply, substract};

	std::cout << "Enter two fractions (any simbol to quit): ";
	
	while (std::cin >> a >> b) {
		std::cout << "add: " << culculat(a, b, pFuns[0]) << std::endl;
		std::cout << "multiply: " << culculat(a, b, pFuns[1]) << std::endl;
		std::cout << "substract: " << culculat(a, b, pFuns[2]) << std::endl;

		std::cout << "Enter other two fractions (any simbol to quit): ";
	}

	std::cout << "Done.";

	return 0;
}

double culculat(double x, double y, double(*pFun)(double, double)) {
	return (*pFun)(x, y);
}

double add(double x, double y) {
	return x + y;
}

double multiply(double x, double y) {
	return x * y;
}

double substract(double x, double y) {
	return x - y;
}
