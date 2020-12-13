#include <iostream>
using namespace std;

class Noisy {
	char const *s_;
	
public:
	Noisy(char const *s) {
		cout << "constructing " << s << endl;
		s_ = s;
	}
	
	~Noisy() {
		cout << "destroying " << s_ << endl;
	}
};

void func(char const *s) {
	Noisy func(s);
}

Noisy f ("global 1");
Noisy ff("global 2");

int main () {
	Noisy n1("main() function local 1");
	func("function local 2");
	
	{
		Noisy n("block local");
		func("function local 3");
	}
	return 0;
}
