#include <iostream>
#include <fstream>
#include <cmath>

#pragma warning(disable : 4996)

using namespace std;

int main() {
	unsigned n;
	cin >> n;

	int* m = new int[n];
	for (unsigned i = 0; i < n; i++) {
		cin >> m[i];
	}

	const char fname[] = "data.txt";
	double* x = new double[n];
	fstream f;
	f.open(fname, fstream::in);
	if (f.bad()) {
		cerr << "error opening file" << fname << "\n";
		delete[] x;
		delete[] m;
		return 0;
	}
	double a;
	int k = 0;
	while (f >> a && k < n) {
		x[k++] = a;
	}
	if (k != n) {
		cerr << "read only" << k << "numbers but" << n << "needed" << "\n";
	}
	else {
		const char gname[] = "data2.txt";
		fstream g;
		g.open(gname, fstream::out);
		for (unsigned i = 0; i < n; i++) {
			g << pow(x[i], m[i]) << "";
		}
		g.close();
	}
	f.close();

	delete[] x;
	delete[] m; //avoid mem leak
}
