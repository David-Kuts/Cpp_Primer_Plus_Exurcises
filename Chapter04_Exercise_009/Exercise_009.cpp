// Exercise_009.cpp
#include <iostream>
#include <string>

struct CandyBar {
	std::string lable;
	double weight;
	int calories;
};

int main() {
	CandyBar* p_items = new CandyBar[3];

	p_items[0] = { "Mocha Munch", 2.3, 350 };
	p_items[1] = { "Cake", 10.0, 550 };
	p_items[2] = { "Pie", 15.5, 760 };

	std::cout << "Item 1 : " << p_items[0].lable << ", " << p_items[0].weight << ", " << p_items[0].calories << std::endl;
	std::cout << "Item 2 : " << p_items[1].lable << ", " << p_items[1].weight << ", " << p_items[1].calories << std::endl;
	std::cout << "Item 3 : " << p_items[2].lable << ", " << p_items[2].weight << ", " << p_items[2].calories << std::endl;

	return 0;
}