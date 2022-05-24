#include "Triangle.h"
using namespace std;

void Triangle::input() {
	cout << "Input angle value: ";
	cin >> angle;
	if (angle > 178) exit(1);
	cout << "Input length of right side: ";
	cin >> rSide;
	cout << "Input length of left side: ";
	cin >> lSide;

}

int Triangle::lenThird(int angle, int rSide, int lSide){
	double a = angle * 3.14 / 180;
	int c = pow(rSide * rSide + lSide * lSide - 2 * rSide * lSide * cos(a), 0.5);
	return c;
}

void Triangle::length() {
	int n;
	cout << "Press to get length of right side(1), left side(2), bottom side(3) or for all sides(4) ";
	cin >> n;
	if (n == 1) cout << "Length of right side is " << rSide << "\n";
	if (n == 2) cout << "Length of left side is " << lSide << "\n";
	if (n == 3) {
		int bSide = lenThird(angle, rSide, lSide);
		cout << "Length of bottom side is " << bSide << "\n";
	}
	if (n == 4) { 
		int bSide = lenThird(angle, rSide, lSide);
		cout << "Length of right side is " << rSide << ", " << "length of left side is " << lSide << ", " << "length of bottom side is " << bSide << "\n";
	}
}

void Triangle::square() {
	double a = sin(angle * 3.14 / 180);
	double s = 0.5 * rSide * lSide * a;
	cout << "Square of given triangle is " << s << "\n";
}

void Triangle::perimeter() {
	int bSide = lenThird(angle, rSide, lSide);
	cout << "Pereimeter of given triangle is " << rSide + lSide + bSide << "\n";
}

int main() {
	Triangle t, t1(60, 5, 12), t2(180, 5, 12);
	//t.input();

	t1.length();
	t1.square();
	t1.perimeter();

	t2.square();
}