#include <iostream>
#include <fstream>
using ULL = unsigned long long;
using namespace std;

int main() {
	ULL mas[2000];
	int k = 0;

	const char fname[] = "data3.txt";
	fstream f(fname, fstream::in);

	while (f >> mas[k++]) {
		;
	}
	f.close();

	cout.precision(4);
	for (int i = k-2; i >= 0; i--) {
		cout << sqrt(mas[i]) << endl;
	}

}