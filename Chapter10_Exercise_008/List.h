// List.h
#pragma once
#include <string>

typedef std::string Item;


class List {
private:
	static constexpr int MAX = 5;
	Item items[MAX];
	int top;
public:
	List();
	bool isempty() const;
	bool isfull() const;
	void add(const Item& item);
	void visit(void (*pf) (Item&));
};

void makeNone(Item& it);
void display(Item& it);