//
// Created by steam.hyperpolyglot on 15/12/2020.
//

#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
#include <string>

class Shape {
public:
	int area = 0;
	
protected:
	std::string color = "color";
	
private:
	bool hasOutline = false;
};

class Square: private Shape {
public:
	Square() {
		area = 5;
		color = "red";
		hasOutline = true;
	}
};

#endif SHAPES_H
