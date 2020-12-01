#include <iostream>

void myFunction(int& byRef) {
	byRef++;        // we can modify the value of the argument
	std::cout << "Argument passed by reference: " << byRef;
}

int main () {
	int x = 123;
	myFunction(x);
	return 0;
}
