#include <iostream>

int main () {
	int myInt = 5;
	std::cout << ++myInt << std::endl;
	std::cout << myInt << std::endl;
	
	myInt = 5;
	std::cout << myInt++ << std::endl;
	std::cout << myInt << std::endl;
	return 0;
}
