// Exercise_004.cpp
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {

	std::string inputFile1, inputFile2, outputFile;

	std::cout << "Enter the name of the first input file: ";
	std::cin >> inputFile1;
	std::cout << "Enter the name of the second input file: ";
	std::cin >> inputFile2;
	std::cout << "Enter the name of the output file: ";
	std::cin >> outputFile;

	std::ifstream fin1(inputFile1);
	std::ifstream fin2(inputFile2);
	std::ofstream fout(outputFile);

	if (!fin1.is_open() || !fin2.is_open() || !fout.is_open()) {
		std::cerr << "Failed to open one or more files." << std::endl;
		return 1;
	}

	std::string line1, line2;
	bool fin1Alive = true, fin2Alive = true;

	while (fin1Alive || fin2Alive) {
		if (fin1Alive && std::getline(fin1, line1)) {
			fout << line1;
		} else {
			fin1Alive = false;
		}

		if (fin2Alive && std::getline(fin2, line2)) {
			if (!line1.empty() && fin1Alive) {
				fout << " ";
			}
			fout << line2;
		} else {
			fin2Alive = false;
		}

		fout << std::endl;
	}

	fin1.close();
	fin2.close();
	fout.close();

	std::cout << "Files have been merged successfully." << std::endl;

	return 0;
}