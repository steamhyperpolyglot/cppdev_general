#include <iostream>
#include <string>

class MyClass {
public:
	int myPublicInt = 0;
protected:
	int myProtectedInt = 0;
private:
	int myPrivateInt = 0;
};

int main () {
	MyClass testClass;
	
	std::cout << testClass.myPublicInt << "\n";
	// std::cout << testClass.myPrivateInt << "\n";
	
	return 0;
}
