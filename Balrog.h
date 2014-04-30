#pragma once
#include "Demon.h"

class Balrog : public Demon{
private:
	string getSpecies();
public:
	Balrog(int, int);
	int getDamage();
};