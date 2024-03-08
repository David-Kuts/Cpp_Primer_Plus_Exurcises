// abstract.cpp
#include "abstract.h"
#include <cstring>

baseDMA::baseDMA(const char* l, int r) {
	label = new char[MAX];
	strcpy_s(label, MAX, l);

	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs) {
	label = new char[MAX];
	strcpy_s(label, MAX, rs.label);

	rating = rs.rating;
}

baseDMA::~baseDMA() {
	delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs) {
	if (this == &rs) {
		return *this;
	}

	delete[] label;
	label = new char[MAX];
	strcpy_s(label, MAX, rs.label);

	rating = rs.rating;

	return *this;
}
std::ostream& operator<<(std::ostream& os, const baseDMA& rs) {
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;

	return os;
}
void baseDMA::view() const {
	std::cout << "Label: " << label << std::endl;
	std::cout << "Rating: " << rating << std::endl;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char* c, const char* l, int r) : baseDMA(l, r) {
	strcpy_s(color, 39, c);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs) : baseDMA(rs) {
	strcpy_s(color, COL_LEN - 1, c);
	color[COL_LEN - 1] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
	os << (const baseDMA&)ls;
	os << "Color: " << ls.color << std::endl;

	return os;
}

void lacksDMA::view() const {
	baseDMA::view();
	std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char* s, const char* l, int r) : baseDMA(l, r) {
	style = new char[MAX];
	strcpy_s(style, MAX, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs) : baseDMA(rs) {
	style = new char[MAX];
	strcpy_s(style, MAX, s);
}

hasDMA::hasDMA(const hasDMA& hs) : baseDMA(hs) {
	style = new char[MAX];
	strcpy_s(style, MAX, hs.style);
}

hasDMA::~hasDMA() {
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
	if (this == &hs) {
		return *this;
	}

	baseDMA::operator=(hs);

	delete[] style;
	style = new char[MAX];
	strcpy_s(style, MAX, hs.style);

	return *this;
}
std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
	os << (const baseDMA&)hs;
	os << "Style: " << hs.style << std::endl;

	return os;
}
void hasDMA::view() const {
	baseDMA::view();
	std::cout << "Style: " << style << std::endl;
}