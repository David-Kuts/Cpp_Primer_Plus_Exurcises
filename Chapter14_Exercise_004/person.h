// person.h
#pragma once
#include <iostream>
#include<string>

class Person {
public:
	Person(const std::string firstName = "none", const std::string lastName = "none") : firstName(firstName), lastName(lastName) {}
	virtual ~Person() = default;

	virtual void show() const {
		std::cout << "Fist name: " << firstName << ", Last name: " << lastName << std::endl;
	}
private:
	std::string firstName;
	std::string lastName;
};