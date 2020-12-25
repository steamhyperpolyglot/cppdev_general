#include <iostream>
#include <sstream>
#include <algorithm>
#include "dynamic_array.h"

int main () {
	int nStudents;
	std::cout << "Enter number of students in class 1: ";
	std::cin >> nStudents;
	
	dynamic_array<student> class1(nStudents);
	for (int i = 0; i < nStudents; i++) {
		std::cout << "Enter name and class of student " << i + 1 << ": ";
		std::string name;
		int standard;
		std::cin >> name >> standard;
		class1[i] = student {name, standard};
	}
	
	/*try {
		class1[nStudents] = student { "John", 8 };
		std::cout << "class1 student set out of range without exception" << std::endl;
		//class1.at(nStudents) = student { "John", 8 };   // Will throw exception
	} catch (...) {
		std::cout << "Exception caught" << std::endl;
	}*/
	
	auto class2 = class1;       // Deep copy
	
	std::cout << "Second class after initialized using first array: " << class2.to_string() << std::endl;
	
	auto class3 = class1 + class2;
	// Combines both classes and creates a bigger one
	
	std::cout << "Combined class: ";
	std::cout << class3.to_string() << std::endl;
	
	return 0;
}
