#include <iostream>
#include <string>

int main () {
	std::string s = "Hello C++ World.";
	char c = 'C';
	auto characterFound = s.find(c);
	if (characterFound != std::string::npos) {
		std::cout << "Character found at position: " << characterFound << '\n';
	} else {
		std::cout << "Character was not found." << '\n';
	}
	return 0;
}
