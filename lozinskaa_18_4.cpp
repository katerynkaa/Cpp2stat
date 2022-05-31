#include <iostream>
#include <exception>\
#include <string>

#define N 100

using namespace std;

class moreThanN : public exception {
public:
    const char* what() const throw() {
        return "You wanted to enter more elements than allowed";
    }
};

class numOutOfRange : public exception {
public:
    const char* what() const throw() {
        return "The element you wanted to return is out of range";
    }
};

template <class T>
class Mediana {
    T arr[N];
    int n;
public:

    Mediana() { n = 0; };

    template <class T>
    Mediana(T* arr1, int n) {
        for (int i = 0; i < n; i++) {
            if (i >= N) throw moreThanN();
            arr[i] = arr1[i];
        }
        this->n = n;
    }

    template <class T>
    void push(T element) {
        if (n >= N) throw moreThanN();
        arr[n++] = element;
    }

    template <class T>
    T pop(int m) {
        if (m >= N) throw numOutOfRange();
        T* ne = (T*)malloc(sizeof(arr[0]) * (this->n - 1));
        bool passed = false;
        T res;
        for (int i = 0; i < this->n; i++) {
            if (i == m) { 
                passed = true;
                res = arr[i];
            }
            if(passed == false){
                ne[i] = arr[i];
            }
            if (passed == true) {
                if (i + 1 == n)break;
                ne[i] == arr[i + 1];
            }
        }
        this->n--;
        for (int i = 0; i < this->n; i++) {
            arr[i] = ne[i];
        }
        return res;
    }

};

int main() {
    Mediana<int> med;
    int item;
    try {
        for (int i = 0; i < 5; i++) {
            cin >> item;
            med.push(item);
        }
        med.pop(3);
    }
    catch (exception& e) {
        cerr << e.what();
    }
}