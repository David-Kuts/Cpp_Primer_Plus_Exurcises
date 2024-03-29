// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt {
public: enum MODE { STONES, INT_POUNDS, FLOAT_POUNDS };
private:
	static constexpr int Lbs_per_stn = 14; // pounds per stone
	int stone; // whole stones
	double pds_left; // fractional pounds
	double pounds; // entire weight in pounds
	MODE mode;
public:
	Stonewt(double lbs); // constructor for double pounds
	Stonewt(int stn, double lbs); // constructor for stone, lbs
	Stonewt(); // default constructor
	~Stonewt();

	void setMode(MODE m);

	Stonewt operator+(const Stonewt& st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(double n) const;

	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
};
#endif