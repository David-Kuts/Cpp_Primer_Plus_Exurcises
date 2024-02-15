// Exercise_007.cpp
#include "Plorg.h"

int main() {
	Plorg p1, p2("Tom Croose", 10), p3 = p1;

	p1.display();
	p2.display();
	p3.display();

	p1.change_ci(20);

	p1.display();

	return 0;
}