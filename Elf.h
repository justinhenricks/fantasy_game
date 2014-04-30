#pragma once
#include "Creature.h"

class Elf : public Creature{
private:
	string getSpecies();
public:
	Elf(int, int);
	int getDamage();
};