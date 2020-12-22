#include <iostream>
#include <vector>
#include "encyclopedia.h"

using namespace std;

void PrintAnimalInfo(AnimalInfo info) {
	cout << "Name: " << info.name << endl;
	cout << "Origin: " <<info.origin << endl;
	cout << "Life Expectancy: " << info.lifeExpectancy << endl;
	cout << "Weight: " << info.weight << endl;
}

int main () {
	vector<Animal*> animals;
	animals.push_back(new Lion());
	animals.push_back(new Tiger());
	animals.push_back(new Bear());
	cout << "**Animal Encyclopedia**\n";
	
	bool bIsRunning = true;
	while (bIsRunning) {
		cout << "\nSelect animal for more information\n\n";
		
		for (size_t i = 0; i < animals.size(); ++i) {
			cout << i << ") " << animals[i]->GetAnimalInfo().name << endl;
		}
		cout << "\n-1) Quit Application\n";
		
		// Get user input
		string input;
		int userChoice;
		getline(cin, input);
		userChoice = stoi(input);
		
		if (userChoice == -1) {
			bIsRunning = false;
		} else {
			// Print animal info
			cout << endl;
			PrintAnimalInfo(animals[userChoice]->GetAnimalInfo());
		}
	}
	
	// Cleanup.
	for (size_t i = 0; i < animals.size(); ++i) {
		delete animals[i];
		animals[i] = nullptr;
	}
	
	animals.clear();
	
	return 0;
}
