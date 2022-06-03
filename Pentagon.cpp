#include "Pentagon.h"

void Pentagon::inputPe() {
	for (int i = 0; i < 5; i++) {
		cout << "Input x coord for side " << i;
		cin >> mas[i].x;
		cout << "Input y coord for side " << i;
		cin >> mas[i].y;
	}
}

void Pentagon::lengthPe() {
	length();
}

void Pentagon::perimeterPe() {
	perimeter();
}

void Pentagon::squarePe() {
	square();
}

void Pentagon::isopPe() {

	int product, signPrev, sign = 0;
	int dx1, dx2, dy1, dy2, f = 0;

	for (int i = 0; i < 5; i++) {
		if (i < 5 - 1 && i + 1 == 5 - 1 && i + 2 > 5 - 1) {
			dx1 = mas[i + 1].x - mas[i].x;
			dy1 = mas[i + 1].y - mas[i].y;
			dx2 = mas[0].x - mas[i + 1].x;
			dy2 = mas[0].y - mas[i + 1].y;
		}
		else if (i == 5 - 1 && i + 1 > 5 - 1 && i + 2 > 5 - 1) {
			dx1 = mas[0].x - mas[i].x;
			dy1 = mas[0].y - mas[i].y;
			dx2 = mas[1].x - mas[0].x;
			dy2 = mas[1].y - mas[0].y;
		}
		else {
			dx1 = mas[i + 1].x - mas[i].x;
			dy1 = mas[i + 1].y - mas[i].y;
			dx2 = mas[i + 2].x - mas[i + 1].x;
			dy2 = mas[i + 2].y - mas[i + 1].y;
		}

		product = dx1 * dy2 - dy1 * dx2;

		signPrev = sign;
		if (product < 0) sign = -1;
		else if (product > 0) sign = 1;
		else if (product == 0) { ; }

		if (signPrev != 0 && sign != 0 && sign != signPrev) {
			f += 1;
		}
	}
	if (f == 0) cout << "This Polygon is  convex " << endl;
	else cout << "This Polygon is not convex " << f << endl;
}

