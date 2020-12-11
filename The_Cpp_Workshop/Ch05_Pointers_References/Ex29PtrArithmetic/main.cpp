#include <iostream>
using namespace std;

int main () {
	int numbers[5] {0, 100, 200, 300, 400};
	int *pInt = numbers;
	int *p2 = &numbers[3];
	
	cout << "pInt = " << pInt << ", pInt + 1 = " << pInt + 1
		<< ", sizeof(int) = " << sizeof(int) << endl;
	
	cout << "*(pInt + 1) = " << *(pInt + 1)
		<< ", pInt[1] = " << pInt[1] << endl;
	
	cout << "*(pInt + 4) = " << *(pInt + 4)
		<< ", pInt[4] = " << pInt[4] << endl;
	
	cout << "p2 - pInt = " << p2 - pInt << endl;
	cout << "p2 == pInt = " << boolalpha << (p2 == pInt) << endl;
	cout << "p2 > pInt = " << boolalpha << (p2 > pInt) << endl;
	
	return 0;
}
