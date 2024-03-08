// port.cpp
#include <iostream>
#include <cstring>
#include "port.h"

Port::Port(const char* br, const char* st, int b) : bottles(b) {
	brand = new char[MAX];

	strcpy_s(brand, MAX, br);
	strcpy_s(style, MAX, st);
}

Port::Port(const Port& p) : bottles(p.bottles) {
	brand = new char[MAX];

	strcpy_s(brand, MAX, p.brand);
	strcpy_s(style, MAX, p.style);
}

Port& Port::operator=(const Port& p) {
	if (this == &p) {
		return *this;
	}

	delete[] brand;
	brand = new char[MAX];

	strcpy_s(brand, MAX, p.brand);
	strcpy_s(style, MAX, p.style);
	bottles = p.bottles;

	return *this;
}

Port& Port::operator+=(int b) {
	bottles += b;

	return *this;
}

Port& Port::operator-=(int b) {
	bottles -= b;

	if (bottles < 0) {
		bottles = 0;
	}

	return *this;
}

void Port::Show() const {
	std::cout << "Brand: " << brand << std::endl;
	std::cout << "Kind: " << style << std::endl;
	std::cout << "Bottles: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p) {
	os << "Brand: " << p.brand << ", Kind: " << p.style << ", Bottles: " << p.bottles;

	return os;
}

VintagePort::VintagePort(const char* nn, int y, const char* br, const char* st, int b) :Port(br, st, b), year(y) {
	nickname = new char[MAX];

	strcpy_s(nickname, MAX, nn);
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp), year(vp.year) {
	nickname = new char[MAX];

	strcpy_s(nickname, MAX, vp.nickname);
}

VintagePort& VintagePort::operator=(const VintagePort& vp) {
	if (this == &vp) {
		return *this;
	}

	Port::operator=(vp);

	delete[] nickname;
	nickname = new char[MAX];

	strcpy_s(nickname, MAX, vp.nickname);
	year = vp.year;

	return *this;
}

void VintagePort::Show() const {
	Port::Show();
	std::cout << "Year: " << year << std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp) {
	os << dynamic_cast<const Port&>(vp);
	os << ", Year: " << vp.year;

	return os;
}