#include "Figure.h"
void Figure::input() {
	;
};

void Figure::length() {
	if (name == "Polygon" || name == "Pentagon") {
		cout << "This progran doesn`t count length of sides of this figure: " << name << endl;
	}

	else {
		;
	}
};

void Figure::perimeter() {
	if (name == "Polygon" || name == "Pentagon") {
		cout << "This progran doesn`t count perimeter of this figure: " << name << endl;
	}

	else {
		;
	}
};

void Figure::square() {
	if (name == "Polygon" || name == "Pentagon") {
		cout << "This progran doesn`t count square of this figure: " << name << endl;
	}

	else {
		;
	}
};

void Figure::isop() {
	if (name == "Triangle" || name == "Rectangle") {
		cout << "This progran doesn`t check if this figure is convex: " << name << endl;
	}

	else if (name == "Polygon" || name == "Pentagon") {
		;
	}

	else cout << "Wrong figure name";
};