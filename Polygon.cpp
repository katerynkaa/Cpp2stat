#include "Polygon.h"

void Polygon::inputPo() {
	cout << "Input number of sides of Polygon ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Input x coord for side " << i;
		cin >> mas[i].x;
		cout << "Input y coord for side " << i;
		cin >> mas[i].y;
	}
}

void Polygon::lengthPo() {
	length();
}

void Polygon::perimeterPo() {
	perimeter();
}
void Polygon::squarePo() {
	square();
}
void Polygon::isopPo() {

	int product, signPrev, sign = 0;
	int dx1, dx2, dy1, dy2, f = 0;

	for (int i = 0; i < n; i++) {
		if (i < n - 1 && i + 1 == n - 1 && i + 2 > n - 1) {
			dx1 = mas[i + 1].x - mas[i].x;
			dy1 = mas[i + 1].y - mas[i].y;
			dx2 = mas[0].x - mas[i + 1].x;
			dy2 = mas[0].y - mas[i + 1].y;
		}
		else if (i == n - 1 && i + 1 > n - 1 && i + 2 > n - 1) {
			dx1 = mas[0].x - mas[i].x;
			dy1 = mas[0].y - mas[i].y;
			dx2 = mas[1].x - mas[0].x;
			dy2 = mas[1].y - mas[0].y;
		}
		else{
			dx1 = mas[i+1].x - mas[i].x;
			dy1 = mas[i+1].y - mas[i].y;
			dx2 = mas[i + 2].x - mas[i + 1].x;
			dy2 = mas[i + 2].y - mas[i + 1].y;
		}

		product = dx1 * dy2 - dy1 * dx2;
		cout << product << endl;

		signPrev = sign;
		if (product < 0) sign = -1;
		else if (product > 0) sign = 1;
		else if (product == 0) { ; }
		cout << "pr " << signPrev << "n " << sign;

		if (signPrev != 0 && sign != 0 && sign != signPrev) {
			f += 1;
		}
	}
	if (f == 0) cout << "This Polygon is  convex "<< endl;
	else cout << "This Polygon is not convex " << f << endl;
}