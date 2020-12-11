#include <iostream>
#include <string>

class MyClass {
public:
	void operator + (MyClass const& other) {
		std::cout << "Overload Operator Called" << std::endl;
	}
};

int main () {
	MyClass A = MyClass();
	MyClass B = MyClass();
	A + B;
	return 0;
}
