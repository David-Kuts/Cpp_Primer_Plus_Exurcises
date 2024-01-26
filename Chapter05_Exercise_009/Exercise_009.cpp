// Exercise_009.cpp
#include <iostream>
#include <string>

int main() {
	std::string word = {};

	std::cout << "Enter words (to complete enter the word \"done\"): ";
	std::cin >> word;

	int wordCount = 0;

	while (word != "done") {
		wordCount++;
		std::cin >> word;
	}

	std::cout << "You have written " << wordCount << " words.";

	return 0;
}