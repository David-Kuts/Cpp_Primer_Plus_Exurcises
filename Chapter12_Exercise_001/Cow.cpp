#include <iostream>
#include "Cow.h"

Cow::Cow() : name(""), hobby(nullptr), weight(0.0)
{ // without this block a runtime error occurs
	hobby = new char[1];
	hobby[0] = '\0';
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy_s(name, sizeof(name), nm);		// sizof() or strlen()?

	hobby = new char[strlen(ho) + 1];
	strcpy_s(hobby, strlen(ho) + 1, ho);	// sizof() or strlen()?

	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy_s(name, sizeof(c.name), c.name);

	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);

	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
	{
		return *this;
	}

	strcpy_s(name, sizeof(name), c.name);

	delete[] hobby;

	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, strlen(c.hobby) + 1, c.hobby);

	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "name: " << name << ", hobby: " << hobby << ", weight: " << weight << std::endl;
}
