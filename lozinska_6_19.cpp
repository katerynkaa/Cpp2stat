#include <iostream>
#include <string>
using namespace std;
string DecimalToBinary(int num)
{
    string str;
    while (num)
    {
        if (num & 1)
            str += '1';
        else // 0
            str += '0';
        num >>= 1;
    }
    return str;
}

int main()
{
    int n, ans = 0;
    string s;
    cin >> n;
    s = DecimalToBinary(n);
    for (int i = 0; i < s.size(); i++)
    {
        if (i < s.size() - 1)
        {
            if (s[i] == s[i + 1] && s[i] == '1')
                ans++;
        }
    }
    cout << ans;
    return 0;
}