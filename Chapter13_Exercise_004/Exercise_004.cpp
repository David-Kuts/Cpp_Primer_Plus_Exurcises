// Exercise_004.cpp
#include <iostream>
#include "port.h"

int main() {
	constexpr int SIZE = 6;
	Port* ports[6];

	ports[0] = new Port;
	ports[1] = new Port{ "Brand2", "Style2", 10 };
	ports[2] = new Port{ "Brand3", "Style3", 7 };
	ports[3] = new VintagePort;
	ports[4] = new VintagePort{ "Nickname5", 1984, "Brand5", "Style5", 2 };
	ports[5] = new VintagePort{ "Nickname6", 1953, "Brand6", "Style6", 4 };


	std::cout << *ports[0] << std::endl;
	std::cout << *ports[1] << std::endl;
	std::cout << *ports[2] << std::endl;
	std::cout << dynamic_cast<const VintagePort&> (*ports[3]) << std::endl;
	std::cout << dynamic_cast<const VintagePort&> (*ports[4]) << std::endl;
	std::cout << dynamic_cast<const VintagePort&> (*ports[5]) << std::endl;

	*ports[0] = *ports[2];
	*ports[3] = *ports[5];

	*ports[1] += 4;
	*ports[2] -= 20;

	for (int i = 0; i < SIZE; ++i) {
		ports[i]->Show();
	}

	for (int i = 0; i < SIZE; ++i) {
		delete ports[i];
	}

	return 0;
}