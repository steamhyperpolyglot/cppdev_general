#include <iostream>
using namespace std;

class Noisy {
	int i_;
public:
	Noisy(int i) : i_(i) {
		cout << "constructing noisy" << i << endl;
	}
	
	~Noisy() {
		cout << "destroying noisy" << i_ << endl;
	}
};

int main () {
	Noisy N(1);
	Noisy *p = new Noisy(2);
	p = new Noisy(3);
	delete p;

	return 0;
}
