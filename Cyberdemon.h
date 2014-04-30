#pragma once
#include "Demon.h"

class Cyberdemon : public Demon{
private:
	string getSpecies();
public:
	Cyberdemon(int,int);
	int getDamage();
};