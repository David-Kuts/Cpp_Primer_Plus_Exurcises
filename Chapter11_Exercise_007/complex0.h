// complex0.h
#pragma once
#include <iostream>

class Complex {
private:
	double realPart;
	double imaginaryPart;
public:
	Complex() : realPart(0.0), imaginaryPart(0.0) {}
	Complex(double rp, double ip) : realPart(rp), imaginaryPart(ip) {}
	~Complex() {}

	Complex operator+(const Complex& c) const;
	Complex operator-(const Complex& c) const;
	Complex operator*(const Complex& c) const;
	Complex operator~() const;

	void setRealPart(double n) { realPart = n; }
	void setImaginaryPart(double n) { imaginaryPart = n; }
	
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
	friend std::istream& operator>>(std::istream& os, Complex& c);
	friend Complex operator*(double real, const Complex& c);


};