// Exercise_003
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"
int main() {
	using namespace std;
	using VECTOR::Vector;

	srand(time(0)); // seed random-number generator

	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int attemps;

	cout << "Enter a number of attempes: ";
	cin >> attemps;

	int	maxSteps = 0;
	int minSteps = 0;
	int stepsSum = 0;
	double stepAverage;
	double;
	bool isFirstPass = true;

	cout << "Enter target distance (q to quit): ";

	for (int i = 0; i < attemps; i++) {

		if (cin >> target) {
			cout << "Enter step length: ";

			if (!(cin >> dstep)) {
				break;
			}

			while (result.magval() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}

			if (isFirstPass) {
				maxSteps = steps;
				minSteps = steps;
			}

			isFirstPass = false;

			if (maxSteps < steps) {
				maxSteps = steps;
			}

			if (minSteps > steps) {
				minSteps = steps;
			}

			stepsSum += steps;
			stepAverage = stepsSum / (i + 1);

			cout << "For " << attemps << " attemp(s) maxSteps is " << maxSteps << ", minSteps is " << minSteps << ", stepAverage is " << stepAverage << endl;

			steps = 0;
			result.reset(0.0, 0.0);

			if (!(i + 1 == attemps)) {
				cout << "Enter target distance (q to quit): ";
			}
		} else {
			break;
		}
	}

	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n') {
		continue;
	}




	return 0;
}