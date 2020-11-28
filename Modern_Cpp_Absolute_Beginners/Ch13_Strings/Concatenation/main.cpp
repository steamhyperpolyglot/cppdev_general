#include <iostream>
#include <string>

int main () {
	std::string s = "Hello ";
	s += "World.";
	char c = '!';
	s += c;
	std::cout << s;
	return 0;
}
