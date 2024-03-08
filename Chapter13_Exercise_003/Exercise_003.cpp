// Exercise_003.cpp
#include <iostream>
#include <string>
#include "abstract.h"

int main() {
    constexpr int SIZE = 3;
    DMA* collection[SIZE];

    collection[0] = new baseDMA("Label1", 5);
    collection[1] = new lacksDMA("Red", "Label2", 3);
    collection[2] = new hasDMA("Stylish", "Label3", 7);

    for (int i = 0; i < SIZE; ++i) {
        collection[i]->view();
    }

    // Очистка памяти
    for (int i = 0; i < SIZE; ++i) {
        delete collection[i];
    }

    return 0;
}