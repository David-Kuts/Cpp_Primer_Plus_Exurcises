// Exercise_001.cpp
#include <iostream>
#include <cctype>

int main() {
	char ch = {};

	std::cout << "Enter a string (no reading after '@'): ";
	
	while (std::cin.get(ch) && ch != '@') {
		if (std::isdigit(ch)) {
			continue;
		}
		else if (std::islower(ch)) {
			ch = std::toupper(ch);
		}
		else if (std::isupper(ch)) {
			ch = std::tolower(ch);
		}

		std::cout << ch;
	}

	return 0;
}