#include <cstring>
#include <iostream>

using namespace std;
const int N = 10;

int main()
{
    char str[N];
    unsigned long long sums = 0UL;
    unsigned long long x;
    char* err;

    while (cin.get(str, N)) {
        x = strtoull(str, &err, N);
        sums += x;
    }
    cout << "sum=" << sums << "\n";
}

