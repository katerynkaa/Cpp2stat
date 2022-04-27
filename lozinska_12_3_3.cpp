#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void pl(int n) {
	for (int i = 1; i <= n; i++) {
		cout << "++++++";
	}
	cout << endl;
}
int main() {
	int n;
	string s1, s2, s3;
	cin >> n;
	cout << "n=" << n << endl;

	pl(n);
	for (int i = 1; i <= n; i++) {
		cout << "   " << int(i);
		if (i == n) cout << endl;
	}
	pl(n);
	for (int i = 1; i <= n; i++) {
		if ((double)sqrt(i) - (int)sqrt(i) == 0) {
			cout << "   " << int(sqrt(i));
		}
		else {
			cout << fixed;
			cout << setprecision(2);
			cout << " " << sqrt(i);
		}
		if (i == n) cout << endl;
	}
	pl(n);	

}