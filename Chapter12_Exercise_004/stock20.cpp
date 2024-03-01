// stack.cpp -- Stack member functions
#include <iostream>
#include <cctype>
#include "stack.h"

//Stack::Stack() : pitems(nullptr), size(1), top(0)
//{
//	pitems = new Item[size];
//	pitems[0] = 0;
//}

Stack::Stack(int n)
{
	if (n > MAX)
	{
		size = MAX;
	}
	else
	{
		size = n;
	}

	top = 0;

	pitems = new Item[size];
}

Stack::Stack(const Stack& st)
{
	pitems = new Item[st.size];

	for (int i = 0; i < st.size; i++)
	{
		pitems[i] = st.pitems[i];
	}

	size = st.size;
	top = st.top;
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item& item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		return false;
	}
}

void Stack::display() const
{
	for (int i = 0; i < top; i++)
	{
		std::cout << pitems[i] << ' ';
	}
	std::cout << std::endl;
}

Stack& Stack::operator=(const Stack& st)
{
	if (this == &st)
	{
		return *this;
	}

	size = st.size;
	top = st.top;

	delete[] pitems;

	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}

	return *this;
}

void makeDiolog(Stack& st)
{
	char ch;
	unsigned long po;
	std::cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': std::cout << "Enter a PO number to add: ";
			std::cin >> po;
			if (st.isfull())
				std::cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p': if (st.isempty())
			std::cout << "stack already empty\n";
				else
		{
			st.pop(po);
			std::cout << "PO #" << po << " popped\n";
		}
				break;
		}
		std::cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	std::cin.ignore();
}