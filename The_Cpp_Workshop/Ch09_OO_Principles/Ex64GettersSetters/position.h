//
// Created by steam.hyperpolyglot on 13/12/2020.
//

#ifndef POSITION_H
#define POSITION_H

#include <cmath>

class Position {
private:
	float m_x;
	float m_y;
public:
	Position(float x, float y): m_x(x), m_y(y) { }
	float distance(float x, float y) {
		float xDiff = x - m_x;
		float yDiff = y - m_y;
		return std::sqrt(((xDiff * xDiff) + (yDiff * yDiff)));
	}
	
	float getX() {
		return m_x;
	}
	
	void setX(float x) {
		m_x = x;
	}
	
	float getY() {
		return m_y;
	}
	
	void setY(float y) {
		m_y = y;
	}
};

#endif //POSITION_H
