#include "Cyberdemon.h"
#include "stdafx.h"

Cyberdemon::Cyberdemon(int strength, int hits) : Demon(strength, hits){

}

string Cyberdemon::getSpecies(){
	return "Cyber Demon";
}

int Cyberdemon::getDamage(){
	int damage = Demon::getDamage();

	return damage;
}