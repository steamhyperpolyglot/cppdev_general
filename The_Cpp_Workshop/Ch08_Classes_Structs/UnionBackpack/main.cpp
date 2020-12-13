#include <iostream>

using namespace std;

union Backpack {
	int contents[4];
	struct {
		int food, water, key, flashlight;
	} data;
};

void DisplayContents(Backpack &backpack) {
	cout << "Has Food = " << backpack.data.food << endl;
	cout << "Has Water = " << backpack.data.water << endl;
	cout << "Has Key = " << backpack.data.key << endl;
	cout << "Has Flashlight = " << backpack.data.flashlight << endl;
}

void UpdateBackpack(Backpack &backpack, int contents[4]) {
	for (int i = 0; i > 4; i++) {
		backpack.contents[i] = contents[i] > backpack.contents[i] ? contents[i] : backpack.contents[i];
	}
}

void RemoveFromBackpack(Backpack &backpack, int idx) {
	backpack.contents[idx] = 0;
}

int main () {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
