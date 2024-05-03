// Exercise_005.cpp
#include <iostream>
#include <fstream>
#include <set>
#include <string>

void readNames(const std::string& fileName, std::set<std::string>& friendList) {
	std::ifstream fin(fileName);
	std::string name;

	while (std::getline(fin, name)) {
		friendList.insert(name);
	}

	fin.close();
}

int main() {
	std::set<std::string> matFriends;
	std::set<std::string> patFriends;
	
	readNames("mat.dat", matFriends);
	readNames("pat.dat", patFriends);

	std::set<std::string> allFriends;

	allFriends.insert(matFriends.begin(), matFriends.end());
	allFriends.insert(patFriends.begin(), patFriends.end());

	std::ofstream fout("allFriends.dat");

	for (auto name : allFriends) {
		fout << name << std::endl;
	}

	fout.close();

	return 0;
}