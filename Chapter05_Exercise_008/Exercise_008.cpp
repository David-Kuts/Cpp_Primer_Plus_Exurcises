// Exercise_008.cpp
#include <iostream>
#include <cstring>

constexpr int MAX_LENGTH = 25;

int main() {
	char word[MAX_LENGTH] = {};

	std::cout << "Enter words (to complete enter the word \"done\"): ";
	std::cin >> word;

	int wordCount = 0;

	while (strcmp(word, "done")) {
		wordCount++;
		std::cin >> word;
	}

	std::cout << "You have written " << wordCount << " words.";

	return 0;
}