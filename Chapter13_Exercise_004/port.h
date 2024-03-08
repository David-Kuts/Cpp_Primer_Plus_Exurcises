// port.h
#pragma once
#include <iostream>

class Port {
public:
	Port(const char* br = "none", const char* st = "none", int b = 0);
	Port(const Port& p);
	virtual ~Port() { delete[] brand; }

	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator-=(int b);

	int BottleCount() const { return bottles; }
	virtual void Show() const;

	friend std::ostream& operator<<(std::ostream& os, const Port& p);
public:
	static constexpr int MAX = 20;
private:
	char* brand;
	char style[20];
	int bottles;
};

class VintagePort : public Port
{
public:
	VintagePort(const char* nn = "none", int y = 0, const char* br = "none", const char* st = "none", int b = 0);
	VintagePort(const VintagePort& vp);
	~VintagePort() { delete[] nickname; }

	VintagePort& operator=(const VintagePort& vp);

	void Show() const;

	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
private:
	char* nickname;
	int year;
};