// Exercise_007.cpp
#include <iostream>
const int LENGTH = 100;
struct Pizza {
	char companyName[LENGTH];
	double Diameter;
	double weight;
};

int main() {
	Pizza customerPizza = {};

	std::cout << "Enter the name of the pizza manufacturing company: ";
	std::cin.getline(customerPizza.companyName, LENGTH);
	std::cout << "Enter the pizza diameter: ";
	std::cin >> customerPizza.Diameter;
	std::cout << "Enter the pizza weight: ";
	std::cin >> customerPizza.weight;

	std::cout << std::endl;
	std::cout << "Company name: " << customerPizza.companyName << std::endl;
	std::cout << "Pizza diameter: " << customerPizza.Diameter << std::endl;
	std::cout << "Pizza weight: " << customerPizza.weight << std::endl;

	return 0;
}