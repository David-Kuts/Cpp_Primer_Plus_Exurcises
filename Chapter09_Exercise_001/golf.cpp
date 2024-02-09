// golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

using std::cout;
using std::cin;
using std::endl;

void setgolf(golf& g, const char* name, int hc) {
	strcpy_s(g.fullname, LENGHT, name);
	g.handicap = hc;
}

int setgolf(golf& g) {
	cout << "Enter a full name: ";
	cin.getline(g.fullname, LENGHT);

	if (g.fullname[0] == '\0') {
		return 0;
	}

	cout << "Enter a handicap: ";
	cin >> g.handicap;
	cin.get();

	return 1;
}

void handicap(golf& g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf& g) {
	cout << g.fullname << ' ' << g.handicap << endl;
}