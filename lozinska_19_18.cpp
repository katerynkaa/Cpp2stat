#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int l;
    cout << "Number of elements ";
    cin >> l;
    for (int i = 0; i < l; i++) {
        int el;
        cin >> el;
        v1.push_back(el);
        if (el % 2 != 0 && i <= (l / 2)) v1.push_back(-1);
        if (el % 2 == 0 && i >= (l / 2)) v1.push_back(-2);
    }

    auto iter = v1.begin();
    while (iter != v1.end())
    {
        cout << *iter << " ";
        ++iter;
    }

}