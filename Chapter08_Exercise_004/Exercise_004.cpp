// Exercise_004.cpp
#include <iostream>
#include <cstring> // for strlen(), strcpy()

using namespace std;

struct stringy {
	char* str;
	int ct;
};

void set(stringy& s, const char* ar);
void show(const stringy& s, int n = 1);
void show(const char* s, int n = 1);

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	delete[] beany.str;
	return 0;
}

void set(stringy& s, const char* ar) {
	s.ct = strlen(ar);
	s.str = new char[s.ct + 1];
	strcpy_s(s.str, s.ct + 1, ar);
}

void show(const stringy& s, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << s.str << std::endl;
	}
}

void show(const char* s, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << s << std::endl;
	}
}
