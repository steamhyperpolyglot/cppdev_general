#include <iostream>
#include "shapes.h"

int main () {
	Square mySquare;
	Circle myCircle;
	Triangle myTriangle;
	
	mySquare.area = 5;
	mySquare.color = "red";
	std::cout << "Square Area: " << mySquare.GetArea() << std::endl;
	
	myCircle.area = 15;
	myCircle.color = "blue";
	std::cout << "Circle Area: " << myCircle.GetArea() << std::endl;
	std::cout << "Triangle Area: " << myTriangle.GetArea() << std::endl;
	
	myTriangle.area = 15;
	myTriangle.color = "green";
	std::cout << "Triangle Area: " << myTriangle.GetArea() << std::endl;
	std::cout << "Triangle Color: " << myTriangle.GetColor() << std::endl;
	
	return 0;
}
