// Golf.cpp
#include <iostream>
#include <cstring>
#include "Golf.h"

Golf::Golf(const char* name, int hc) {
	strcpy_s(fullname, LENGHT, name);
	handicap = hc;
}

Golf& Golf::setgolf() {
	char fullname[LENGHT];

	std::cout << "Enter a full name: ";
	std::cin.getline(fullname, LENGHT);

	if (fullname[0] == '\0') {
		Golf temp;
		return temp;
	}

	int handicap;

	std::cout << "Enter a handicap: ";
	std::cin >> handicap;
	std::cin.get();

	Golf temp(fullname, handicap);

	return temp;
}