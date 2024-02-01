// Exercise_003.cpp
#include <iostream>

struct Box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(Box b1);
void setVolume(Box* b1);

int main() {
	Box smallBox = { "Ted Emberson", 10.0F, 5.0F, 4.0F, };

	setVolume(&smallBox);
	show(smallBox);

	return 0;
}

void show(Box b1) {
	std::cout << "Maker: " << b1.maker << '\t' << " h: " << b1.height << " w: " << b1.width << " l: " << b1.length << " v: " << b1.volume << std::endl;
}

void setVolume(Box* b1) {
	b1->volume = b1->height * b1->length * b1->width;
}
