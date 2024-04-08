// Exercise_001.cpp
#include <iostream>
#include "tv.h"

int main() {
    Tv s42;
    std::cout << "Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    std::cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    Remote grey;

    std::cout << "\nTrying to use remote when TV is off:\n";
    grey.displayMode();
    s42.toggleRemoteMode(grey);
    grey.displayMode();

    s42.onoff(); // Включаем телевизор
    std::cout << "\nUsing remote to toggle mode when TV is on:\n";
    grey.displayMode();
    s42.toggleRemoteMode(grey);
    grey.displayMode(); // Режим должен измениться на Interactive

    // Переключаем режим пульта еще раз
    s42.toggleRemoteMode(grey);
    grey.displayMode(); // Обратно в Normal
	return 0;
}