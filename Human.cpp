#include "Human.h"
#include "stdafx.h"

Human::Human() : Creature(){
}

Human::Human(int strength, int hits) : Creature(strength, hits){
}

string Human::getSpecies(){
	return "Human";
}

int Human::getDamage(){
	return Creature::getDamage();
}