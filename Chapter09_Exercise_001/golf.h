#pragma once
// golf.h

constexpr int LENGHT = 40;

struct golf {
	char fullname[LENGHT];
	int handicap;
};

void setgolf(golf& g, const char* name, int hc);
int setgolf(golf& g);
void handicap(golf& g, int hc);
void showgolf(const golf& g);