// Exercise_006.cpp
#include "Move.h"

int main() {
	Move m1, m2(2.2, 3.3), m3(4.4), m4 = m2.add(m3);

	m1.showmove();
	m2.showmove();
	m3.showmove();
	m4.showmove();

	m2.reset(1.1);
	m3.reset(6.6, 5.5);

	m2.showmove();
	m3.showmove();

	return 0;
}