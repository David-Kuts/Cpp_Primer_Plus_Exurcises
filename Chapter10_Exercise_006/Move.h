// Move.h
#pragma once
#include <iostream>

class Move {
private:
	double x;
	double y;
public:
	//Move() : x(0), y(0) {}
	Move(double a = 0.0, double b = 0.0) : x(a), y(b) {}

	void showmove() const { std::cout << "x = " << x << ", y = " << y << std::endl; }
	Move add(const Move& m) const;
	//double getX() const { return x; }
	//double getY() const { return y; }
	void reset(double a = 0.0, double b = 0.0);
};