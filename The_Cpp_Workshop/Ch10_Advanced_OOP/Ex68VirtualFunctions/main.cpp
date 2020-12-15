#include <iostream>
#include "shapes.h"

int main () {
	Square square;
	square.height = 10;
	std::cout << "Square Area: " << square.CalculateArea() << std::endl;
	
	Circle circle;
	circle.radius = 10;
	std::cout << "Circle Area: " << circle.CalculateArea() << std::endl;
	return 0;
}
