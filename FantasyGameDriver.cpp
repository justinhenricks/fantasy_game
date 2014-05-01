#include "Creature.h"
#include "Balrog.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Elf.h"
#include "stdafx.h"
#include <vector>

int battleArena(Creature &creature1, Creature &creature2);

int main(){
	srand ( time(NULL) ); //this gives different results every time without it, same sequence of numbers are always generated
	std::vector<Creature*> creatureList;

	Human *human;
	human= new Human(100,100);
	creatureList.push_back(human);

	Cyberdemon *cyberDemon;
	cyberDemon = new Cyberdemon(100, 100);
	creatureList.push_back(cyberDemon);

	Balrog *balrog; 
	balrog = new Balrog(100, 100);
	creatureList.push_back(balrog);

	Elf *elf;
	elf = new Elf(100, 100);
	creatureList.push_back(elf);

	int result = 3; //my "status" variable, 3 = keep going
	while(result == 3){
		result = battleArena(*creatureList[3], *human);
	}

	return 0;
}

//My battle arena!!
int battleArena(Creature &creature1, Creature &creature2){
	cout << creature1.getSpecies() << " 1 has " << creature1.getHitPoints() << " hits left" << endl;
	cout << creature2.getSpecies() << " 2 has " << creature2.getHitPoints() << " hits left" << endl;

	int creature1DamageDone = creature1.getDamage();
	int creature2DamageDone = creature2.getDamage();

	creature1.setHitPoints(creature1.getHitPoints() - creature2DamageDone);
	creature2.setHitPoints(creature2.getHitPoints() - creature1DamageDone);

	if(creature1.getHitPoints() <= 0 && creature2.getHitPoints() <= 0){
		cout << "the result is a tie!" << endl;
		return 0; //this is result of tie
	}
	else if(creature1.getHitPoints() > 0 && creature2.getHitPoints() <= 0){
		cout << creature1.getSpecies() << " 1 wins!!" << endl;
		return 1; //this is result of Creature 1 winning!!
	}
	else if(creature1.getHitPoints() <= 0 && creature2.getHitPoints() > 0){
		cout << creature2.getSpecies() << " 2 wins!!" << endl;
		return 2; //this is result of Creature 2 winning!!
	}
	else{
		return 3; //this is result for looping
	}
}