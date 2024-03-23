// gunslinger.h
#pragma once
#include "person.h"

class Gunslinger :virtual public Person {
public:
	Gunslinger(const std::string firstName = "none", const std::string lastName = "none", double drawTime = 0.0, int notches = 0) : Person(firstName, lastName), drawTime(drawTime), notches(notches) {}
	// Gunslinger(const Person& person, double drawTime = 0.0, int notches = 0) : Person(person), drawTime(drawTime), notches(notches) {}
	virtual ~Gunslinger() = default;

	double draw() const { return drawTime; };
	virtual void show() const override {
		Person::show();
		std::cout << "Draw time: " << drawTime << ", Notches: " << notches << std::endl;
	}
private:
	double drawTime;
	int notches;
};