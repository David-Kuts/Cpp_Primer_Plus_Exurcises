// cd.h
#pragma once

class Cd {
public:
	Cd(const char* s1, const char* s2, int n, double x);
	//Cd(const Cd & d);
	Cd();
	virtual ~Cd() {}
	virtual void Report() const;
	//Cd & operator=(const Cd & d);
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;

};