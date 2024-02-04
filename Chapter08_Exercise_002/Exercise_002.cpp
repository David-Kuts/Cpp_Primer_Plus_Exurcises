// Exercise_002.cpp
#include <iostream>
#include <cstring>

constexpr int SIZE = 50;

struct CandyBar {
	char name[SIZE];
	double weight;
	int calories;
};

void set(CandyBar& cb, const char* ch = "Millennium Munch", const double w = 2.85, const int c = 350);
void show(const CandyBar& cb);

int main() {
	CandyBar c1, c2, c3;

	set(c1);
	set(c2, "Candy swite", 12.4, 200);
	set(c3, "Candy Andy", 15.2, 300);

	show(c1);
	show(c2);
	show(c3);

	return 0;
}

void set(CandyBar& cb, const char* ch, const double w, const int c) {
	strcpy_s(cb.name, ch);
	cb.weight = w;
	cb.calories = c;
}

void show(const CandyBar& cb) {
	std::cout << cb.name << ' ' << cb.weight << ' ' << cb.calories << std::endl;
}
