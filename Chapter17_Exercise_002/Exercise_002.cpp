// Exercise_002.cpp
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << "filename\n";
		return 1;
	}

	std::ofstream fout(argv[1]);

	if (!fout.is_open()) {
		std::cerr << "Faild to open the file" << argv[1] << std::endl;
	}

	std::cout << "Enter text (EOF to stop): " << std::endl;

	std::string line;
	while (std::getline(std::cin, line)) {
		fout << line << std::endl;
	}

	if (!std::cin.eof()) {
		std::cerr << "Input terminated due to error." << std::endl;
		return 3;
	}

	fout.close();
	std::cout << "File has been saved successfully." << std::endl;

	return 0;
}