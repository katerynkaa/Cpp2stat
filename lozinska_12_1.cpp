#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y;
	cin >> x;
	cin >> y;
	cout << fixed << "x^y=" << pow(x, y) << endl;
	cout << scientific << "x^y= " << pow(x, y) << endl;
}