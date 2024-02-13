#include "BankAccount.h"

BankAccount::BankAccount() {
	name = "none";
	accountNumber = "none";
	balance = 0;
}
BankAccount::BankAccount(const string& n, const string& a) {
	name = n;
	accountNumber = a;
	balance = 0;
}

BankAccount::BankAccount(const string& n, const string& a, unsigned int b) {
	name = n;
	accountNumber = a;
	balance = b;
}

