//
// Created by steam.hyperpolyglot on 15/12/2020.
//

#ifndef SHAPES_H
#define SHAPES_H

//
// Created by steam.hyperpolyglot on 15/12/2020.
//

class Shape {
public:
	virtual int CalculateArea() = 0;

protected:
	int area = 0;
};

class Square : public Shape {
public:
	int height = 0;
	
	int CalculateArea() override {
		area = height * height;
		return area;
	}
};

class Circle : public Shape {
public:
	int radius = 0;
	
	int CalculateArea() override {
		area = 3.14 * (radius * radius);
		return area;
	}
};

#endif //SHAPES_H

