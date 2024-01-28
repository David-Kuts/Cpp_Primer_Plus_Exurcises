// Exercise_006.cpp
#include <iostream>
#include <string>
#include <vector>

struct Patrons {
	std::string name;
	double donation;
};

int main() {
	int patronsAmount = 0;

	std::cout << "Enter a number of patrons: ";
	std::cin >> patronsAmount;

	Patrons* p_patrons = new Patrons[patronsAmount];

	for (int i = 0; i < patronsAmount; i++) {
		std::cout << "Enter name: ";
		std::cin.get();
		std::getline(std::cin, p_patrons[i].name);
		std::cout << "Enter donation: ";
		std::cin >> p_patrons[i].donation;
	}

	std::vector<int> patronsIndex;

	std::cout << std::endl << "Grand Patrons:" << std::endl;

	bool grandPatronsExist = false;
	bool patronsExist = false;

	for (int i = 0; i < patronsAmount; i++) {
		if (p_patrons[i].donation >= 10000) {
			std::cout << p_patrons[i].name << " - " << p_patrons[i].donation << std::endl;
			grandPatronsExist = true;
		} else {
			patronsIndex.push_back(i);
			patronsExist = true;
		}
	}

	if (!grandPatronsExist) {
		std::cout << "none" << std::endl;
	}

	std::cout << std::endl << "Patrons:" << std::endl;

	for (size_t i = 0; i < patronsIndex.size(); i++) {
		std::cout << p_patrons[patronsIndex[i]].name << " - " << p_patrons[patronsIndex[i]].donation << std::endl;
	}

	if (!patronsExist) {
		std::cout << "none" << std::endl;
	}

	delete[] p_patrons;

	return 0;
}