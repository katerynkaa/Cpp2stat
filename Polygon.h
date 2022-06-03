#pragma once
#ifndef POLYGON
#define  POLYGON
#include "Figure.h"
#define N 50

class Polygon :public Figure {
private:
	int n;
	Point mas[N];
public:

	Polygon() {
		n = 7;
		mas[0] = { 0, 1 };
		mas[1] = { -3, 3 };
		mas[2] = { -3, 6 };
		mas[3] = { -1, 8 };
		mas[4] = { 2, 8 };
		mas[5] = { 4, 6 };
		mas[6] = { 2, 3 };

	}
	void inputPo();
	void lengthPo();
	void perimeterPo();
	void squarePo();
	void isopPo();
};


#endif PENTAGON