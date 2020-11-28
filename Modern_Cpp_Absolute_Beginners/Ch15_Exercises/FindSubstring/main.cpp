#include <iostream>
#include <string>

int main () {
	std::string s = "Hello C++ World.";
	std::string mySubstring = "C++";
	auto mySubstringFound = s.find(mySubstring);
	
	if (mySubstringFound != std::string::npos) {
		std::cout << "Substring found at position: " << mySubstringFound << '\n';
	} else {
		std::cout << "Substring was not found." << '\n';
	}
	return 0;
}
