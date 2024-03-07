// dc.cpp
#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) : selections(n), playtime(x) {
	strcpy_s(performers, sizeof(performers), s1);

	label = new char[MAX];

	strcpy_s(label, MAX, s2);
}

Cd::Cd(const Cd& d) {
	strcpy_s(performers, sizeof(performers), d.performers);

	label = new char[MAX];

	strcpy_s(label, MAX, d.label);

	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() : selections(0), playtime(0.0) {
	strcpy_s(performers, sizeof(performers), "none");

	label = new char[5];

	strcpy_s(label, 5, "none");
}

Cd::~Cd() {
	delete[] label;
}

void Cd::Report() const {
	std::cout << "performers: "  << performers << std::endl;
	std::cout << "lable: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "play time: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d) {
	if (this == &d) {
		return *this;
	}

	strcpy_s(performers, sizeof(performers), d.performers);

	delete[] label;
	label = new char[MAX];

	strcpy_s(label, MAX, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}

