// cd.h
#pragma once

class Cd {
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();

	virtual void Report() const;

	Cd& operator=(const Cd& d);
protected:
	static constexpr int MAX = 80;
private:
	char performers[50];
	char* label;
	int selections;
	double playtime;

};