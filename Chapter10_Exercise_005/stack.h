// stack.h -- class definition for the stack ADT
#pragma once

struct Customer {
	static constexpr int SIZE = 10;
	char fullname[SIZE];
	double payment;
};
void setCustomer(Customer& po);
void displayCustomer(const Customer& po);

typedef Customer Item;

class Stack {
private:
	static constexpr int MAX = 10;
	Item items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
};