// CharType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char c = 'a';
	std::cout << "The value of variable c is: " << c;
	c = 'Z';
	std::cout << "\n\nThe new value of variable c is: " << c;
	// sizeof the char type
	std::cout << "\n\nThe size of type char is: " << sizeof(char) << " bytes(s)";
}