//
// Created by steam.hyperpolyglot on 19/12/2020.
//

#ifndef ENCYCLOPEDIA_H
#define ENCYCLOPEDIA_H

#include <string>
using namespace std;

struct AnimalInfo {
	string name = "";
	string origin = "";
	int lifeExpectancy = 0;
	float weight = 0;
};

class Animal {
public:
	AnimalInfo GetAnimalInfo() const { return animalInfo; }
protected:
	AnimalInfo animalInfo;
};

class Lion final : public Animal {
public:
	Lion() {
		animalInfo.name = "Lion";
		animalInfo.origin = "Africa";
		animalInfo.lifeExpectancy = 12;
		animalInfo.weight = 190;
	}
};

class Tiger final : public Animal {
public:
	Tiger() {
		animalInfo.name = "Tiger";
		animalInfo.origin = "Africa";
		animalInfo.lifeExpectancy = 17;
		animalInfo.weight = 220;
	}
};

class Bear final : public Animal {
public:
	Bear() {
		animalInfo.name = "Bear";
		animalInfo.origin = "Eurasia";
		animalInfo.lifeExpectancy = 22;
		animalInfo.weight = 270;
	}
};

#endif //ENCYCLOPEDIA_H
