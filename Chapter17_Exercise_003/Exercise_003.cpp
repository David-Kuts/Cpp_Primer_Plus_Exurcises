// Exercise_003.cpp
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
	if (argc < 3) {
		std::cout << "Not enough arguments" << std::endl;
		return 1;
	}

	std::ifstream fin(argv[1]);
	std::ofstream fout(argv[2]);

	if (!fin.is_open()) {
		std::cerr << "Faild to open source file" << argv[1] << std::endl;
		return 2;
	}

	if (!fout.is_open()) {
		std::cerr << "Faild to open destination file" << argv[2] << std::endl;
		return 3;
	}

	char ch;

	while (fin.get(ch)) {
		fout << ch;
	}

	if (!fin.eof()) {
		std::cerr << "Input terminated due to error." << std::endl;
		return 3;
	}

	fin.close();
	fout.close();
	std::cout << "File has been saved successfully." << std::endl;

	return 0;
}