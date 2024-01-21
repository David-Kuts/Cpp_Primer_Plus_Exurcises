// Exercise_003.cpp
#include <iostream>
#include <cstring>

const int LENGTH = 50;

int main() {
	char name[LENGTH] = {};
	char lastName[LENGTH] = {};

	std::cout << "Enter your first name: ";
	std::cin.getline(name, LENGTH);
	std::cout << "Enter your last name: ";
	std::cin.getline(lastName, LENGTH);

	char str[LENGTH * 2] = {};

	strcpy_s(str, lastName);
	strcat_s(str, ", ");
	strcat_s(str, name);

	std::cout << "Here's the infornation in a single string: " << str << std::endl;

	return 0;
}