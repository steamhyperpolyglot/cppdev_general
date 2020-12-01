#include <iostream>

int mySum(int x, int y);

int main () {
	int myResult = mySum(5, 10);
	std::cout << "The sum of 5 and 10 is: " << myResult;
	return 0;
}

int mySum(int x, int y) {
	return x + y;
}
