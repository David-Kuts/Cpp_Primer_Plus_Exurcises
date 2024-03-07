// classic.cpp
#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char* mc, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	mainComposition = new char[MAX];
	strcpy_s(mainComposition, MAX, mc);
}

Classic::Classic(const Classic& c) : Cd(c){
	mainComposition = new char[MAX];
	strcpy_s(mainComposition, MAX, c.mainComposition);
}

Classic::Classic() : Cd() {
	mainComposition = new char[5];
	strcpy_s(mainComposition, 5, "none");
}

Classic::~Classic() {
	delete[] mainComposition;
}

void Classic::Report() const {
	Cd::Report();
	std::cout << "main composition: " << mainComposition << std::endl;
}

Classic& Classic::operator=(const Classic& d) {
	if (this == &d) {
		return *this;
	}

	Cd::operator=(d);

	delete[] mainComposition;
	mainComposition = new char[MAX];

	strcpy_s(mainComposition, MAX, d.mainComposition);

	return *this;
}
