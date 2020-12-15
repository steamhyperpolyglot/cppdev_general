//
// Created by steam.hyperpolyglot on 13/12/2020.
//
#include <cmath>

#ifndef POSITION_H
#define POSITION_H

class Position {
public:
	Position(float x, float y) : m_x(x), m_y(y) {}
	
	float distance(float x, float y) {
		float xDiff = x - m_x;
		float yDiff = y - m_y;
		
		return std::sqrt(((xDiff * xDiff) + (yDiff * yDiff)));
	}
private:
	float m_x;
	float m_y;
};

#endif //POSITION_H
