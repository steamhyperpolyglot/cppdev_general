#include <iostream>

int intfn();

int main () {
	std::cout << "The value of a function is: " << intfn();
	return 0;
}

int intfn() {
	return 42;
}