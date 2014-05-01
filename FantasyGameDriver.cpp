#include "Creature.h"
#include "Balrog.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Elf.h"
#include "stdafx.h"
#include <vector>

void battleArena(Creature &creature1, Creature &creature2);
string getMenu();
int validInput();
int main(){
	int menuChoice = 0;
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

	cout << "Welcome to the Fantasy Game!" << endl;
	cout << "Please choose your monsters from the menu! -1 to quit!" << endl;
	cout << getMenu() << endl;
	menuChoice = validInput();
	while(menuChoice != -1){
		battleArena(*creatureList[menuChoice], *creatureList[menuChoice]);

		//continue game
		cout << "Please choose your monsters from the menu! -1 to quit!" << endl;
		cout << getMenu() << endl;
		menuChoice = validInput();
	}



	return 0;
}

//My battle arena!!
void battleArena(Creature &creature1, Creature &creature2){
	cout << creature1.getSpecies() << " has " << creature1.getHitPoints() << " hits to start" << endl;
	cout << creature2.getSpecies() << " has " << creature2.getHitPoints() << " hits to start" << endl;
	cout << "\n";
	while(creature1.getHitPoints() > 0 && creature2.getHitPoints() > 0){
		creature1.setHitPoints(creature1.getHitPoints() - creature2.getDamage());
		creature2.setHitPoints(creature2.getHitPoints() - creature1.getDamage());

		if(creature1.getHitPoints() <= 0 && creature2.getHitPoints() <= 0){
			cout << "\n";
			cout << "the result is a tie!" << endl;
		}
		else if(creature1.getHitPoints() > 0 && creature2.getHitPoints() <= 0){
			cout << "\n";
			cout << creature1.getSpecies() << " 1 wins!!" << endl;
		}
		else if(creature1.getHitPoints() <= 0 && creature2.getHitPoints() > 0){
			cout << "\n";
			cout << creature2.getSpecies() << " 2 wins!!" << endl;
		}
		else{
			cout << "\n";
			cout << creature1.getSpecies() << " has " << creature1.getHitPoints() << " hits left" << endl;
			cout << creature2.getSpecies() << " has " << creature2.getHitPoints() << " hits left" << "\n" << endl;
		}
	}
}

//get the menu
string getMenu(){
	string menu = "0: Human \n 1: Cyber Demon \n 2: Balrog \n 3: Elf"; 

	return menu;
}

int validInput()
{
    int x;
    std::cin >> x;
    while(std::cin.fail() || x > 4 || x < -1)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout << "Bad entry. Please enter a valid menu entry: ";
        std::cin >> x;
    }
    return x;
}