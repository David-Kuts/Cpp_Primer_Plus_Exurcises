// Exercise_001
#include<iostream>
#include<string>
#include<cctype>

bool isPalindrome(const std::string& str) {
	std::string filtered;

	for (char ch : str) {
		if (isalpha(ch)) {
			filtered.push_back(std::tolower(ch));
		}
	}

	auto left(filtered.begin());
	auto right = filtered.end() - 1;

	while (left < right) {
		if (*left != *right) {
			return false;
		}

		++left;
		--right;
	}

	return true;
}

int main() {
	std::cout << "Entre a string : ";
	std::string input;
	std::getline(std::cin, input);
	std::cout << "Is it a palindrome: " << isPalindrome(input) << std::endl;

	return 0;
}