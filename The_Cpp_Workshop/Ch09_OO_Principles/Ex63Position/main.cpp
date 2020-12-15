#include <iostream>
#include "position.h"
using namespace std;

int main () {
	Position pos(10.0f, 20.0f);
	
	cout << "The distance from pos to (100, 40) is:"
		 << pos.distance(100.0f, 40.0f) << endl;
	
	return 0;
}
