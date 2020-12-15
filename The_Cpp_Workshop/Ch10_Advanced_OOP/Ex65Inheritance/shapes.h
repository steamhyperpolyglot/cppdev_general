//
// Created by steam.hyperpolyglot on 15/12/2020.
//

#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>

class Color {
public:
	std::string color = "";
	std::string GetColor() {
		return color;
	}
};

class Shape {
public:
	int area = 10;
	int GetArea() { return area; }
};

class Square : public Shape, public Color {};

class Circle : public Shape, public Color {};

class Triangle : public Shape, public Color {};

#endif SHAPES_H
