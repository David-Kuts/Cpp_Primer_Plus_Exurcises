#pragma once

#include <iostream>

class Plorg {
private:
	static constexpr int MAX_LEN = 19;
	char name[MAX_LEN + 1];
	int ci;
public:
	Plorg(const char* n = "Plorga", int ci = 50);

	void change_ci(int newIndex) { ci = newIndex; }
	void display() const { std::cout << "Name: " << name << ", CI: " << ci << std::endl; };
};