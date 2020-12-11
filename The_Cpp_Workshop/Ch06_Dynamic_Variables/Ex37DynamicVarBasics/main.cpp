#include <iostream>
using namespace std;

int main () {
	int* pInt = nullptr;
	pInt = new int;
	cout << "pInt = " << pInt << endl;
	delete pInt;
	cout << "pInt = " << pInt << endl;
	
	pInt = new int {33333};
	cout << "*pInt = " << *pInt << endl;
	delete pInt;

	return 0;
}
