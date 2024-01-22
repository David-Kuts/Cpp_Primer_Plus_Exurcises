// Exercise_008.cpp
#include <iostream>
const int LENGTH = 100;
struct Pizza {
	char companyName[LENGTH];
	double Diameter;
	double weight;
};

int main() {
	Pizza* p_customerPizza = new Pizza;

	std::cout << "Enter the name of the pizza manufacturing company: ";
	std::cin.getline(p_customerPizza->companyName, LENGTH);
	std::cout << "Enter the pizza diameter: ";
	std::cin >> p_customerPizza->Diameter;
	std::cout << "Enter the pizza weight: ";
	std::cin >> p_customerPizza->weight;

	std::cout << std::endl;
	std::cout << "Company name: " << p_customerPizza->companyName << std::endl;
	std::cout << "Pizza diameter: " << p_customerPizza->Diameter << std::endl;
	std::cout << "Pizza weight: " << p_customerPizza->weight << std::endl;

	delete p_customerPizza;

	return 0;
}