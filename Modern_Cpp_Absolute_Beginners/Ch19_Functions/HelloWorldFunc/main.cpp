#include <iostream>

void myFunction();  // function declaration

int main () {
	myFunction();
	return 0;
}

// function definition
void myFunction() {
	std::cout << "Hello World from a function.";
}
