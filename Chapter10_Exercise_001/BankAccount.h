// BankAccount.h
#pragma once

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
	BankAccount(const string& n, const string& a);
	BankAccount(const string& n, const string& a, unsigned int b);

	void show() const { cout << "Name: " << name << ", Account number: " << accountNumber << ", balance: " << balance << endl; }
	void add(unsigned int m) { balance += m; }
	void withdraw(unsigned int m) { balance -= m; }
};

