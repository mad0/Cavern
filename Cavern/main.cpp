#include <iostream>
#include <windows.h>
#include "map.h"
#include "character.h"

CCharacter *player;
enum STATES {GAME, EXIT};
int maps[4] = {0,1,2,3};
CCharacter returnPlayer();

int main() {
	STATES gameState = GAME;
	CMap *map = new CMap("lalal", 0);
	int k = 0;
	std::cout << "Wybierz klase: (1 Warrior) (2 Mage)"; std::cin >> k;

	while (gameState!=EXIT) {

		std::cout << "Name: " << player->getName() << "\tLevel: " << player->getLevel() << "\n\n";
		std::cout << player->getClass() << player->getResource() << "/" << player->getMaxResource()<< "\n\n";
		std::cout << "Location: " << map->getName() << "(" << map->getLevel() << ")" << "\n";
		std::cout << "----------------------------------------------------------\n";
		std::cin.get();
		system("cls");
	}

return 0;
}

//CCharacter returnPlayer()
//{
//	return CCharacter();
//}
