#include <iostream>
#include <vector>
#include <queue>
#include "rpg.h"
using namespace std;

int main () {
	// Bill the player
	vector<Attack> billAttacks = {{ "Sword To The Face", 20 }};
	vector<Item> billItems = {{ "Old Grog", 50 }};
	Character bill("Bill", 2, 2, billAttacks, billItems);
	
	// Dragon
	vector<Attack> dragonAttacks = {{ "Flame Breath", 20 }};
	vector<Item> dragonItems = {{ "Scale Oil", 20 }};
	Character dragon("Dragon", 2, 1, dragonAttacks, dragonItems);
	
	// Zombie
	vector<Attack> zombieAttacks = {{ "Bite", 50 }};
	vector<Item> zombieItems = {{ "Rotten Flesh", 20 }};
	Character zombie("Zombie", 1, 3, zombieAttacks, zombieItems);
	
	// Witch
	vector<Attack> witchAttacks = {{ "Super Spell", 50 }};
	vector<Item> witchItems = {{ "Cure Potion", 20 }};
	Character witch("Witch", 1, 5, witchAttacks, witchItems);
	queue<Character> monsters;
	
	monsters.push(dragon);
	monsters.push(zombie);
	monsters.push(witch);
	
	bool playerTurn = true;
	bool gameOver = false;
	cout << "Bill finds himself trapped in a scary dungeon! There seems to be a series of rooms, he enters the first room..." << endl;
	
	while (!monsters.empty() && !gameOver) {
		Character currentMonster = monsters.front();
		cout << "A monster appears, it looks like  a "
			<< currentMonster.getName() << endl;
		while (!currentMonster.IsDead()) {
			cout << endl;
			if (playerTurn) {
				cout << "bill's turn" << endl;
				cout << "Bill can press 1 and enter to use an item and 2 to attack the monster." << endl;
				
				bool madeChoice = false;
				while (!madeChoice) {
					int choice;
					cin >> choice;
					
					switch(choice) {
						case 1:
							bill.UseItem("Old Grog");
							madeChoice = true;
							break;
							
						case 2:
							bill.UseItem("Old Grog");
							madeChoice = true;
							break;
							
						default:
							break;
					}
				}
			} else {
				cout << currentMonster.getName() << "'s turn" << endl;
				currentMonster.DoAttack(bill);
			}
			
			cout << "Bill's health is " << bill.getHealth() << endl;
			cout << currentMonster.getName() << "'s health is " << currentMonster.getHealth() << endl;
			
			if (currentMonster.IsDead()) {
				cout << currentMonster.getName() << " is defeated" << endl;
				monsters.pop();
			}
			
			if (bill.IsDead()) {
				gameOver = true;
				break;
			}
			
			playerTurn = !playerTurn;
		}
	}
	
	if (monsters.empty()) {
		cout << "You win";
	}
	
	if (gameOver) {
		cout << "You lose";
	}
	return 0;
}
