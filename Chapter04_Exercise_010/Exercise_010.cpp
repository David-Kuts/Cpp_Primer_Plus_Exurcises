// Exercise_010.cpp
#include <iostream>
#include <array>

int main() {
	std::array<double, 3> raceTime = {};

	std::cout << "Enter dash time result: ";
	std::cin >> raceTime[0];
	std::cout << "Enter dash time result: ";
	std::cin >> raceTime[1];
	std::cout << "Enter dash time result: ";
	std::cin >> raceTime[2];

	std::cout << std::endl;
	std::cout << "Race time 1: " << raceTime[0] << std::endl;
	std::cout << "Race time 2: " << raceTime[1] << std::endl;
	std::cout << "Race time 3: " << raceTime[2] << std::endl;
	std::cout << "Average time: " << (raceTime[0] + raceTime[1] + raceTime[2]) / 3 << std::endl;
	return 0;
}