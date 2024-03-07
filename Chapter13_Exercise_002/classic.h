// classic.h
#pragma once
#include "cd.h"

class Classic : public Cd {
public:
	Classic(const char* mc, const char* s1, const char* s2, int n, double x);
	Classic(const Classic& c);
	Classic();
	~Classic();

	void Report() const;
	Classic& operator=(const Classic& d);
private:
	char* mainComposition;
};