// Exercise_004.cpp
#include <iostream>

constexpr int STR_SIZE = 50;
constexpr int ARR_SIZE = 3;

struct Bop {
	char fullName[STR_SIZE];
	char title[STR_SIZE];
	char bopName[STR_SIZE];
	int preference;
};

int main() {
	Bop m1 = { "Tom Anderson", "Analyst", "Tiger", 1 };
	Bop m2 = { "Bill Smith", "Programmer", "Drake", 0 };
	Bop m3 = { "John Borrow", "CEO", "Boss",2 };

	Bop members[ARR_SIZE] = { m1, m2, m3 };

	std::cout << "Benevolent Order of Programmers Report" << std::endl;
	std::cout << "a. display by name" << '\t' << "b. display by title" << std::endl;
	std::cout << "c. display by bopname" << '\t' << "d. display by preference" << std::endl;
	std::cout << "q. quit" << std::endl;
	std::cout << "Enter your choice: ";

	char ch = 0;

	while (true) {
		std::cin >> ch;

		switch (ch) {
			case 'a':
				for (int i = 0; i < ARR_SIZE; i++) {
					std::cout << members[i].fullName << std::endl;
				}
				std::cout << "Next choice: ";
				continue;
			case 'b':
				for (int i = 0; i < ARR_SIZE; i++) {
					std::cout << members[i].title << std::endl;
				}
				std::cout << "Next choice: ";
				continue;
			case 'c':
				for (int i = 0; i < ARR_SIZE; i++) {
					std::cout << members[i].bopName << std::endl;
				}
				std::cout << "Next choice: ";
				continue;
			case 'd':
				for (int i = 0; i < ARR_SIZE; i++){
					switch (members[i].preference) {
						case 0:
							std::cout << members[i].fullName << std::endl;
							break;
						case 1:
							std::cout << members[i].title << std::endl;
							break;
						case 2:
							std::cout << members[i].bopName << std::endl;
							break;
					}
				}
				std::cout << "Next choice: ";
				continue;
			case 'q':
				std::cout << "Bye!";
				break;
			default:
				std::cout << "Enter a, b, c, d or q: ";
				continue;
		}
		break;
	}

	return 0;
}