// Person.h
#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Person {
private:
	static const int LIMIT = 25;
	std::string lname;
	char fname[LIMIT]; // Person’s first name
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const string& ln);
	Person(const string& ln, const char* fn);

	void Show() const { cout << "First name: " << fname << ", Last name: " << lname << endl; }
	void FormalShow() const { cout << "Last name: " << lname << ", First name: " << fname << endl; }
};