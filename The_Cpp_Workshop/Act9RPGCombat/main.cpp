#include <iostream>
#include "rpg.h"

using namespace std;

int main () {
	Attack billAttacks[] = { { "Sword To The Face", 20 } };
	Item billItems[] = {{ "Old Grog", 20 }};
	Attack dragonAttacks[] = {{ "Flame Breath", 50 }};
	Item dragonItems[] = {{ "Scale Oil", 20 }};
	Character bill { "Bill", 10, 5, billAttacks, billItems };
	bill.Display();
	Character dragon("Dragon", 10, 5, dragonAttacks, dragonItems);
	dragon.Display();
	bill.Display();
	bill.DoAttack("Sword To The Face", dragon);
	dragon.Display();
	dragon.DoAttack("Flame Breath", bill);
	bill.Display();
	return 0;
}
