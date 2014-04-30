#include "Balrog.h"
#include "stdafx.h"

Balrog::Balrog(int strength, int hits) : Demon(strength, hits){

}

string Balrog::getSpecies(){
	return "Balrog";
}

//balrogs attack twice
int Balrog::getDamage(){
	int damage = Demon::getDamage();
	int damage2 = (rand() % Creature::getStrength()) + 1;

	cout << "Balrog speed attack inflicts " << damage2 <<
		" additional damage points!" << endl;

	damage = damage + damage2;

	return damage;
}