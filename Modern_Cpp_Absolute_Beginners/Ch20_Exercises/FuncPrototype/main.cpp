#include <iostream>

void printMessage();    // function declaration

int main () {
	printMessage();
	return 0;
}

// function definition
void printMessage() {
	std::cout << "Hello World from a function.";
}
