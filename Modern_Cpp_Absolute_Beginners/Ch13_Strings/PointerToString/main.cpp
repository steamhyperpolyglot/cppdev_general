#include <iostream>
#include <string>

int main () {
	std::string s = "Hello World.";
	// c_str() returns our string as an array of characters that ends with a null character.
	std::cout << s.c_str();
	return 0;
}
