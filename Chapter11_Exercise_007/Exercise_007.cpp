// Exercise_007.cpp
#include <iostream>
#include "complex0.h" // to avoid confusion with complex.h
int main() {
	Complex a(3.0, 4.0); // initialize to (3,4i)
	Complex c;
	std::cout << "Enter a complex number (q to quit):\n";
	while (std::cin >> c) {
		std::cout << "c is " << c << '\n';
		std::cout << "complex conjugate is " << ~c << '\n';
		std::cout << "a is " << a << '\n';
			std::cout << "a + c is " << a + c << '\n';
		std::cout << "a - c is " << a - c << '\n';
		std::cout << "a * c is " << a * c << '\n';
		std::cout << "2 * c is " << 2 * c << '\n';
		std::cout << "Enter a complex number (q to quit):\n";
	}
	std::cout << "Done!\n";
	return 0;
}