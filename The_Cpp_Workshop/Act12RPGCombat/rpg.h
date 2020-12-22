//
// Created by steam.hyperpolyglot on 19/12/2020.
//

#ifndef RPG_H
#define RPG_H

#include <vector>

using namespace std;

class Attack {
public:
	Attack ( string name, int attackStat ) {
		m_name = name;
		m_attackStat = attackStat;
	}
	
	int getAttackStat () const { return m_attackStat; }
	
	string getName () const { return m_name; }

private:
	string m_name;
	int m_attackStat;
};

class Item {
public:
	Item ( string name, int healStat ) {
		m_name = name;
		strcpy ( m_name, name );
		m_healStat = healStat;
	}

private:
	string m_name;
	int m_healStat;
};

class Character {
public:
	Character ( string name, int strengthMultiplier,
	            int defenceMultiplier, vector<Attack> attacks, vector<Item> items ) {
		m_health = 100;
		m_name = name;
		m_strengthMultiplier = strengthMultiplier;
		m_defenceMultiplier = defenceMultiplier;
		m_attacks.insert ( m_attacks.begin (), attacks.begin (), attacks.end ());
		m_items.insert ( m_items.begin (), items.begin (), items.end ());
	}
	
	string getName() const { return m_name; }
	int getHealth() const { return m_health; }
	
	void DoAttack ( string moveName, Character &other ) {
		cout << m_name << " attacks " << other.getName () << " with "
		     << moveName << endl;
		other.DoDefend(GetAttackAmount(moveName) * m_strengthMultiplier);
	}
	
	void DoAttack ( Character &other ) {
		string attackName = m_attacks[m_indexOfDefaultAttack].getName();
		cout << m_name << " attacks " << other.getName() << " with "
			<< attackName << endl;
		other.DoDefend(GetAttackAmount(attackName) * m_strengthMultiplier);
	}
	
	void UseItem ( string itemName ) {
		int itemValue = GetItemValue(itemName);
		cout << m_name << " uses " << itemName << " and gains "
			<< itemValue << "health" << endl;
		m_health += itemValue;
	}
	
	bool IsDead () {
		return m_health <= 0;
	}
	
	void Display () {
		cout << m_name << endl;
		cout << "Health = " << m_health << endl;
		cout << "Strength Multiplier = " << m_strengthMultiplier
			<< endl;
		cout << "Defence Multiplier = " << m_defenceMultiplier << endl;
		cout << "Attacks:" << endl;
		
		for (auto attack : m_attacks)
			cout << attack.getName() << " : "
				<< attack.getAttackStat() << endl;
		cout << "Items: " << endl;
		
		for (auto item : m_items)
			cout << item.getName() << " : " << item.getHealStat() << endl;
	}

private:
	void DoDefend ( int attackValue ) {
		int damage = attackValue / m_defenceMultiplier;
		m_health -= damage;
		cout << m_name << " takes " << damage << " damage" << endl;
	}
	
	int GetAttackAmount ( string attackName ) {
		auto it = find_if(m_attacks.begin(), m_attacks.end(),
					[attackName](const Attack &attack) { attack.getName() == attackName; });
		return (it != m_attacks.end()) ? (*it).getAttackStat() : 0;
	}
	
	int GetItemValue ( string itemName ) {
		auto it = find_if(m_items.begin(), m_items.end(),
					[itemName] (const Item &item) { return item.getName() == itemName; });
		return (it != m_items.end()) ? (*it).getHealStat() : 0;
	}
	
	string m_name;
	vector<Attack> m_attacks;
	vector<Item> m_items;
	int m_health;
	int m_strengthMultiplier;
	int m_defenceMultiplier;
	int m_indexOfDefaultAttack;
};

#endif //RPG_H
