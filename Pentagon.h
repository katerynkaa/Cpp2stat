#pragma once
#ifndef PENTAGON
#define  PENTAGON
#include "Figure.h"

class Pentagon :public Figure {

private:
	Point mas[5];
public:

	Pentagon() {
		mas[0] = { 0, 1 };
		mas[1] = { -3, 3 };
		mas[2] = { -3, 6 };
		mas[3] = { -1, 8 };
		mas[4] = { 2, 8 };
	}

	void inputPe();
	void lengthPe();
	void perimeterPe();
	void squarePe();
	void isopPe();
};


#endif PENTAGON