// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / LBS_PER_STN; // integer division
	pds_left = int(lbs) % LBS_PER_STN + lbs - int(lbs);
	pounds = lbs;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * LBS_PER_STN + lbs;
}
Stonewt::Stonewt() // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt() {
}

void Stonewt::show_stn() const {
	cout << stone << " stone, " << pds_left << " pounds\n";
}

bool Stonewt::operator<=(const Stonewt& st) const {
	return stone <= st.stone;
}

bool Stonewt::operator<(const Stonewt& st) const {
	return stone < st.stone;
}

bool Stonewt::operator>(const Stonewt& st) const {
	return stone > st.stone;
}

bool Stonewt::operator>=(const Stonewt& st) const {
	return stone >= st.stone;
}

bool Stonewt::operator!=(const Stonewt& st) const {
	return stone != st.stone;
}

bool Stonewt::operator==(const Stonewt& st) const {
	return stone == st.stone;
}

void Stonewt::show_lbs() const {
	cout << pounds << " pounds\n";
}