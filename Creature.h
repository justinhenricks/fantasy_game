#pragma once
#include "stdafx.h"

class Creature {
private:
	int strength;                  //How much damage we can inflict
	int hitPoints;                 //How much damage we can sustain
public:
	Creature();                   //initialize to human, 10 strengths, 10 hit points

	Creature(int newStrength, int newHit);

	// accessor methods //
	int getStrength();
	int getHitPoints();
	virtual int getDamage() = 0;
	virtual string getSpecies() = 0;   //Returns type of species

	// mutator methods //
	void setStrength(int newStrength);
	void setHitPoints(int newHit);
};