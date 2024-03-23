// poker_player.h
#pragma once
#include <random>
#include "person.h"

class PokerPlayer : virtual public Person {
public:
	PokerPlayer(const std::string firstName = "none", const std::string lastName = "none") : Person(firstName, lastName) {}
	// PokerPlayer(const Person person) : Person(person) {}
	virtual ~PokerPlayer() = default;

	int draw() const { return rand() % 52 + 1; }
	void show() const override { Person::show(); }
};