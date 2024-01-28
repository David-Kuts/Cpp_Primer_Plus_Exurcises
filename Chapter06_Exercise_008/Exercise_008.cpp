// Exercise_008.cpp
#include <iostream>
#include <fstream>

int main() {
	std::ifstream fin;
	fin.open("Secret_Massage.txt");

	char ch = '\0';
	int count = 0;

	while (fin.get(ch)) {
		count++;
	}
	
	std::cout << "Number of the words in the file: " << count << std::endl;
	
	fin.close();

	return 0;
}