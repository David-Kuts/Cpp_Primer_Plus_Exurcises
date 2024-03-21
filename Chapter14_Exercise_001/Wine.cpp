// Wine.cpp
#include <iostream>
#include "Wine.h"

Wine::Wine(const char* lable, int yearsQuantity, const int years[], const int bottles[]) : label(lable), yearsQuantity(yearsQuantity), data(ArrayInt(years, yearsQuantity), ArrayInt(bottles, yearsQuantity)) {}

Wine::Wine(const char* lable, int yearsQuantity) : label(lable), yearsQuantity(yearsQuantity) {}

void Wine::getBottles() {
	ArrayInt years(yearsQuantity), bottles(yearsQuantity);
    std::cout << "Enter " << label << " data for " << yearsQuantity << " year(s):" << std::endl;
    for (int i = 0; i < yearsQuantity; ++i) {
        std::cout << "Enter year: ";
        std::cin >> years[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> bottles[i];
    }
    data = PairArray(years, bottles);
}

const std::string& Wine::getLabel() const {
	return label;
}

int Wine::sum() {
	return data.getSecondValue().sum();
}

void Wine::show() const {
    std::cout << "Wine: " << label << std::endl;
    std::cout << "\tYear\tBottles" << std::endl;
    for (int i = 0; i < yearsQuantity; ++i) {
        std::cout << '\t' << data.getFirstValue()[i] << '\t' << data.getSecondValue()[i] << std::endl;
    }
}
