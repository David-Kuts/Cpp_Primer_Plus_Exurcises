// stack.cpp -- Stack member functions
#include <iostream>
#include <cstring>
#include "stack.h"

Stack::Stack() {
	for (int i = 0; i < MAX; i++) {
		strcpy_s(items[i].fullname, Customer::SIZE, "none");
		items[i].fullname[Customer::SIZE - 1] = '\0';
		items[i].payment = 0.0;
	}

	top = 0;
}

bool Stack::isempty() const {
	return top == 0;
}
bool Stack::isfull() const {
	return top == MAX;
}
bool Stack::push(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
		return true;
	} else
		return false;
}
bool Stack::pop(Item& item) {
	if (top > 0) {
		item = items[--top];
		return true;
	} else
		return false;
}

void setCustomer(Customer& po) {
	std::cout << "Enter a customer name: ";
	std::cin.getline(po.fullname, po.SIZE);

	std::cout << "Enter the payment: ";
	std::cin >> po.payment;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

void displayCustomer(const Customer& po) {
	std::cout << "Customer's full name: " << po.fullname << ", payment: " << po.payment << std::endl;
}
