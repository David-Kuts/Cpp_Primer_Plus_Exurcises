// bad_dude.h
#pragma once
#include "gunslinger.h"
#include "poker_player.h"

class BadDude : public Gunslinger, public PokerPlayer {
public:
	BadDude(const std::string firstName = "none", const std::string lastName = "none", double drawTime = 0.0, int notches = 0) : Person(firstName, lastName), Gunslinger(firstName, lastName, drawTime, notches), PokerPlayer(firstName, lastName) {}
	// BadDude(const Person& person, const Gunslinger& gunslinger) : Person(person), Gunslinger(gunslinger), PokerPlayer() {}

	double gDraw() const { return Gunslinger::draw(); }
	int cDraw() const { return PokerPlayer::draw(); }
	void show() const override {
		Gunslinger::show();
	}
};