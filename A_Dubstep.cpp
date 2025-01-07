// Link: https://codeforces.com/problemset/problem/208/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> v;
    cin >> s;
    string s2;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (s2.size() > 0)
            {
                v.push_back(s2);
                s2.clear();
            }
        }
        else
        {
            s2.push_back(s[i]);
        }
    }
    if (s2.size() > 0)
    {
        v.push_back(s2);
    }
    for (auto u : v)
    {
        cout << u  << " ";
    }
    cout << endl;

    return 0;
}