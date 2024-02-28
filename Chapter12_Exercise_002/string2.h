// string2.h
#pragma once

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static constexpr int CINLIM = 80;
public:
	String();
	String(const char* s);
	String(const String&);
	~String();

	String& operator=(const String& st);
	String& operator=(const char* st);
	String operator+(const String& st) const;

	friend bool operator==(const String& st, const String& st2);
	friend String operator+(const char* st1, const String& st2);
	friend std::ostream& operator<<(std::ostream& os, const String& st);
	friend std::istream& operator>>(std::istream& is, String& st);

	void stringlow();
	void stringup();
	int has(char ch) const;
	int length() const { return len; }
};