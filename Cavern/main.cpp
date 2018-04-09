#include <iostream>
#include <windows.h>
#include "map.h"
#include "character.h"

CCharacter *player;
enum STATES {GAME, EXIT};
int maps[4] = {0,1,2,3};

int main() {
	
	STATES gameState = GAME;
	CMap *map = new CMap("lalal", 0);
	int k = 0;
	std::cout << "Wybierz klase: (1 Warrior) (2 Mage)"; std::cin >> k;
	std::cin.ignore(10, '\n');
	std::cin.clear();

	switch (k) {
		case 1:
			player = new CWarrior("WARRIOREK", 1, 100);
			break;
		case 2:
			player = new CMage("MAGUSEK", 1, 180);
	}
	system("cls");
	while (gameState!=EXIT) {
		std::cout << "\t\t\t\t\t\tLocation: " << map->getName() << "(" << map->getLevel() << ")\n";
		std::cout << "Name: " << player->getName() << "\tLevel: " << player->getLevel() << "\n";
		std::cout << player->getClass() << player->getResource() << "/" << player->getMaxResource() << "\n";
		std::cout << "<<";
		std::cin.get();
		system("cls");
	}

return 0;
}

//CCharacter returnPlayer()
//{
//	return CCharacter();
//}
