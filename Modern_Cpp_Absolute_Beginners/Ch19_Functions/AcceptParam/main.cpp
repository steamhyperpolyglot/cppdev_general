#include <iostream>

int mySquaredNumber(int x);

int main () {
	
	int myResult = mySquaredNumber(2);  // a call to the function
	std::cout << "Number 2 squared is: " << myResult;
	
	return 0;
}

// function definition
int mySquaredNumber(int x) {
	return x * x;
}