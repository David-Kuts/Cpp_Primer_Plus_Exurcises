// Exercise_001.cpp
#include <iostream>

int main() {

	std::cout << "Enter a text: ";
	char ch;
	

	int charCount = 0;

	while (std::cin.get(ch)) {
		if (ch == '$') {
			std::cin.putback(ch);
			break;
		}
		charCount++;
	}

	std::cout << "The number of characters before the first '$': " << charCount << std::endl;

	return 0;
}