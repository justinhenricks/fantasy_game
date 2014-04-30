#pragma once
#include "Creature.h"

class Demon : public Creature{
private:
	string getSpecies();
public:
	Demon(int, int);
	int getDamage();
};