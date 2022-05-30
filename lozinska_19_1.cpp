#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cout << "Number of customers:";
    cin >> n;

    queue<int> t;
    int time;
    for (int i = 0; i < n; ++i) {
        cout << "Time of " << i << "-th customer:";
        cin >> time;
        t.push(time);
    }

    queue<int> c;
    int sum_time = 0;
    int k = 0;
    while (!t.empty()) {
        int tmp = t.front();
        t.pop();
        sum_time += tmp;
        int t2 = sum_time > k ? (sum_time - k) : 0;
        c.push(t2);
        k++;
    }
    int i = 0;
    while (!c.empty()) {
        cout << "Customer " << i << " waited " << c.front() << ";\n";
        c.pop();
        i++;
    }

}
