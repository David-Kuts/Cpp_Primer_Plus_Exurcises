// Exercise_008.cpp
#include <iostream>
#include <string>
#include "List.h"

int main() {
	List names;

	names.visit(display);

	std::string n1;
	bool doAgain = 1;

	while (!names.isfull()) {
		std::cout << "Enter a name: ";
		std::getline(std::cin, n1);

		names.add(n1);
	}

	std::cout << "List is full!" << std::endl;

	names.visit(display);
	names.visit(makeNone);
	names.visit(display);

	return 0;
}