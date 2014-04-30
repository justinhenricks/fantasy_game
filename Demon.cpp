#include "Demon.h"
#include "stdafx.h"

Demon::Demon(int strength, int hit) : Creature(strength, hit){
}

string Demon::getSpecies(){
	return "Demon";
}

//demons (cyberdemons and balrogs) inflict damage of 50 with 5% chance
int Demon::getDamage(){
	int damage = Creature::getDamage();
	if((rand() % 100) < 5){
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}

	return damage;
}