#include <iostream>
#include "shapes.h"

int main () {
	Shape* square = new Square();
	Shape* circle = new Circle();
	
	Square *square2 = static_cast<Square*>(square);
	square2->height = 10;
	
	Circle *circle2 = static_cast<Circle*>(circle);
	circle2->radius = 10;
	
	std::cout << "Square Area: " << square->CalculateArea() << std::endl;
	std::cout << "Circle Area: " << circle->CalculateArea() << std::endl;
	
	delete square;
	square = nullptr;
	
	delete circle;
	circle = nullptr;
	
	return 0;
}
