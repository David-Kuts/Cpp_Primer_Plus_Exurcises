// Move.cpp
#include "Move.h"

Move Move::add(const Move& m) const {
	Move temp(x + m.x, y + m.y);

	return temp;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}
