//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#ifndef RPG_H
#define RPG_H

#include <iostream>
#include <cstring>

using namespace std;


class Attack {
public:
	Attack(const char *name, int attackStat);
	~Attack();
	int getAttackStat() const { return m_attackStat; }
	char *getName() const { return m_name; }
private:
	char *m_name;
	int m_attackStat;
};

class Item {
public:
	Item(const char *name, int healStat);
	~Item();
	int getHealStat() const { return m_healStat; }
	char *getName() const { return m_name; }
private:
	char *m_name;
	int m_healStat;
};

class Character {
public:
	Character(const char *name, int strengthMultiplier, int defenceMultiplier, Attack *attacks, Item *items);
	~Character();
	
	const char *getName() { return m_name; }
	void DoAttack(string moveName, Character &other);
	void UseItem(string itemName);
	void Display();
private:
	void DoDefend(int attackValue) {
		int damage = attackValue / m_defenceMultiplier;
		m_health -= attackValue;
		cout << m_name << " takes " << damage << " damage" << endl;
	}
	
	int GetAttackAmount(string attackName) {
		for (int i = 0; i < m_attacksLength; i++) {
			if (m_attacks[i]->getName() == attackName) {
				return m_attacks[i]->getAttackStat();
			}
		}
		return 0;
	}
	
	int GetItemValue(string itemName) {
		for (int i = 0; i < m_itemsLength; i++) {
			if (m_items[i]->getName() == itemName) {
				return m_items[i]->getHealStat();
			}
		}
		
		return 0;
	}
	
	char *m_name;
	Attack **m_attacks;
	Item **m_items;
	int m_health;
	int m_strengthMultiplier;
	int m_defenceMultiplier;
	int m_attacksLength;
	int m_itemsLength;
};

#endif //RPG_H
