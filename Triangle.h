#pragma once
#ifndef __TRIANGLE__
#define __TRIANGLE__

#include <iostream>
#include <cmath>

class Triangle {
private:
	int angle;
	int rSide;
	int lSide;
public:
	Triangle() {
		angle = 90;
		rSide = 3;
		lSide = 4;
	}
	Triangle(int x, int y, int z) :angle(x), rSide(y), lSide(z) {
		if (x > 178) exit(1);
	}
	void input();
	void length();
	void perimeter();
	void square();
private:
	int lenThird(int angle, int rSide, int lSide);
};

#endif __TRIANGLE__