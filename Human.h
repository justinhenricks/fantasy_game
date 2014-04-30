#pragma once
#include "Creature.h"

class Human : public Creature{
private:
	string getSpecies(); //gets type of species

public:
	Human();
	Human(int, int);
	int getDamage();
};