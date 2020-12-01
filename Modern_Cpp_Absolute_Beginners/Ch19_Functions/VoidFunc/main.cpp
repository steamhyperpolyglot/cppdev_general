#include <iostream>

void voidfn();

int main () {
	voidfn();
	return 0;
}

void voidfn() {
	std::cout << "The is void function and needs no return.";
}