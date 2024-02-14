// Exercise_005.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
	Stack st;
	char ch;
	Customer po;
	long double totalPayment = 0.0L;

	std::cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (std::cin >> ch && toupper(ch) != 'Q') {
		while (std::cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			std::cout << '\a';
			continue;
		}
		switch (ch) {
			case 'A':
			case 'a':
				setCustomer(po);
				if (st.isfull())
					std::cout << "stack already full\n";
				else
					st.push(po);
				break;
			case 'P':
			case 'p': if (st.isempty())
				std::cout << "stack already empty\n";
					else {
				st.pop(po);
				totalPayment += po.payment;
				std::cout << "Total payment: " << totalPayment << std::endl;
				displayCustomer(po);
			}
					break;
		}
		std::cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	std::cout << "Bye\n";

	return 0;
}