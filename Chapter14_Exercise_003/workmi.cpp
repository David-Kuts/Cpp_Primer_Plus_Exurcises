// workermi.cpp
#include "workermi.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Worker::~Worker() {}

void Worker::Show() const {
	std::cout << "Name: " << fullname << std::endl;
	std::cout << "Employee ID: " << id << std::endl;
}

void Worker::Set() {
	std::cout << "Enter worker's name: ";
	getline(cin, fullname);
	std::cout << "Enter worker's ID: ";
	std::cin >> id;

	while (cin.get() != '\n') {
		continue;
	}
}