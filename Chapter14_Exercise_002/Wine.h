// Wine.h
#pragma once
#include <string>
#include "Pair.h"

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray {
public:
	Wine(const char* lable, int yearsQuantity, const int years[], const int bottles[]);
	Wine(const char* lable, int yearsQuantity);
	void getBottles();
	const std::string& getLabel() const;
	int sum() const;
	void show() const;
private:
	// std::string label;
	// PairArray data;
	int yearsQuantity;
};