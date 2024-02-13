// Person.cpp
#include <cstring>
#include "Person.h"


Person::Person(const string& ln) {
	lname = ln;
	strcpy_s(fname, 7, "Heyyou");
}

Person::Person(const string& ln, const char* fn) {
	lname = ln;
	strcpy_s(fname, LIMIT, fn);
}
