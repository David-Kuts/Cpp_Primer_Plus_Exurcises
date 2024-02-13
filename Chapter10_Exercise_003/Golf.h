// Golf.h
#pragma once


struct Golf {
private:
	static constexpr int LENGHT = 40;
	char fullname[LENGHT];
	int handicap;
public:
	Golf() : fullname(""), handicap(0) {}
	Golf(const char* name, int hc);

	Golf& setgolf();
	void f_handicap(int hc) { handicap = hc; };
	void showgolf() const { std::cout << fullname << ' ' << handicap << std::endl; }
	const char* getFullName() const { return fullname; }
};

