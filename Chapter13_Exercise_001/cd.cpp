// dc.cpp
#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) : selections(n), playtime(x) {
	strcpy_s(performers, sizeof(performers), s1);
	strcpy_s(label, sizeof(label), s2);
}

Cd::Cd() : selections(0), playtime(0.0) {
	strcpy_s(performers, sizeof(performers), "none");
	strcpy_s(label, sizeof(label), "none");
}

void Cd::Report() const {
	std::cout << "performers: "  << performers << std::endl;
	std::cout << "lable: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "play time: " << playtime << std::endl;
}

