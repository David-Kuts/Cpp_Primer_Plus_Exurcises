// Exercise_001.cpp
#include "Cow.h"

int main()
{
	Cow cow1;
	Cow cow2("My-My", "Eating", 50.0);
	Cow cow3("Dolly", "Mying", 100.0);
	Cow cow4(cow2);
	cow1 = cow1;
	Cow cow5 = cow3;

	Cow cows[] = { cow1, cow2, cow3, cow4, cow5 };

	for (int i = 0; i < sizeof(cows) / sizeof(cows[0]); i++)
	{
		cows[i].ShowCow();
	}

	return 0;
}