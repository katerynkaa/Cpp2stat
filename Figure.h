#pragma once
#ifndef FIGURE
#define  FIGURE

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

typedef struct {
	int x;
	int y;
}Point;

class Figure {

public:

	string name;

	Figure() {
		string name = "";
	}

	Figure(string n) : name(n) {
		string name = n;
		if (name != "Triangle" || name != "Polygon" || name != "Pentagon" || name != "Rectangle") exit(-1);
	}

	void input();

	void length();

	void perimeter();

	void square();

	void isop();

	void set_name(string a) {
		name = a;
	}
	
};


#endif FIGURE