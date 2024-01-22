// Exercise_006.cpp
#include <iostream>
#include <string>

struct CandyBar {
	std::string lable;
	double weight;
	int calories;
};

int main() {
	CandyBar c1 = { "Mocha Munch", 2.3, 350 };
	CandyBar c2 = { "Cake", 10.0, 550 };
	CandyBar c3 = { "Pie", 15.5, 760 };

	CandyBar items[] = { c1, c2, c3 };

	std::cout << "Item 1 : " << items[0].lable << ", " << items[0].weight << ", " << items[0].calories << std::endl;
	std::cout << "Item 2 : " << items[1].lable << ", " << items[1].weight << ", " << items[1].calories << std::endl;
	std::cout << "Item 3 : " << items[2].lable << ", " << items[2].weight << ", " << items[2].calories << std::endl;

	return 0;
}