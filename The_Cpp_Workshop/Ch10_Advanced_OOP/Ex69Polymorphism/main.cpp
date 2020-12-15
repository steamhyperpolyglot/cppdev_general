#include <iostream>
#include "shapes.h"

int main () {
	Shape* square = new Square();
	Shape* circle = new Circle();
	
	std::cout << "Square Area: " << square->CalculateArea() << std::endl;
	std::cout << "Circle Area: " << circle->CalculateArea() << std::endl;
	
	delete square;
	square = nullptr;
	
	delete circle;
	circle = nullptr;
	
	return 0;
}
