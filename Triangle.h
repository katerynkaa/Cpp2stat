#pragma once
#ifndef TRIANGLE
#define  TRIANGLE
#include "Figure.h"

class Triangle : public Figure {
private:
	Point mas[3];
public:

	Triangle(){
		mas[0] = { 1,1 };
		mas[1] = { 2,3 };
		mas[2] = {5, 2};
	}

	void inputT() {
		for (int i = 0; i < 3; i++) {
			cout << "Input x coord for side " << i;
			cin >> mas[i].x;
			cout << "Input y coord for side " << i;
			cin >> mas[i].y;
		}
	};

	void lengthT() {
		int q;
		cout << "Number of each side is counted clockwise starting with the very left side" << endl;
		cout << "(Triangle) What side (1) left (2) right (3) bottom " << endl;
		cin >> q;
		if (q == 1) {
			double len = pow((mas[2].x - mas[0].x) * (mas[2].x - mas[0].x) + (mas[2].y - mas[0].y) * (mas[2].y - mas[0].y), 0.5);
			cout << "(Triangle) left side length: " << len << endl;
		}
		if (q == 2) {
			double len = pow((mas[0].x - mas[1].x) * (mas[0].x - mas[1].x) + (mas[0].y - mas[1].y) * (mas[0].y - mas[1].y), 0.5);
			cout << "(Triangle) right side length: " << len << endl;
		}
		if (q == 3) {
			double len = pow((mas[1].x - mas[2].x) * (mas[1].x - mas[2].x) + (mas[1].y - mas[2].y) * (mas[1].y - mas[2].y), 0.5);
			cout << "(Triangle) bottom side length: " << len << endl;
		}
	};

	void perimeterT() {
		double len1 = pow((mas[2].x - mas[0].x) * (mas[2].x - mas[0].x) + (mas[2].y - mas[0].y) * (mas[2].y - mas[0].y), 0.5);
		double len2 = pow((mas[0].x - mas[1].x) * (mas[0].x - mas[1].x) + (mas[0].y - mas[1].y) * (mas[0].y - mas[1].y), 0.5);
		double len3 = pow((mas[1].x - mas[2].x) * (mas[1].x - mas[2].x) + (mas[1].y - mas[2].y) * (mas[1].y - mas[2].y), 0.5);
		cout << "(Triangle) Perimeter:" << len1 + len2 + len3 << endl;
	};

	void squareT() {
		square();
		double len1 = pow((mas[2].x - mas[0].x) * (mas[2].x - mas[0].x) + (mas[2].y - mas[0].y) * (mas[2].y - mas[0].y), 0.5);
		double len2 = pow((mas[0].x - mas[1].x) * (mas[0].x - mas[1].x) + (mas[0].y - mas[1].y) * (mas[0].y - mas[1].y), 0.5);
		double len3 = pow((mas[1].x - mas[2].x) * (mas[1].x - mas[2].x) + (mas[1].y - mas[2].y) * (mas[1].y - mas[2].y), 0.5);
		double p = (len1 + len2 + len3) / 2;
		cout << p << endl;
		cout << len1 << endl;
		cout << len2 << endl;
		cout << len3 << endl;
		double s = pow(p * (p - len1) * (p - len2) * (p - len3), 0.5);
		cout << "(Triangle) Square:" << s << endl;
	};

	void isopT() {
		isop();
	};
};


#endif TRIANGLE
