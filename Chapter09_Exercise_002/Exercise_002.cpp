// Exercise_002.cpp
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void strcount(string str);

int main() {
	string input;
	char next;

	cout << "Enter a line:\n";
	std::getline(cin, input);

	while (cin&& input != "") {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		std::getline(cin, input);
	}

	cout << "Bye\n";

	return 0;
}
void strcount(string str) {
	static int total = 0; // static local variable
	int count = 0; // automatic local variable

	cout << "\"" << str << "\" contains ";

	for (int i = 0; i < str.size(); i++) {
		count++;
	}

	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}