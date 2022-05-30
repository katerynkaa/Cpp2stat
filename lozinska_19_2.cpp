#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int enter(vector<double>& v, int d) {
    double x;
    for (int i = 0; i < d; ++i) {
        cin >> x;
        v.push_back(x);
    }
    return d;
}

double norma(const vector<double>& v) {
    double s = 0;
    for (int i = 0; i < v.size(); ++i) {
        s += v[i] * v[i];
    }
    return sqrt(s);
}

int main() {
    int d, n;
    cin >> d;
    cin >> n;
    double s = 0;
    vector<double> v1;
    for (int i = 0; i < n; ++i) {
        enter(v1, d);
        s += norma(v1);
    }
    cout << "s=" << s;
}