// Exercise_004.cpp
#include "stack.h"
int main()
{
	Stack s1;
	Stack s2(3);

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);

	s2.push(11);
	s2.push(22);
	s2.push(33);

	s1.display();
	s2.display();

	Stack s3 = s1;
	Stack s4(s2);

	s3.display();
	s4.display();

	return 0;
}