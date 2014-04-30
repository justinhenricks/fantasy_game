#include "Creature.h"
#include "stdafx.h"

Creature::Creature(){
	strength = 10;
	hitPoints = 10;
}

Creature::Creature(int strength, int hitPoints){
	this->strength = strength;
	this->hitPoints = hitPoints;
}

string Creature::getSpecies(){
	return "Species";
}

int Creature::getStrength(){
	return strength;
}

int Creature::getHitPoints(){
	return hitPoints;
}

void Creature::setStrength(int newStrength){
	this->strength = newStrength;
}

void Creature::setHitPoints(int newHitPoints){
	this->hitPoints = newHitPoints;
}

//all creatures inflict damage, that is a 
//random number r, where 0 < r <= strength
int Creature::getDamage(){
	int damage;
	damage = (rand() % strength) + 1;

	cout << getSpecies() << " attacks for " <<
		damage << " points!" << endl;

	return damage;
}
