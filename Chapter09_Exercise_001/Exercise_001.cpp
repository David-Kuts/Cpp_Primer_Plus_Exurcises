// Exercise_001.cpp
#include <iostream>
#include "golf.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	golf g1, g2, g3, g4, g5, g6, g7;
	g1 = g2 = g3 = g4 = g5 = g6 = g7 = {};
	golf golfArray[] = { g1, g2, g3, g4 };

	for (int i = 0; i < sizeof(golfArray) / sizeof(golfArray[0]); i++) {
		cout << "Enter info for #" << i + 1 << ": " << endl;
		
		if (setgolf(golfArray[i]) == '\0') {
			break;
		}
	}

	for (int i = 0; i < sizeof(golfArray) / sizeof(golfArray[0]); i++) {
		cout << "#" << i + 1 << ": ";
		showgolf(golfArray[i]);
	}

	setgolf(g5, " Marry Jane", 0);
	setgolf(g6, " Pitter Parker", 0);
	setgolf(g7, " Spider-Man", 0);

	showgolf(g5);
	showgolf(g6);
	showgolf(g7);

	handicap(g5, 50);
	handicap(g6, 30);

	showgolf(g5);
	showgolf(g6);
	showgolf(g7);


	return 0;
}