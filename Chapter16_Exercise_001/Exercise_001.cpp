// Exercise_001
#include<iostream>
#include<string>

bool isPalindrome(const std::string& str) {
	std::string::const_iterator left(str.begin());
	std::string::const_iterator right = str.end() - 1;
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