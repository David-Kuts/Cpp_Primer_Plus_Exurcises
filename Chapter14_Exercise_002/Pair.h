// Pair.h
#pragma once
#include <valarray>

template<class T1, class T2>
class Pair {
public:
	Pair() = default;
	Pair(const T1& vintageYear, const T2& bottlesQuantity) : vintageYear(vintageYear), bottlesQuantity(bottlesQuantity) {}

	const T1& getFirstValue() const { return vintageYear; }
	const T2& getSecondValue() const { return bottlesQuantity; }
private:
	T1 vintageYear;
	T2 bottlesQuantity;
};