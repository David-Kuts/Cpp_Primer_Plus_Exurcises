// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn; // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = STONES;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = STONES;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
	mode = STONES;
}

Stonewt::~Stonewt() {}

void Stonewt::setMode(MODE m) {
	mode = m;
}

Stonewt Stonewt::operator+(const Stonewt& st) const {

	return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& st) const {
	return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(double n) const {
	return Stonewt(pounds * n);
}

std::ostream& operator<<(std::ostream& os, const Stonewt& st) {
	switch (st.mode) {
		case Stonewt::STONES:
			os << st.stone << " stone, " << st.pds_left << " pounds";
			break;
		case Stonewt::INT_POUNDS:
			os << static_cast<int>(st.pounds);
			break;
		case Stonewt::FLOAT_POUNDS:
			os << st.pounds;
			break;
	}
	return os;
}
