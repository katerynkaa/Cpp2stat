#include <iostream>
#include <list>

using namespace std;

template <typename T>
class Poly {
    size_t n;
    list<T> a; //[] is not
public:
    Poly() { n = 0; }
    Poly(int m) :n(m) {
        a.assign(m, 0);
    }
    Poly(size_t m, T* arr) :n(m) {
        for (size_t i = 0; i < n; i++) {
            a.push_back(arr[i]);
        }
    }

    int input() {
        cout << "n=";
        cin >> n;
        for (size_t i = 0; i < n; i++) {
            cout << "a[" << i << "]=";
            T x;
            cin >> x;
            a.push_back(x);
        }
        return n;
    }

    void output();

    Poly add(const Poly& x);

    Poly mult(const Poly& x);

};

template <class T>
void Poly<T>::output()
{
    size_t i = 0;
    for (auto& x : a) {
        cout << x << "*x^" << i;

        i++;
        if (i < n)
            cout << " + ";
    }
    cout << "\n";
}

template <class T>
Poly<T> Poly<T>::add(const Poly<T>& x)
{
    list<T> d;
    auto p1 = a.cbegin();
    auto p2 = x.a.cbegin();
    while (p1 != a.cend() && p2 != x.a.cend()) {
        T c = *p1 + *p2;
        d.push_back(c);
        p1++;
        p2++;
    }

    while (p1 != a.cend()) {
        d.push_back(*p1);
        p1++;
    }
    while (p2 != x.a.cend()) {
        d.push_back(*p2);
        p2++;
    }

    Poly r;
    r.n = max(n, x.n);
    r.a = d;
    return r;
}


template <class T>
Poly<T> Poly<T>::mult(const Poly<T>& x) {

    typename list<T>::const_iterator this_iter = a.cbegin();
    typename list<T>::const_iterator x_iter = x.a.cbegin();

    int i = 0, j = 0;

    list<T> d;
    d.assign((x.n - 1) + (n - 1) + 1, 0);
    typename list<T>::iterator d_iter = d.begin();


    while (this_iter != a.cend()) {
        while (x_iter != x.a.cend()) {
            T val = *this_iter * *x_iter;
            T val1 = *d_iter;
            *d_iter = val1 + val;   // c[i+j] += a[i]*a[j] 
            x_iter++;
            d_iter++;
        }
        this_iter++;
        //TODO: fix this

        //d_iter -=x.n;
        //advance(d_iter,-x.n+1);
        d_iter = d.begin();
        i++;
        next(d_iter, i);
    }

    Poly<T> res;
    res.n = n * x.n;
    res.a = d;
    return res;
}


int main() {

    Poly<int> x1;
    int ar[] = { 1,2,3 };
    Poly<int> x2(3, ar);

    x1.input();
    x1.output();
    x2.output();

    Poly<int> x3 = x1.add(x2);
    x3.output();

    Poly<int> x4 = x1.mult(x2);
    x4.output();

}

