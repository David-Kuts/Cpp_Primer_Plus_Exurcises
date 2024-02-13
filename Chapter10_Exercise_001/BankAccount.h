#pragma once
// BankAccount.h
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class BankAccount {
private:
	string name;
	string accountNumber;
	unsigned long balance;
public:
	BankAccount();
	BankAccount(string n, string a);
	BankAccount(string n, string a, unsigned int b);

	inline void show() const { cout << "Name: " << name << ", Account number: " << accountNumber << ", balance: " << balance << endl; }
	inline void add(unsigned int m) { balance += m; }
	inline void withdraw(unsigned int m) { balance -= m; }
};

