#include <iostream>

void myPrint(char param);
void myPrint(int param);
void myPrint(double param);

int main () {
	myPrint('c');
	myPrint(123);
	myPrint(456.789);
	return 0;
}

void myPrint(char param) {
	std::cout << "Printing a character: " << param << '\n';
}

void myPrint(int param) {
	std::cout << "Printing an integer: " << param << '\n';
}

void myPrint(double param) {
	std::cout << "Printing a double: " << param << '\n';
}
