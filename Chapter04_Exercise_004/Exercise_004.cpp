// Exercise_004.cpp
#include <iostream>
#include <string>

const int LENGTH = 50;

int main() {
	std::string name = {};
	std::string lastName = {};

	std::cout << "Enter your first name: ";
	getline(std::cin, name);
	std::cout << "Enter your last name: ";
	getline(std::cin, lastName);

	std::string str = {};

	str = lastName + ", " + name;

	std::cout << "Here's the infornation in a single string: " << str << std::endl;

	return 0;
}