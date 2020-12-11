#include <iostream>
using namespace std;

struct Noisy {
	Noisy() { cout << "constructing noisy" << endl; }
	~Noisy() { cout << "destroying noisy" << endl; }
};

int main () {
	Noisy *p = new Noisy();
	delete[] p;

	return 0;
}
