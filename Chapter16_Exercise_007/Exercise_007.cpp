// Exercise_007.cpp
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

std::vector<int> lotto(int tatalNumbers, int numPicks) {
	std::vector<int> numbers;

	for (int i = 1; i <= tatalNumbers; ++i) {
		numbers.push_back(i);
	}
	
	std::random_device rd;
	std::mt19937 generator(rd());

	std::shuffle(numbers.begin(), numbers.end(), generator);

	std::vector<int> result(numbers.begin(), numbers.begin() + numPicks);

	std::sort(result.begin(), result.end());

	return result;
}

int main() {
	std::vector<int> winners;
	winners = lotto(51, 6);

	std::cout << "Lottery winners: ";
	for (int winner : winners) {
		std::cout << winner << " ";
	}
	std::cout << std::endl;

	return 0;
}