#include <iostream>
#include <exception>\
#include <string>
#include <vector>
#include <cmath>

#define N 100

using namespace std;

class moreThanN : public exception {
public:
    const char* what() const throw() {
        return "You wanted to enter more elements than allowed";
    }
};

class oor : public exception {
public:
    const char* what() const throw() {
        return "The element you wanted to return is out of range";
    }
};

template <class T>
class Mediana {
    vector<T> arr;
public:

    Mediana() = default;

    Mediana(vector<T>& array) {
        if (array.size() > N)  throw moreThanN();
        this->arr = array;
    }

    template <class T>
    friend bool& operator>(const Mediana& m1, const Mediana& m2) {
        for (int i = 0; i < min(m1.arr.size(), m2.arr.size(); i++) {
            if (m1.arr.at(i) != m2.arr.at(i)) { return m1.arr.at(i) > m2.arr.at(i); }
        }
    }

    template <class T>
    friend bool& operator<(const Mediana& m1, const Mediana& m2) {
        for (int i = 0; i < min(m1.arr.size(), m2.arr.size(); i++) {
            if (m1.arr.at(i) != m2.arr.at(i)) { return m1.arr.at(i) < m2.arr.at(i); }
        }
    }

    void push(T element) {
        arr.push_back(element);
    }

    T pop(int n) {
        if (n > arr.size()) throw oor();
        T item = arr.at(n);
        arr.erase(arr.begin() + n);
        return item;
    }

    //element in the middle
    T median() {
        size_t l = arr.size();
        if (l % 2 == 0) {
            T prev = arr.at(l / 2);
            T nex = arr.at((l / 2) - 1);
            return prev + nex;
        }
        else {
            return arr.at((int)(l / 2) + 1);
        }
    }
     
};


int main() {
    try {
        vector<int> items = { 1, 5, 2, 6 }; //01234
        Mediana<int> med(items);
        med.push(0); //5
        int n;
        cout << "What el do you want to return ";
        cin >> n;
        cout << n << " element is " << med.pop(n) << '\n';
        cout << "median is " << med.median();
    }
    catch (exception& e) {
        cerr << e.what();
    }
}
