// IntegerType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 123;
	int y = x;
	std::cout << "The value of x is: " << x << ", the value of y is: " << y;
	std::cout << std::endl;
	x = 456;
	std::cout << "The value of x is: " << x << ", the value of y is: " << y;
}