#include <iostream>

int multipleReturns(int x);

int main () {
	std::cout << "The value of a function is: " << multipleReturns(25);
	return 0;
}

int multipleReturns(int x) {
	if (x >= 42) {
		return x;
	}
	return 0;
}
