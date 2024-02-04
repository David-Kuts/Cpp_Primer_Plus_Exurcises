// Exercise_003.cpp
#include <iostream>
#include <string>

std::string& makeUpper(std::string& str);
void show(const std::string& str);

int main() {
	std::string str;

	std::cout << "Enter a string (q to quit): ";

	while (std::getline(std::cin, str) && str != "q") {
		show(makeUpper(str));
		std::cout << "Next string (q to quit): ";
	}

	std::cout << "Bye!";

	return 0;
}

std::string& makeUpper(std::string& str) {
	for (int i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}

	return str;
}

void show(const std::string& str) {
	std::cout << str << std::endl;
}
