// Exercise_001.cpp
#include <iostream>

void print(const char* str, int n = 1);

int main() {
	char str1[] = "Hello!";

	print(str1);
	print(str1, 1);
	print("Haha!");
	print("Hoho!", 0);
	print("Hehe!", -1);

	return 0;
}

void print(const char* str, int n) {
	static int count = 0;

	if (n != 0) {
		for (int i = 0; i < count; i++) {
			std::cout << str;
		}
	} else {
		std::cout << str;
	}
	std::cout << std::endl;

	count++;
}
