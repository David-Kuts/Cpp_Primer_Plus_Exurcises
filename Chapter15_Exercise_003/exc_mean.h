#pragma once
// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <string>
#include <stdexcept>

class math_error : std::logic_error {
private:
	double v1;
	double v2;
	std::string func_name;
public:
	math_error(double a, double b, const std::string& fn, const std::string& msg) : logic_error(msg), v1(a), v2(b), func_name(fn) {}

	void report() const {
		std::cerr << "Error in " << func_name << " with arguments " << v1 << " and " << v2 << ": " << what() << std::endl;
	}

};

class bad_hmean : public math_error {
public:
	bad_hmean(double a, double b) : math_error(a, b, typeid(bad_hmean).name(), "invalid arguments: a = -b") {}
};

class bad_gmean : public math_error {
public:
	bad_gmean(double a, double b) : math_error(a, b, typeid(bad_gmean).name(), "arguments should be >= 0") {}
};

