#include <iostream>

int multiplication(int x, int y) {
	return x * y;
}

int main () {
	int myResult = multiplication(10, 20);
	std::cout << "The result is: " << myResult;
	return 0;
}
