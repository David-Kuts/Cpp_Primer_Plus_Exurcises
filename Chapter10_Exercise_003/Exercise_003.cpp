// Exercise_003
#include <iostream>
#include "Golf.h"

int main() {
	Golf g1, g2, g3, g4, g5, g6, g7;
	g1 = g2 = g3 = g4 = g5 = g6 = g7 = {};
	Golf golfArray[] = { g1, g2, g3, g4 };

	for (int i = 0; i < sizeof(golfArray) / sizeof(golfArray[0]); i++) {
		std::cout << "Enter info for #" << i + 1 << ": " << std::endl;
		Golf temp;
		golfArray[i] = temp.setgolf();
		if (golfArray[i].getFullName()[0] == '\0') {
			break;
		}
	}

	for (int i = 0; i < sizeof(golfArray) / sizeof(golfArray[0]); i++) {
		std::cout << "#" << i + 1 << ": ";
		golfArray[i].showgolf();
	}

	g5 = Golf("Marry Jane", 0);
	g6 = Golf("Pitter Parker", 0);
	g7 = Golf("Spider-Man", 0);

	g5.showgolf();
	g6.showgolf();
	g7.showgolf();

	g5.f_handicap(50);
	g6.f_handicap(30);

	g5.showgolf();
	g6.showgolf();
	g7.showgolf();


	return 0;
}