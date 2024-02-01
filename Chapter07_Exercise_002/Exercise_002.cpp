// Exercise_002.cpp
#include <iostream>

constexpr int SIZE = 10;

int setScore(int arr[], int size);
void showScore(int arr[], int size);
double getAverage(int arr[], int size);


int main() {
	int gameScores[SIZE] = {};
	int actualSize = setScore(gameScores, SIZE);

	showScore(gameScores, actualSize);
	std::cout << "Average: " << getAverage(gameScores, actualSize);

	return 0;
}

int setScore(int arr[], int size) {
	int endIndex = 0;
	for (int i = 0; i < size; i++) {
		std::cout << "Enter the score of the game (q to quit): ";

		int tmp;

		if (std::cin >> tmp) {
			arr[i] = tmp;
			endIndex = i + 1;

		} else {
			return endIndex;
		}
	}
	return endIndex;
}

void showScore(int arr[], int size) {
	std::cout << "Scores: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}

	std::cout << std::endl;
}

double getAverage(int arr[], int size) {
	if (size > 0) {
		double sum = 0;

		for (int i = 0; i < size; i++) {
			sum += arr[i];
		}

		return sum / size;
	} else {
		return 0;
	}

}
