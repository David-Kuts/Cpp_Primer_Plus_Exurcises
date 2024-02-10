//Exercise_003.cpp
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

struct Chaff {
	char dross[20];
	int slag;
};

char buffer[48];

int main() {
	Chaff* p_arr = new (buffer) Chaff[2];

	strcpy_s(p_arr[0].dross, 20, "Some string");
	p_arr[0].slag = 10;
	strcpy_s(p_arr[1].dross, 20, "A new string");
	p_arr[1].slag = 20;

	for (int i = 0; i < 2; i++) {
		cout << "p_arr" << '[' << i << ']' << " adress: " << &p_arr[i] << ' ' << p_arr[i].dross << ' ' << p_arr[i].slag << endl;
	}

	p_arr = new Chaff[2];

	strcpy_s(p_arr[0].dross, 20, "Some line");
	p_arr[0].slag = 30;
	strcpy_s(p_arr[1].dross, 20, "A new line");
	p_arr[1].slag = 40;

	for (int i = 0; i < 2; i++) {
		cout << "p_arr" << '[' << i << ']' << " adress: " << &p_arr[i] << ' ' << p_arr[i].dross << ' ' << p_arr[i].slag << endl;
	}

	delete[] p_arr;
	return 0;
}