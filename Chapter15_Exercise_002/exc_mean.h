#pragma once
// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <string>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
	bad_hmean(const std::string& s = "hmean invalid argument: a = -b") : logic_error(s) {}
};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean(const std::string& s = "gmean() arguments should be >= 0") : logic_error(s){}
};