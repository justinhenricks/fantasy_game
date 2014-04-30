#include "Elf.h"
#include "stdafx.h"

Elf::Elf(int strength, int hits) : Creature(strength, hits){

}

string Elf::getSpecies(){
	return "Elf";
}

//Elf inflict double magical damage with a 10% chance
int Elf::getDamage(){
	int damage = Creature::getDamage();
	if((rand() % 10) == 0){
		cout << "Magical attack inflicts " << damage <<
			" additional damage points!" << endl;

		damage = damage * 2;
	}

	return damage;
}