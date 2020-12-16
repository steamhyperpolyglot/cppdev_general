#include <iostream>
#include <string>
#include <typeinfo>
#include "position.h"

using namespace std;

int main () {
	Position<int, float> intPosition ( 1, 3, 80.0f );
	Position<float, int> floatPosition ( 1.5f, 3.14f, 80 );
	Position<long, float> longPosition ( 1, 3, 80.0f );
	
	cout << "type: " << typeid ( intPosition.getX ()).name () << " X: "
	     << intPosition.getX () << " Y: " << intPosition.getY () << endl;
	
	cout << "type: " << typeid ( floatPosition.getX ()).name () << " X: "
	     << floatPosition.getX () << " Y: " << floatPosition.getY () << endl;
	
	cout << "type: " << typeid ( longPosition.getX ()).name () << " X: "
	     << longPosition.getY () << " Y: " << longPosition.getY () << endl;
	
	cout << "type: " << typeid ( intPosition.getZRotation ()).name ()
	     << " Z Rot: " << intPosition.getZRotation () << endl;
	
	cout << "type: " << typeid ( floatPosition.getZRotation ()).name ()
	     << " Z Rot: " << floatPosition.getZRotation () << endl;
	
	cout << "type: " << typeid ( longPosition.getZRotation ()).name ()
	     << " Z Rot: " << longPosition.getZRotation () << endl;
	return 0;
}
