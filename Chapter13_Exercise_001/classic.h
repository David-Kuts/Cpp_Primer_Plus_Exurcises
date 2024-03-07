// classic.h
#pragma once
#include "cd.h"

class Classic : public Cd {
public:
	Classic(const char* mc, const char* s1, const char* s2, int n, double x);
	Classic();

	void Report() const;
private:
	char mainComposition[80];
};