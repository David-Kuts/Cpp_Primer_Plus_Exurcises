#include <iostream>
#include "List.h"

List::List() {
	for (int i = 0; i < MAX; i++) {
		items[i] = "No name";
	}

	top = 0;
}

bool List::isempty() const {
	return top == 0;
}

bool List::isfull() const {
	return top == MAX;
}

void List::add(const Item& item) {
	if (top < MAX) {
		items[top++] = item;
	}
}

void List::visit(void(*pf)(Item&)) {
	for (int i = 0; i < MAX; i++) {
		pf(items[i]);
	}
}

void makeNone(Item& it) {
	it = "none";
}

void display(Item& it) {
	std::cout << it << std::endl;
}
