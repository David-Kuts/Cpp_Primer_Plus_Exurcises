// Exercise_005.cpp
#include <iostream>
#include <string>

struct CandyBar {
	std::string lable;
	double weight;
	int calories;
};

int main() {
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	std::cout << snack.lable << std::endl;
	std::cout << snack.weight << std::endl;
	std::cout << snack.calories << std::endl;
	
	return 0;
}