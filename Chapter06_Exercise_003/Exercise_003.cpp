// Exercise_003.cpp
#include <iostream>

int main() {
	std::cout << "Please enter one of the following choices: \n";
	std::cout << "c) carnevore" << '\t' << "p) planist" << std::endl;
	std::cout << "t) tree" << "\t\t" << "g) game" << std::endl;

	char ch = {};

	std::cin >> ch;

	while (true) {
		if (ch == 'c' || ch == 'p' || ch == 't' || ch == 'g') {
			switch (ch) {
				case 'c':
					std::cout << "Carnevore" << std::endl;
					break;
				case 'p':
					std::cout << "Planist" << std::endl;
					break;
				case 't':
					std::cout << "Tree" << std::endl;
					break;
				case 'g':
					std::cout << "Game" << std::endl;
					break;
			}
		}
		else {
			std::cout << "Please enter c, p, t or g: ";
			std::cin >> ch;
			continue;
		}

		break;
	}

	return 0;
}