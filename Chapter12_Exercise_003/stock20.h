// stock20.h -- augmented version
#pragma once

#include <iostream>
#include <string>

class Stock
{
private:
	static constexpr int MAX_LEGTH = 49;
	char* company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock();
	Stock(const char* co, long n = 0, double pr = 0.0);
	~Stock();

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	const Stock& topval(const Stock& s) const;

	friend std::ostream& operator<<(std::ostream& os, const Stock& st);
};
