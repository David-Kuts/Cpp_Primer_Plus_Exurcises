// Exercise_002.cpp
#include <iostream>
#include <string>

int main() {
	//const int ArSize = 20;
	std::string name;
	std::string dessert;

	std::cout << "Enter your name:\n";
	getline(std::cin, name);
	std::cout << "Enter your favorite dessert:\n";
	getline(std::cin, dessert);
	std::cout << "I have some delicious " << dessert;
	std::cout << " for you, " << name << ".\n";

	return 0;
}