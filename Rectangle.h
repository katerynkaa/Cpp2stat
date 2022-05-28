#pragma once
#ifndef RECTANGLE
#define  RECTANGLE
#include "Figure.h"

class Rectangle:public Figure {
private:
	Point luAngle;
	Point rdAngle;

public:
	Rectangle() {
		luAngle = { 5,5 };
		rdAngle = { 1,1 };
	}
	void inputR();
	void lengthR();
	void perimeterR();
	void squareR();
	void isopR();
};


#endif RECTANGLE