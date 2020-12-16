#include <iostream>
#include <typeinfo>
#include "position.h"

using namespace std;

template<typename T>
T getLargest(T t1, T t2) {
	if (t1 > t2) {
		return t1;
	} else {
		return t2;
	}
}

int main () {
	Position<int, float> intPosition(1, 3, 80.5f);
	Position<float, int> floatPosition(2.5f, 3.14f, 80);
	Position<long, float> longPosition(5, 3, 200);
	
	cout << "largest is: " << getLargest(intPosition.getX(), intPosition.getY()) << endl;
	cout << "largest is: " << getLargest(floatPosition.getX(), floatPosition.getY()) << endl;
	cout << "largest is: " << getLargest(longPosition.getX(), longPosition.getY()) << endl;
	
	cout << "largest ZRot is: " << getLargest(intPosition.getZRotation(), longPosition.getZRotation()) << endl;
	
	return 0;
}
