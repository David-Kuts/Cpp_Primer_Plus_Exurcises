// Wine.cpp
#include <iostream>
#include "Wine.h"

Wine::Wine(const char* lable, int yearsQuantity, const int years[], const int bottles[]) : std::string(lable), yearsQuantity(yearsQuantity), PairArray(ArrayInt(years, yearsQuantity), ArrayInt(bottles, yearsQuantity)) {}

Wine::Wine(const char* lable, int yearsQuantity) : std::string(lable), yearsQuantity(yearsQuantity) {}

void Wine::getBottles() {
    ArrayInt years(yearsQuantity), bottles(yearsQuantity);
    std::cout << "Enter " << std::string(*this) << " data for " << yearsQuantity << " year(s):" << std::endl;
    for (int i = 0; i < yearsQuantity; ++i) {
        std::cout << "Enter year: ";
        std::cin >> years[i];
        std::cout << "Enter bottles for that year: ";
        std::cin >> bottles[i];
    }
    PairArray::operator=(PairArray(years, bottles));
}

const std::string& Wine::getLabel() const {
    return *this;
}

int Wine::sum() const {
    return PairArray::getSecondValue().sum();
}

void Wine::show() const {
    std::cout << "Wine: " << std::string(*this) << std::endl;
    std::cout << "\tYear\tBottles" << std::endl;
    for (int i = 0; i < yearsQuantity; ++i) {
        std::cout << '\t' << PairArray::getFirstValue()[i] << '\t' << PairArray::getSecondValue()[i] << std::endl;
    }
}
