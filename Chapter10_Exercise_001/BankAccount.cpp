#include "BankAccount.h"

BankAccount::BankAccount() {
	name = "none";
	accountNumber = "none";
	balance = 0;
}
BankAccount::BankAccount(string n, string a) {
	name = n;
	accountNumber = a;
	balance = 0;
}

BankAccount::BankAccount(string n, string a, unsigned int b) {
	name = n;
	accountNumber = a;
	balance = b;
}

