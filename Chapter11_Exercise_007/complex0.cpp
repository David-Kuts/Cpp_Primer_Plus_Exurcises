// complex0.cpp
#include "complex0.h"

Complex Complex::operator+(const Complex& c) const {
	return Complex(realPart + c.realPart,  imaginaryPart + c.imaginaryPart);
}

Complex Complex::operator-(const Complex& c) const {
	return Complex(realPart - c.realPart, imaginaryPart - c.imaginaryPart);
}

Complex Complex::operator*(const Complex& c) const {
	return Complex((realPart * c.realPart) - (imaginaryPart * c.imaginaryPart), (realPart * c.imaginaryPart) + (imaginaryPart * c.realPart));
}

Complex Complex::operator~() const {
	return Complex(realPart, -imaginaryPart);
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
	os << '(' << c.realPart << ", " << c.imaginaryPart << "i)";

	return os;
}

std::istream& operator>>(std::istream& is,  Complex& c) {
	std::cout << "real: ";
	is >> c.realPart;
	std::cout << "imaginaryPart: ";
	is >> c.imaginaryPart;

	return is;
}

Complex operator*(double real, const Complex& c) {
	return Complex(real * c.realPart, real * c.imaginaryPart);
}
