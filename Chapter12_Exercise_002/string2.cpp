// string2.cpp -- String class methods
#include <cstring> // string.h for some
#include <iostream>
#include "string2.h" // includes <iostream>
int String::num_strings = 0;

void String::stringlow()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
}

void String::stringup()
{
	for (int i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
}

int String::has(char ch) const
{
	int count = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}
	return count;
}

String::String(const char* st)
{
	len = strlen(st);

	str = new char[len + 1];
	strcpy_s(str, len + 1, st);

	num_strings++;
}

String::String()
{
	len = 4;

	str = new char[1];
	str[0] = '\0';

	num_strings++;
}

String::String(const String& st)
{
	num_strings++;

	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String& String::operator=(const String& st)
{
	if (this == &st)
	{
		return *this;
	}

	len = st.len;

	delete[] str;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);

	return *this;
}

String& String::operator=(const char* s)
{
	len = strlen(s);

	delete[] str;
	str = new char[len + 1];
	strcpy_s(str, len +1, s);

	return *this;
}

String String::operator+(const String& st) const
{
	String tmp;

	tmp.len = len + st.len;

	delete[] tmp.str;
	tmp.str = new char[tmp.len + 1];

	strcpy_s(tmp.str, len + 1, str);
	strcat_s(tmp.str, tmp.len + 1, st.str);

	return tmp;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

String operator+(const char* st1, const String& st2)
{
	String tmp;

	tmp.len = strlen(st1) + st2.len;

	delete[] tmp.str;
	tmp.str = new char[tmp.len + 1];

	strcpy_s(tmp.str, tmp.len + 1, st1);
	strcat_s(tmp.str, tmp.len + 1, st2.str);

	return tmp;
}

std::ostream& operator<<(std::ostream& os, const String& st)
{
	os << st.str;
	return os;
}

std::istream& operator>>(std::istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}