// Exercise_007.cpp
#include <iostream>
#include <string>

struct Car {
	std::string manufacturyName;
	int manufactureYear;
};

int main() {
	std::cout << "How many cars should be included in the catalogue?: ";

	int carAmount = 0;

	std::cin >> carAmount;

	Car* p_arrCar = new Car[carAmount];

	for (size_t i = 0; i < carAmount; i++) {
		std::cout << "Car #" << i + 1 << ": " << std::endl;
		std::cout << "Enter manufactury name: ";
		std::cin >> p_arrCar[i].manufacturyName;
		std::cout << "Enter the year of manufacture: ";
		std::cin >> p_arrCar[i].manufactureYear;
	}
	std::cout << std::endl;
	std::cout << "Here is your colletcion:" << std::endl;

	for (int i = 0; i < carAmount; i++) {
		std::cout << p_arrCar[i].manufactureYear << ' ' << p_arrCar[i].manufacturyName << std::endl;
	}

	return 0;
}