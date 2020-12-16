//
// Created by steam.hyperpolyglot on 15/12/2020.
//

#ifndef POSITION_H
#define POSITION_H

template<typename T, typename U>
class Position {
public:
	Position(T x, T y, U zRot) {
		m_x = x;
		m_y = y;
		m_zRotation = zRot;
	}
	
	T const getX() { return m_x; }
	T const getY() { return m_y; }
	U const getZRotation() { return m_zRotation; };
private:
	T m_x;
	T m_y;
	U m_zRotation;
};

#endif //POSITION_H
