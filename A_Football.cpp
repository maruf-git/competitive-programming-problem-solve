// codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() < 7)
    {
        cout << "NO" << endl;
        return 0;
    }
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
            cnt++;
        else
            cnt = 1;
        if (cnt == 7)
            break;
    }
    if (cnt == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}