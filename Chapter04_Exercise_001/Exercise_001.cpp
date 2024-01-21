// Exercise_001.cpp
#include <iostream>

const int LENGTH = 50;

int main() {
	char name[LENGTH] = {};
	char lastName[LENGTH] = {};
	char grade = {};
	int age = {};

	// Get informaiton
	std::cout << "What is your first name? ";
	std::cin.getline(name, LENGTH);
	std::cout << "What is your last name? ";
	std::cin.getline(lastName, LENGTH);
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << std::endl;

	// Print the entered information
	std::cout << "Name: " << lastName << ", " << name << std::endl;
	std::cout << "Grade: " << static_cast<char>(grade + 1) << std::endl;
	std::cout << "Age: " << age << std::endl;

	return 0;
}