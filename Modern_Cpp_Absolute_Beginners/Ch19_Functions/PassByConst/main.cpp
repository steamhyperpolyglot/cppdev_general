#include <iostream>
#include <string>

void myFunc(const std::string& byConstRef) {
	std::cout << "Arguments passed by const reference: " << byConstRef;
}

int main () {
	std::string s = "Hello World!";
	myFunc(s);
	return 0;
}
