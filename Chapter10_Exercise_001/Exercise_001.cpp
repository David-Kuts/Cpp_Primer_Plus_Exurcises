// Exercise_001.cpp
#include <iostream>
#include "BankAccount.h"

int main() {
	BankAccount client1;
	BankAccount client2("Ted Wilson", "#0002");
	BankAccount client3("Tom Patison", "#0003", 1000);
	BankAccount* p_client4 = new BankAccount{"Tim Aricson", "#0004", 300};


	client1.show();
	client2.show();
	client3.show();
	p_client4->show();

	client2.add(100);
	client3.withdraw(200);
	p_client4->add(300);

	client1.show();
	client2.show();
	client3.show();
	p_client4->show();

	return 0;
}