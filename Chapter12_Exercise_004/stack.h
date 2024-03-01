// stack.h -- class declaration for the stack ADT
#pragma once

typedef unsigned long Item;

class Stack
{
private:
	static const int MAX = 10;
	Item* pitems;
	int size;
	int top;
public:
	//Stack();
	Stack(int n = MAX);
	Stack(const Stack& st);
	~Stack();

	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	void display() const;
	Stack& operator=(const Stack& st);
};

void makeDiolog(Stack& st);