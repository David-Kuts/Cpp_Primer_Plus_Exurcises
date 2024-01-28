// Exercise_007.cpp
#include <iostream>
#include <cstring>
#include <cctype>

constexpr int STR_SIZE = 50;
int main() {
	std::cout << "Enter words (q to quit): ";

	char word[STR_SIZE] = {};
	int vowelWords = 0;
	int consonantWords = 0;
	int otherWords = 0;

	while (std::cin >> word) {
		if (!strcmp(word, "q")) {
			break;
		}

		if (isalpha(word[0])) {
			switch (std::tolower(word[0])) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'y':
					vowelWords++;
					break;
				default:
					consonantWords++;
					break;
			}
		} else {
			otherWords++;
		}
	}

	std::cout << vowelWords << " words beginning with vowels" << std::endl;
	std::cout << consonantWords << " words beginning with consonants" << std::endl;
	std::cout << otherWords << " others" << std::endl;

	return 0;
}