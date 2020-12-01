#include <iostream>
#include <string>

void customMessage(const std::string& message) {
	std::cout << "The string argument you used is: " << message;
}

int main () {
	std::string myMessage = "My Custom Message.";
	customMessage(myMessage);
	return 0;
}
