// classic.cpp
#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char* mc, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x) {
	strcpy_s(mainComposition, sizeof(mainComposition), mc);
}

Classic::Classic() : Cd() {
	strcpy_s(mainComposition, sizeof(mainComposition), "none");
}

void Classic::Report() const {
	Cd::Report();
	std::cout << "main composition: " << mainComposition << std::endl;
}
