#include "Rectangle.h"

void Rectangle::inputR() {
	cout << "Input left upper angle x coord";
	cin >> luAngle.x;
	cout << "Input left upper angle y coord";
	cin >> luAngle.y;
	cout << "Input right down angle x coord";
	cin >> rdAngle.x;
	cout << "Input right down angle y coord";
	cin >> rdAngle.y;
}

void Rectangle::lengthR() {
	Point ldAngle = { luAngle.x, rdAngle.y };
	Point ruAngle = { rdAngle.x,  luAngle.y };
	int q;
	cout << "(Rectangle) What side (1) for right and left, (2) for upper and down ";
	cin >> q;
	if (q == 1) {
		double len = pow(((luAngle.x - ldAngle.x) * (luAngle.x - ldAngle.x)) + ((luAngle.y - ldAngle.y) * (luAngle.y - ldAngle.y)), 0.5);
		cout << "(Rectangle) right and left sides length: " << len << endl;
	}
	if (q == 2) {
		double len = pow(((luAngle.x - ruAngle.x) * (luAngle.x - ruAngle.x)) + ((luAngle.y - ruAngle.y) * (luAngle.y - ruAngle.y)), 0.5);
		cout << "(Rectangle) upper and down sides length: " << len << endl;
	}
}

void Rectangle::perimeterR() {
	Point ldAngle = { luAngle.x, rdAngle.y };
	Point ruAngle = { rdAngle.x,  luAngle.y };

	double len1 = pow(((luAngle.x - ldAngle.x) * (luAngle.x - ldAngle.x)) + ((luAngle.y - ldAngle.y) * (luAngle.y - ldAngle.y)), 0.5);
	double len2 = pow(((luAngle.x - ruAngle.x) * (luAngle.x - ruAngle.x)) + ((luAngle.y - ruAngle.y) * (luAngle.y - ruAngle.y)), 0.5);

	cout << "(Rectangle) Perimeter: " << 2 * (len1 + len2) << endl;
}

void Rectangle::squareR() {
	Point ldAngle = { luAngle.x, rdAngle.y };
	Point ruAngle = { rdAngle.x,  luAngle.y };

	double len1 = pow(((luAngle.x - ldAngle.x) * (luAngle.x - ldAngle.x)) + ((luAngle.y - ldAngle.y) * (luAngle.y - ldAngle.y)), 0.5);
	double len2 = pow(((luAngle.x - ruAngle.x) * (luAngle.x - ruAngle.x)) + ((luAngle.y - ruAngle.y) * (luAngle.y - ruAngle.y)), 0.5);

	cout << "(Rectangle) Square: " << len1 * len2 << endl;
}

void Rectangle::isopR() {
	isop();
}