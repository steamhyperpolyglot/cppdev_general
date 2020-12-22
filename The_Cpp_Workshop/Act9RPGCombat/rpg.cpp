//
// Created by steam.hyperpolyglot on 18/12/2020.
//

#include <iostream>

#include "rpg.h"

Attack::Attack(const char *name, int attackStat) {
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	m_attackStat = attackStat;
}

Attack::~Attack() {
	delete [] m_name;
}

Item::Item(const char *name, int healStat) {
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	m_healStat = healStat;
}

Item::~Item() {
	delete [] m_name;
}

Character::Character(const char *name, int strengthMultiplier, int defenceMultiplier, Attack *attacks, Item *items) {
	m_health = 100;
	
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	
	m_strengthMultiplier = strengthMultiplier;
	m_defenceMultiplier = defenceMultiplier;
	m_attacksLength = sizeof(attacks) / sizeof(&attacks[0]);
	m_itemsLength = sizeof(items) / sizeof(&items[0]);
	m_attacks = new Attack*[m_attacksLength];
	m_items = new Item*[m_itemsLength];
	int i = 0;
	
	for (i = 0; i < m_attacksLength; i++) {
		Attack *attack = new Attack(attacks[i]);
		m_attacks[0] = attack;
	}
	
	for (i = 0; i < m_itemsLength; i++) {
		Item *item = new Item(items[i]);
		m_items[0] = item;
	}
	
}

Character::~Character() {
	delete [] m_name;
}

void Character::DoAttack ( string moveName, Character &other ) {
	cout << m_name << " attacks " << other.getName()
		 << " with " << moveName << endl;
	other.DoDefend(GetAttackAmount(moveName) * m_strengthMultiplier);
}

void Character::UseItem(string itemName) {
	m_health += GetItemValue(itemName);
}

void Character::Display() {
	cout << m_name << endl;
	cout << "Health = " << m_health << endl;
	cout << "Strength Multipler = " << m_strengthMultiplier << endl;
	cout << "Defence Multiplier = " << m_defenceMultiplier << endl;
	cout << "Attacks:" << endl;
	for (int i = 0; i < m_attacksLength; i++)
		cout << m_attacks[i]->getName() << " : "
			 << m_attacks[i]->getAttackStat() << endl;
	cout << "Items:" << endl;
	for (int i = 0; i < m_itemsLength; i++)
		cout << m_items[i]->getName() << " : "
			 << m_items[i]->getHealStat() << endl;
}