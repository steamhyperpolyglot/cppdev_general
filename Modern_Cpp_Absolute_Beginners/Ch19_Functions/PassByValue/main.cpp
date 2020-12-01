#include <iostream>

void myFunction(int byVal) {
	std::cout << "Argument passed by value: " << byVal;
}

int main () {
	myFunction(123);
	return 0;
}
